#include <iostream>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
	// freopen("in1.txt", "rt", stdin);

	int n;
	cin >> n;
	
	vector<int> list(n);
	vector<int> answer(n);
	
	for(int i = 0; i < n; i++)
		cin >> list[i];
	
	int dis, flag = 1;
	
	for(int i = 1; i < n; i++)
	{
		dis = abs(list[i -1] - list[i]);
		
		if(dis >= n)
		{
			flag = 0;
			break;			
		}
		if( answer[dis] == 0)
			answer[dis] += 1;
		else
		{
			flag = 0;
			break;
		}
	}
	
	if(flag != 1)
		for(int i = 1; i < n; i++)
		{
			if (answer[i] == 0)
			{
				flag = 0;
				break;
			}	
		}
	
	if(flag == 0)
		cout << "NO";
	else
		cout << "YES";	
		
	
	
    return 0;
}

