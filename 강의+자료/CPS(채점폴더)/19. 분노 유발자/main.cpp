#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
	// freopen("in1.txt", "rt", stdin);
	
	int n;
	cin >> n;
	
	int arr[101] = {0,};
	
	int input, max;
	int res = 0;
	
	for(int i = 0; i < n; i++)
	{
		cin >> input;
		arr[i] = input;
	}
	
	max = arr[n-1];
	for(int i = n - 1; i >= 0; i--)
	{
		if(max < arr[i])
		{
			max = arr[i];
			res ++;
		}
	}
	
		
		
	cout << res;
	
	
    return 0;
}

