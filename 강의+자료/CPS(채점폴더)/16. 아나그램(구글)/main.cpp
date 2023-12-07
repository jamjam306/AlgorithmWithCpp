#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
	// freopen("in1.txt", "rt", stdin);
	
	char x[101], y[101];
	
	cin >> x >> y;
	
	int _x[58] = {0, }, _y[58] = {0, };

	for(int i = 0; x[i] != '\0'; i++)
	{
		int digit = (x[i] - 65);
		_x[digit]++;
	}
	
	for(int i = 0; y[i] != '\0'; i++)
	{
		int digit = (y[i] - 65);
		_y[digit]++;
	}
	
	
	int flag = 1;
	for(int i = 0; i < 58 ; i++)
	{
		if(_x[i] != _y[i])
		{
			flag = 0;
			break;
		}	
			
	}
	
	if(flag == 1)
		cout << "YES";
	else
		cout << "NO";
	
    return 0;
}

