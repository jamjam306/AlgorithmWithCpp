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
	int a[101], b[101];
	
	cin >> n;
	
	int input;
	
	for(int i = 0; i < n; i++)
	{
		cin >> input;
		a[i] = input;
	}
	
	for(int i = 0; i < n; i++)
	{
		cin >> input;
		b[i] = input;
	}
	
	for(int i = 0; i < n; i++)
	{
		int dis = a[i] - b[i];
		
		if(dis == 0)
			cout << "D" << endl;
		else if(dis == 1)
			cout << "A" << endl;
		else if(dis == -1)
			cout << "B" << endl;
		else if(dis == 2)
			cout << "B" << endl;
		else if(dis == -2)
			cout << "A" << endl;
	}
	
	
	
    return 0;
}

