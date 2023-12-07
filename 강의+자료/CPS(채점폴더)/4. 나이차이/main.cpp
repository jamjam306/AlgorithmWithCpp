#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
    int max = -2147000000, min = 2147000000;
    int n, temp;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp > max) max = temp;
        if (temp < min) min = temp;
    }    

    cout << max - min;

    return 0;
}
