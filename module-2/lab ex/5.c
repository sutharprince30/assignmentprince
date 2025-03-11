/*Write a C program to check if a number is even or odd using an if-else
statement. Extend the program using a switch statement to display the month
name based on the user’s input (1 for January, 2 for February, etc.).
*/

#include<stdio.h>
   int main()
{
    int n1, month;

    // for if,else
    printf("\nenter the value of n1 = ");
    scanf("%d", &n1);

    if (n1 % 2 == 0)
    {
        printf("%d is even number", n1);
    }
    else
    {
        printf("%d is odd number", n1);
    }

    // switch case for months

    printf("\nenter any month number out of 1 to 12 = ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("\n%dJan", month);
        break;

    case 2:
        printf("\n%dFeb", month);
        break;
    case 3:
        printf("\n%d mar", month);
        break;
    case 4:
        printf("\n%d Apr", month);
        break;
    case 5:
        printf("\n%d May", month);
        break;
    case 6:
        printf("\n%d Jun", month);
        break;
    case 7:
        printf("\n%d Jul", month);
        break;
    case 8:
        printf("\n%d Aug", month);
        break;
    case 9:
        printf("\n%d Sep", month);
        break;
    case 10:
        printf("\n%d Oct", month);
        break;
    case 11:
        printf("\n%d Nov", month);
        break;
    case 12:
        printf("\n%d Dec", month);
        break;
    }
        return 0;
    }
    
    
    

//WAP to find maximum number among 3 numbers using ternary operator
    
    
#include<stdio.h>
int main ()
{
	int n1,n2,n3,max;
	
	printf("\nenter the value of n1 = ");
	scanf("%d",&n1);
	printf("\nenter the value of n2 = ");
	scanf("%d",&n2);
	printf("\nenter the value of n3 = ");
	scanf("%d",&n3);
	
	max=n1>n2?n1:n2;
	max=max>n3?max:n3;
	
	printf("\nthe maximum value is %d",max);
	
	return 0;
}



//Write a C program to calculate profit and loss on a transaction


#include <stdio.h>

int main() {
    float costprice, sellingprice, profit, loss;
	
	printf("\nenter the cost price = ");
	scanf("%f",&costprice);
	
	printf("\nenter the selling price = ");
	scanf("%f",&sellingprice);
	
	if(sellingprice>costprice)
	{
		profit=sellingprice-costprice;
		printf("the profit on product is Rs.%.2f",profit);
		
		
	}
	else if (costprice>sellingprice)
	{
		loss=costprice-sellingprice;
		printf("the loss on product is Rs.%.2f",loss);
		
	}
	else
	{
		printf("\nno profit , no loss");
	}
	

    return 0;
}

