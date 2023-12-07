#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
	// freopen("in1.txt", "rt", stdin);
    
    char input[100];
    scanf("%s", &input);
    
    int result = 0, cnt = 0;
    
    for(int i = 0; input[i] != '\0'; i++)
		if(input[i] >= 48 && input[i] <= 57)
			result = result * 10 + (input[i] - 48);
	
	printf("%d\n", result);
	
	for(int i = 1; i <= result; i++)
		if (result % i == 0)
			cnt += 1;
			
	printf("%d\n", cnt);
	
    
    
    return 0;
}
