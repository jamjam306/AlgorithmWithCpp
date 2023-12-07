#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
	// freopen("in1.txt", "rt", stdin);
	
	int n = 10;
	
	int a[10], b[10];
	int a_sum = 0, b_sum = 0;
	char last;
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
	
		if(dis > 0)
		{
			a_sum += 3;
			last = 'A';
		}
		else if (dis == 0)
		{
			a_sum += 1;
			b_sum += 1;
		}
		else
		{
			b_sum +=3;
			last = 'B';
		}
	}
	
	cout << a_sum << " " << b_sum << endl;
	
	int dis = a_sum - b_sum;

	if(dis > 0)
		cout << "A";
	else if (dis == 0)
	{
		if (a_sum == 10) cout << "D";
		else cout << last;
	}
	else
		cout << "B";

	
	
	
	
    return 0;
}

