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
	
	vector<int> in(n);
	vector<int> rank(n);
	
	for(int i = 0; i < n; i++)
	{
		int tmp = i + 1;
		int j = i;
		
		cin >> in[i];
		
		if(i == 0)
		{
			rank[i] = 1;
		}	
		else
		{
			while(j >= 0)
			{
				j--;
				
				if(in[i] > in[j])
					tmp--;				
			}
			
			rank[i] = tmp;
		}
		
	}	
	
	/*
	for(int i = 0; i < n; i++)
		cout << in[i] << " ";
		
	cout << endl;
	*/
	for(int i = 0; i < n; i++)
		cout << rank[i] << " ";
	
	
    return 0;
}

