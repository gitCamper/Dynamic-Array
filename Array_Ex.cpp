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
	// Need to create another loop to view array because there is no real value of i outsde of the first loop
	for (i = 0; i < Number; i++)
	{
		if (foo[0] < foo[i])			//Takes the first value and comppares to the next value
		{
			foo[0] = foo[i];		//Denotes the first value with teh larger of the two as it goees through each iteration
		}
	}
	cout << "largest Number is  " << foo[0]<<endl;
	delete[]foo;

	system("pause");
	return 0;
}
