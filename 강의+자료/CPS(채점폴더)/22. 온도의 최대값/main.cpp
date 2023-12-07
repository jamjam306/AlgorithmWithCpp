#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
	// freopen("in1.txt", "rt", stdin);

	int n, k;
	cin >> n >> k;

	int sum = 0;
	
	std::vector<int> a(n);
	
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	
	
	for(int i = 0; i < k; i++)
		sum += a[i];
		
	int max = sum;
	
	for(int i = k; i < n; i++)
	{
		sum = sum + a[i] - a[i -k];
		if(sum > max) max = sum;
	}
	
	cout << max;
	
    return 0;
}

