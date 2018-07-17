//---------------------------------
// Project No.3
// Question 2.
// purpose: the purpose of this program is to print out each function to match the corresponding calling //statement. It takes user input for three integer numbers and then prints out the total, average, and //max/min of the list of numbers.
//----------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

void ShowTimeDate();
void ReadData(int *x, int *y, int *z);
int ComputeSum(int x, int y, int z);
void ComputeAverage(int x, int y, int z, float *average);
void Display(int x, int y, int z, int  total, float average);
void FindMaxMin(int x, int y, int z, int *max, int *min);


int main()
{
	int x, y, z;
	int total;
	float average;
	int max, min;

	ShowTimeDate();
	printf("\n");

	ReadData(&x, &y, &z);
	printf("\n");

	total = ComputeSum(x, y, z);
	ComputeAverage(x, y, z, &average);
	Display(x, y, z, total, average);
	FindMaxMin(x, y, z, &max, &min);
	DisplayMinMax(x, y, z, max, min);


	printf("\n");

	system("PAUSE");
	return 0;

}

void ShowTimeDate()
{
	printf("Today is ");
	time_t t;

	t = time(NULL);
	printf(ctime(&t));

}

void ReadData(int *x, int *y, int *z)
{
	printf("Enter three integer numbers : ");
	scanf("%d %d %d", x, y, z);
	printf("\n");

	// ComputeSum(x,y,z);

	return;
}

int ComputeSum(int x, int y, int z)
{
	int Sum = x + y + z;
	return Sum;
}

void ComputeAverage(int x, int y, int z, float *average)
{

	float nVariables = 3.00;
	*average = (float)((x + y + z) / (nVariables));

	return;
}

void Display(int x, int y, int z, int  total, float average)
{
	printf("Total of %d, %d, and %d is %d \n", x, y, z, total);
	printf("The average of %d, %d, and %d is %.2f", x, y, z, average);

	return;
}

void FindMaxMin(int x, int y, int z, int *max, int *min)
{

	*max = x > y ? (x > z ? x : z) : (y > z ? y : z);
	*min = x < y ? (x < z ? x : z) : (y < z ? y : z);

	return;
}

void DisplayMinMax(int x, int y, int z, int max, int min)
{
	printf("\nThe max and min of %d, %d, and %d is %d and %d", x, y, z, min, max);

	return;
}
