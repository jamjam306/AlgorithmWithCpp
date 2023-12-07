#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int isPrime(int x)
{	
	if (x == 1)
		return 0;
	
	for(int i = 2; i * i <= x; i++)
		if(x % i == 0)
			return 0;
	
	return 1;
}

int main(int argc, char** argv)
{
	// freopen("in1.txt", "rt", stdin);
	
	int input;
	cin >> input;	
	
	int arr[200001] = {0,};
	
	int cnt = 0;
	for(int i = 1; i <= input; i++)
	{
		for(int j = i; j <= input; j+=i)
		{
			arr[j]++;
		}
	}
	
	for(int i = 2; i <=input;i++)
	{
		if(arr[i] == 2)
			cnt++;
	}
	
	cout << cnt;
	
	
    return 0;
}

