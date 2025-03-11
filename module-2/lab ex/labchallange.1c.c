/*Lab Challenge 1: Armstrong Number:-

• Write a C program that checks whether a given number is an Armstrong number or not (e.g.,
153 = 1^3 + 5^3 + 3^3).
*/


#include<stdio.h>
int main()
{
	int num,digit=0,sum=0,power,i,rem;
	printf("\nEnter the number = ");
	scanf("%d",&num);//24/10=2/10=0
	int temp = num;
	int copy = num;
	while(num!=0)
	{
		num = num/10;
		digit++;
	}
	for(i=1;i<=digit;i++)
	{
		rem = temp%10;
		power = pow(rem,digit);
		sum = sum + power;
		temp = temp/10;
	}
	if(sum==copy)
	{
		printf("\n%d is an armstrong number",copy);
	}
	else
	{
		printf("\n%d is not an armstrong number",copy);
	}
	return 0;
}


//• Challenge: Write a program to find all Armstrong numbers between 1 and 1000.

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, sum, digits, temp;

    printf("Armstrong numbers between 1 and 1000 are:\n");

    for (num = 1; num <= 1000; num++) {
        originalNum = num;
        temp = num;
        sum = 0;
        digits = 0;

        // Count the number of digits
        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        // Calculate the sum of digits raised to the power of digits
        temp = num;
        while (temp > 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        // Check if it's an Armstrong number
        if (sum == originalNum) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}





