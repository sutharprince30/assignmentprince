/*Write a C program to print numbers from 1 to 10 using all three types of loops
(while, for, do-while).*/

/*#include<stdio.h>
int main ()
{
    int i;
    //for loop
    printf("\nfor loop:");
    for ( i = 1; i <=10; i++)
    {
        printf("\n%d",i);
    }

    // while loop
    printf("\nwhile loop:");
    i=1;

    while (i<=10)
    {
        printf("\n%d",i);
            i++;
    }
    // do while loop
    printf("\ndo while loop:\n");

    i=1;
    do
    {   printf("\n%d",i);
        i++;
        
    } while (i<=10);
    
    return 0;
}


/*WAP to take 10 no. Input from user find out below values a. How many Even
numbers are there b. How many odd numbers are there c. Sum of even
numbers d. Sum of odd numbers?


#include<stdio.h>
int main ()
{
	
	int num[10],evennum=0,oddnum=0,evencount=0,oddcount=0,i;
	
	printf("enter 10 number = ");
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	
	
	if(num[i]%2==0)
	{
	  evencount++;
	  evennum=evennum+num[i];
		
	}
	else
	{
		oddcount++;
		oddnum=oddnum+num[i];
	}
}
	
	printf("\ntotal even number =%d ",evencount);
	printf("\ntotal odd number =%d ",oddcount);
	printf("\nsum of even number =%d ",evennum);
	printf("\nsum of odd number =%d ",oddnum);
	
	return 0;
	 
}*/

/*WAP to print number in reverse order e.g.: number = 64728 ---> reverse =
82746  */

#include<stdio.h>
int main()
{
	int start,end,i;
	printf("\nEnter the starting value = ");
	scanf("%d",&start);//5
	printf("\nEnter the ending value = ");
	scanf("%d",&end);//10
	
	printf("\nNormal sequence = ");
	i=start;
	do
	{
		printf("%d ",i);
		i++;
	}while(i<=end);
	
	printf("\nReversed sequence = ");
	i=end;
	do
	{
		printf("%d ",i);
		i--;
	}while(i>=start);
	return 0;
}

