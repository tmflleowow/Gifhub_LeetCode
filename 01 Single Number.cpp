#include <stdio.h>

//----------------------------------------------
//* We have a int array.
//* And than this array have 1 number just appear 1 time
//* So we will fine this number was appear 1 time 
//* 
//* skill
//* check the number
//* 
//----------------------------------------------


//method 1
int SingleNumber(int* nums , int numSize)
{
	for (int i = 0; i < numSize; i++)
	{
		//printf("%d", *(nums + i));
		int counter = 0;
		for (int j = 0; j < numSize; j++)
		{
			if (nums[j] == nums[i])
			{
				counter++;
			}
		}
		if (counter == 1)
		{
			return nums[i];
		}
	}
	
}

//method 2
int SingleNumber2(int* nums, int numSize)
{
	int n = nums[0];

	//for count from 1
	for (int i = 1; i < numSize; i++)
	{
		n ^= nums[i];
	}
	return n;
}

//method 3
char SingleLetter(char* nums, int numSize)
{
	char n = nums[0];

	//for count from 1
	for (int i = 1; i < numSize; i++)
	{
		n ^= nums[i];
	}
	return n;
}



int main()
{
	int arrayNum1[] = { 1, 1, 2, 2, 3 };  //size 5
	int arrayNum2[] = { 5, 6, 5, 6, 7 };  //size 5
	char arrayLetter[] = { 'a','a','b','b','c' };

	printf("%d\n", SingleNumber(arrayNum1, 5));
	printf("%d\n", SingleNumber(arrayNum2, 5));

	printf("%d\n", SingleNumber2(arrayNum1, 5));
	printf("%d\n", SingleNumber2(arrayNum2, 5));

	printf("%c\n", SingleLetter(arrayLetter, 5));

	
}