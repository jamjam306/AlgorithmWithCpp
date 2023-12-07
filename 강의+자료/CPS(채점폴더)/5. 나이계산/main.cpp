#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
	// freopen("in1.txt", "rt", stdin);
    char a[20];
    int year, age, sex;

    scanf("%s", &a);
    
    if(a[7] == '1')
    {
    	sex = 'M';
    	
    	year = 1900 + (a[0] - 48) * 10 + (a[1] - 48);
		age = 2019 - year + 1;
		    	
	}
	else if(a[7] == '2')
	{
    	sex = 'W';
    	
    	year = 1900 + (a[0] - 48) * 10 +  (a[1] - 48);
		age = 2019 - year + 1;
		    	
	}
	else if(a[7] == '3')
	{
    	sex = 'M';
    	
    	year = 2000 + (a[0] - 48) * 10 +  (a[1] - 48);
		age = 2019 - year + 1;
		    	
	}
	else if(a[7] == '4')
	{
    	sex = 'W';
    	
    	year = 2000 + (a[0] - 48) * 10 +  (a[1] - 48);
		age = 2019 - year + 1;
		    	
	}
	
	
	

	cout << age << " ";
	printf("%c", sex);


    return 0;
}
