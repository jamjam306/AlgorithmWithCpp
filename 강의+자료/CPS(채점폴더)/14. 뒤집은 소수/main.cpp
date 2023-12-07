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


int reverse(int x)
{
	int result = 0, tmp = x;
	
	while(tmp != 0)
	{
		result = result * 10 + tmp % 10;
		tmp /= 10;
	}
	
	return result;
}

int main(int argc, char** argv)
{
	// freopen("in3.txt", "rt", stdin);
	
	
	int cnt;
	cin >> cnt;
	
	int input;
	for(int i = 0; i < cnt; i++)
	{
		cin >> input;
		
		if( isPrime(reverse(input)) == 1)
			printf("%d ", reverse(input));
	
	}
	
	
    return 0;
}

