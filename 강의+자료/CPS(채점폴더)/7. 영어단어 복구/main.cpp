#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
	// freopen("in4.txt", "rt", stdin);
	
	char input[101];
	char tmp; 
	
	gets(input);
	
	for(int i = 0; input[i] != '\0'; i++)
	{
		if(input[i] == ' ')
			continue;
			
		if(input[i] >= 65 && input[i] <= 90)
			tmp = input[i] + 32;
		else
			tmp = input[i];
			
		printf("%c", tmp);
	
	}
	
    return 0;
}
