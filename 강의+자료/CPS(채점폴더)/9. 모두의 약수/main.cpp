#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
	// freopen("in3.txt", "rt", stdin);
	
	int input;
	cin >> input;

	int cnt[50001] = { 0, };
	
	for(int i = 1; i <= input; i++)
	{
		for(int j = i; j <= input; j+=i)
			cnt[j] += 1;
	}
	
	for(int i = 1; i <= input; i++)
		cout << cnt[i];
	
	
	
    return 0;
}
