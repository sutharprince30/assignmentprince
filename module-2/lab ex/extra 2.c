//LAB EXERCISE 1: Grade Calculator


/*• Write a C program that takes the marks of a student as input and displays the corresponding
grade based on the following conditions:
o Marks > 90: Grade A
o Marks > 75 and <= 90: Grade B
o Marks > 50 and <= 75: Grade C
o Marks <= 50: Grade D
• Use if-else orswitch statements for the decision-making process.*/


#include <stdio.h>
int main() 
{
    int marks;

    printf("Enter the student's marks= ");
    scanf("%d", &marks);

    if (marks > 90) {
        printf("Grade: A\n");
    } else if (marks > 75 && marks <= 90) {
        printf("Grade: B\n");
    } else if (marks > 50 && marks <= 75) {
        printf("Grade: C\n");
    } else {
        printf("Grade: D\n");
    }

    return 0;
}



//LAB EXERCISE 2: Number Comparison

/*• Write a C program that takes three numbers from the user and determines:
o The largest number.
o The smallest number.
• Challenge: Solve the problem using both if-else and switch-case statements.*/


// with if - else .
#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("\nEnter the value of n1 = ");
	scanf("%d",&n1);
	printf("\nEnter the value of n2 = ");
	scanf("%d",&n2);
	printf("\nEnter the value of n3 = ");
	scanf("%d",&n3);

//largest no.	
	if(n1>n2 && n1>n3)
	{
		printf("\n %d  is the largest number ",n1);
	}
	else if (n2>n1 && n2>n3)
	{
		printf("\n %d  is the largest number ",n2);
	}
	else
	{
		printf("\n %d  is the largest number ",n3);
		
	}
	
	
//smallest no.	
	if(n1<n2 && n1<n3)
	{
		printf("\n %d  is the smallest number ",n1);
	}
	else if (n2<n1 && n2<n3)
	{
		printf("\n %d  is the smallest number ",n2);
	}
	else
	{
		printf("\n %d  is the smallest number ",n3);
		
	}
	
	
	
	return 0;
}





// switch case

#include<stdio.h>
int main ()
{
	int n1,n2,n3,large,small;
	
	printf("\nEnter the value of n1 = ");
	scanf("%d",&n1);
	printf("\nEnter the value of n2 = ");
	scanf("%d",&n2);
	printf("\nEnter the value of n3 = ");
	scanf("%d",&n3);
	
	large=(n1>n2)?(n1>n3?1:3):(n2>n3?2:3);
	
	switch(large)
	{
		case 1:
			printf("\n%d is largest number ",n1);
			break;
		case 2:
			printf("\n%d is largest number ",n2);
			break;
		case 3:
			printf("\n%d is largest number ",n3);
			break;
	}

	small=(n1<n2)?(n1<n3?1:3):(n2<n3?2:3);
	
	switch(small)
	
	{
		case 1:
			printf("\n%d is smallest number ",n1);
			break;
		case 2:
			printf("\n%d is smallest number ",n2);
			break;
		case 3:
			printf("\n%d is smallest number ",n3);
			break;
	}
		

	
	return 0;
}


/*LAB EXERCISE 3: Temperature calculation

• Write a C program to read temperature in centigrade and display a suitable message according
to the temperature state below: Temp < 0 then Freezing weather Temp 0-10 then Very Cold
weather Temp 10-20 then Cold weather Temp 20-30 then Normal in Temp Temp 30-40 then
Its Hot Temp >=40 then Its Very Hot
*/


#include <stdio.h>

int main() 
{
    float temp;

    printf("Enter the temperature in centigrade: ");
    scanf("%f", &temp);


    if (temp < 0) {
        printf("Freezing weather\n");
    } else if (temp >= 0 && temp < 10) {
        printf("Very Cold weather\n");
    } else if (temp >= 10 && temp < 20) {
        printf("Cold weather\n");
    } else if (temp >= 20 && temp < 30) {
        printf("Normal in Temp\n");
    } else if (temp >= 30 && temp < 40) {
        printf("It's Hot\n");
    } else {
        printf("It's Very Hot\n");
    }

    return 0;
}

