#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
	// freopen("in1.txt", "rt", stdin);
	
	char input[101];
	cin >> input;
	
	int arr[11] = {0,};
	int digit;
	
	for(int i = 0; input[i] != '\0'; i++)
	{
		digit = (input[i] - 48);
		arr[digit] += 1;
		
	}	
	
	int max = -1,res;
	
	for(int i = 1; i < 10; i++)
	{
		if(max <= arr[i])
		{
			res = i;
			max = arr[i];
		}
	}
	
	cout << res;
	
    return 0;
}

