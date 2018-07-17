//---------------------------------
// Project No.3
// Question 3.
// purpose: the purpose of this program is to compute the 3^3) + (3^4) + (3^5) +...(3^10) using //recursion.
//----------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int Factorial(int n);

int main()
{

	printf("(3^3) + (3^4) + (3^5) +...(3^10) = %d \n", Factorial(10));

	system("PAUSE");
	return 0;

}

int Factorial(int n)
{
	if (n == 3)
	{
		return 27;
	}
	else
	{
		return pow(3, n) + Factorial(n - 1);
	}
	return;
}
