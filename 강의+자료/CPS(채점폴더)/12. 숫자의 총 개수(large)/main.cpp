#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
	// freopen("in4.txt", "rt", stdin);
	
	int input;
	int sum = 0, cnt = 0;
	
	cin >> input;
	
	int tmp = input;
	
	// input�� �ڸ��� Ȯ�� => cnt 
	while(tmp != 0)
	{
		tmp /= 10;
		cnt ++;
	}
	
	
	int temp1 = 1, temp2 = 1;
	int i;
	
	// (cnt - 1) �ڸ��� ������ ��� �� 
	for(i = 1; i < cnt; i++)
	{
		sum += (temp1 * 10 - temp2) * i;
		
		temp1 *= 10;
		temp2 *= 10;
			
	}

	// ������ cnt �ڸ��� ������ ��� �� 
	sum += (input - temp1 + 1) * i;
	
	cout << sum;
	
    return 0;
}

