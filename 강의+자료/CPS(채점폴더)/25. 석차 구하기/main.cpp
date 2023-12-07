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
		
	int input, now;
	
	for(int i = 0; i < n; i++)
	{
		cin >> input;
		
		in[i] = input;
		now = 1;
		
		for(int j = 0; j < i; j++)
		{
			if(in[j] > input)
				now++;
			else if(in[j] < input)
				rank[j]++;
		}	
	
		rank[i] = now;
	
		
	}
	
	for(int i = 0; i < n; i++)
		cout << rank[i] << " ";
	
	
    return 0;
}

