/*Write a C program that uses the break statement to stop printing numbers
when it reaches 5. Modify the program to skip printing the number 3 using the
continue statement.*/


#include <stdio.h>

int main() {
	
	int i;
    for ( i = 1; i <= 10; i++) {  
        
        if (i == 3) {
            continue;  
        }
        
        if (i == 5) {
            break;  
        }

        printf("%d\n", i);
    }

    return 0;

}

//Calculate the Sum of Natural Numbers Using the While Loop


#include <stdio.h>
int main()
 {
    int num,sum=0,i;

    
    printf("Enter a positive number = ");
    scanf("%d", &num);

    i=1;
    
    while (i <= num)
	 {
        sum = sum+i;
        i++;
    }

    
    printf("Sum of %d natural numbers is=%d", num, sum);

    return 0;
}



//Program of Armstrong Number in C Using For Loop & While Loop

#include<stdio.h>
int main()
{
	int num,cnt=0,rem,i,power,sum=0;
	printf("\nEnter the number = ");
	scanf("%d",&num);
	int temp = num;
	int copy = num;
	while(num!=0)
	{
		num = num/10;
		cnt++;
	}
	for(i=1;i<=cnt;i++)
	{
		rem = temp%10;
		power = pow(rem,cnt);
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


/*WAP to accept 5 numbers from user and display in reverse order using for
loop and array*/



#include<stdio.h>
int main()
{
	int a[5],size,i;
	
	for(i=0;i<5;i++)
	{
		printf("\nEnter the elements in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("\nReversed array = ");
	for(i=5-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

