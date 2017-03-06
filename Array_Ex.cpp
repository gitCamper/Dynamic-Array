#include <iostream>
using namespace std;
int main()
{
	int Number=0;
	int i;
	cout << "How many numbers do you want to enter \n";
	cin >> Number;

	int *foo;
	foo = new int[Number];

	for (i = 0; i<Number; i++)
	{	
		
		cout << "Number  " << i + 1<<":		" ;
		cin >> foo[i];	
		
	}
	
	for (i = 0; i < Number; i++)
	{
		if (foo[0] < foo[i])
		{
			foo[0] = foo[i];
		}
	}
	cout << "largest Number is  " << foo[0]<<endl;
	delete[]foo;

	system("pause");
	return 0;
}