#include <stdio.h>


//���F�Ō�ɂP�ɂȂ�邩
//EX:  19 =>  (1*1)+(9*9)       = 82
//     82 =>  (8*8)+(2*2)       = 68
//     68 =>  (6*6)+(8^8)       = 100      
//    100 =>  (1*1)+(0*0)+(0*0) = 1
//     19 = �\�ł��B


//������1��1�ɂ�����@�@12345�@=> 1,2,3,4,5
int NewNumber(int num)
{
	int sum = 0;
	while (num != 0)
	{
		int d = num %10;
		num /= 10;
		sum += d * d;
	}
	return sum;
}

//�T�C�N�������@
bool CheckNumber(int number)
{
	int fast = number;
	int slow = number;

	do
	{
		slow = NewNumber(slow);
		fast = NewNumber(NewNumber(fast));
	} while (fast != slow);
	printf("%d ", fast);
	return  fast == 1;
}

int main()
{
	int number = 19;
	if (CheckNumber(number))
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}
