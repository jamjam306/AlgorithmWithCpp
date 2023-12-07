#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
	int n, sum = 0;

    cin >> n;
    
    cout << 1;
    sum += 1;

    for(int i = 2; i < n; i++) 
    {
        if( n % i == 0)
        {
            cout << '+' << i;

            sum += i;
        }
    }

    cout << '=' << sum << endl;
    return 0;
}
