//---------------------------------
// Mohammed Hassnain
// cpsc 223c
// Sept 15, 2015
// Project No.3
// Question 1.
// purpose: the purpose of this program is to print out the number of letters, vowels, and words after //the user has entered a sentence.
//----------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

isvowel(char c);
int vowel = 0;

int main()
{

	int alpha = 0;
	int words = 0;

	int i = 0;


	char s[30];
	char c;

	printf("Please enter a sentence: ");
	fgets(s, 30, stdin);


	while (c != '\n')
	{

		c = s[i];
		if (isalpha(c))
		{
			alpha++;

			isvowel(c);
		}

		if (isspace(c))
		{
			++words;
		}
		i++;
	}

	printf("\n");
	printf("Number of letters.......................... %d", alpha);
	printf("\n");


	printf("Number of words............................ %d", words);
	printf("\n");


	printf("Number of vowels........................... %d", vowel);
	printf("\n");

	printf("Program done. ");

	return 0;
	system("PAUSE");
}

int isvowel(char c)
{
	if (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' ||
		c == 'O' || c == 'o' || c == 'U' || c == 'u' || c == 'Y' || c == 'y')
	{
		vowel++;
	}

	return vowel;
}
