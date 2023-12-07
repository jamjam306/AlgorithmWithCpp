#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int digit_sum(int x)
{
	int temp = x;
	int sum = 0;
	
	while(temp != 0)
	{
		sum += temp % 10;
		
		temp /= 10;
	}
	
	return sum;
}
	

int main(int argc, char** argv)
{
	// freopen("in1.txt", "rt", stdin);
	
	int cnt;	
	cin >> cnt;

	int max = -1, max_digit = -1;
	int input;
	
	for(int i = 0; i < cnt; i++)
	{	
		cin >> input;
		
		// cout << input << " : " << digit_sum(input) << endl;
		
		int sum = digit_sum(input);
		
		if( max_digit < sum )
		{
			max_digit = sum;
			max = input;
		}
		else if(max_digit == sum )
		{
			if(max < input)
				max = input;	
		}
	}
	
	cout << max;
	
    return 0;
}

