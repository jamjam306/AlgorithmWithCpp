#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
	// freopen("in1.txt", "rt", stdin);
	
	int N, M;
	cin >> N >> M;
	
	int cnt = 0, tmp = 0;
	int input;
	
	for(int i = 0; i < N; i++)
	{
		cin >> input;
		
		if( input > M)
		{
			cnt ++;
			if( tmp < cnt)
				tmp = cnt;
		}	
		else
		{
			cnt = 0;
		}
		
	}
	
	if(tmp == 0) cout << "-1";
	else cout << tmp;
	
    return 0;
}

