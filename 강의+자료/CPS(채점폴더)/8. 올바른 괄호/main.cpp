#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
	// freopen("in4.txt", "rt", stdin);
	
	char input[31];
	int num = 0;
	
	scanf("%s", &input);
	
	for(int i = 0; input[i] != '\0'; i++)
	{
		if (input[i] == '(')
			num += 1;
		else if (input[i] == ')')
			num -= 1;
			
		if (num < 0)
			break;
		
	}
	
	if(num == 0)
		printf("YES");
	else
		printf("NO");
		
    return 0;
}
