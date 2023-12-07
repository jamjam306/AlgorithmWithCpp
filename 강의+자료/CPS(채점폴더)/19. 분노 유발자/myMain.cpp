#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
	//freopen("in1.txt", "rt", stdin);
	
	int n;
	cin >> n;
	
	int arr[101] = {0,};
	
	int input, max = -1, max_idx, before_idx;
	int res = 0;
	
	for(int i = 0; i < n; i++)
	{
		cin >> input;
		if(max <= input)
		{
			max = input;
			max_idx = i;	
		}	
		arr[i] = input;
	}
	
	if(max_idx != n - 1)
		res++;
	
	before_idx = max_idx;
	
	while(before_idx != n -1)
	{
		max = 0;
		
		for(int i = before_idx + 1; i < n; i++)
		{
			if(max <= arr[i])
			{	
				max = arr[i];
				max_idx = i;
			}
		}
		
		if(max_idx != n-1)
			res++;
			
		before_idx = max_idx;
	}
		
	cout << res;
	
	
    return 0;
}

