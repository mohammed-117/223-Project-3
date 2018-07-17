//---------------------------------
// Project No.3
// Question 4.
// purpose: the purpose of this program is to compute and display the run-time of computing the 40th //Fibonacci number recursively and non-recursively.
//----------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long int Fib(int n);
long int FibNR(int n);

int main()
{

	//***********RECURSIVE*********************

	unsigned start, finish;

	start = clock();
	printf("40 Fibonacci number is %d \n", Fib(40));
	finish = clock();
	printf("Runtime = %d", (finish, start) / CLK_TCK);
	printf("\n\n");
	//*****************************************

	//***********NON-RECURSIVE*****************

	start = clock();
	printf("40 Fibonacci number is %d \n", FibNR(40));
	finish = clock();
	printf("Runtime = %d", (finish, start) / CLK_TCK);
	printf("\n\n");
	//*****************************************

	system("PAUSE");
	return 0;

}

long int Fib(int n)
{
	if ((n == 1) || (n == 2))
	{
		return 1;
	}
	else
	{
		return Fib(n - 1) + Fib(n - 2);
	}

	return;
}

long int FibNR(int n)
{
	long int fib1 = 1;
	long int fib2 = 1;
	long int fibn;
	int i;

	for (i = 3; i <= n; ++i)
	{
		fibn = fib1 + fib2;
		fib1 = fib2;
		fib2 = fibn;
	}

	return fibn;
}
