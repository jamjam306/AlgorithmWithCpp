#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
	// freopen("in1.txt", "rt", stdin);
	
	int cnt;
	
	cin >> cnt;
	
	int n, sum;
	for(int i = 0; i < cnt; i++)
	{
		cin >> n >> sum;
		
		if( sum == (n * (n + 1) ) /2)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	
	}
	
    return 0;
}

