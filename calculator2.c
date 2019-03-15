#include<stdio.h>
#include<math.h>
main(){
	char ch;
	float num1,num2,num3;
do{
	printf("\n\nPress 1 or + to add two number.");
	printf("\nPress 2 or - to subtract twon number.");
	printf("\nPress 3 or * to multiple two number.");
	printf("\nPress 4 or / to divise two number.");
	printf("\nPress 5 to find a power b.");
	printf("\nPress 6 to find the square root number of one value.");
	printf("\nPress 7 to find cube root number of one value.");
	printf("\nPress esc to exit.\n\n");
	ch=getch();
	switch(ch){
		case '1':
				printf("Enter the first number:");scanf("%f",&num1);
				printf("Enter the second number:");scanf("%f",&num2);
				num3=num1+num2;
				printf("%.2f+%.2f=%.2f",num1,num2,num3);
			break;
		case '+':
				printf("Enter the first number:");scanf("%f",&num1);
				printf("Enter the second number:");scanf("%f",&num2);
				num3=num1+num2;
				printf("%.2f+%.2f=%.2f",num1,num2,num3);
			break;
		case'2':
				printf("Enter the first number:");scanf("%f",&num1);
				printf("Enter the second number:");scanf("%f",&num2);
				num3=num1-num2;
				printf("%.2f-%.2f=%.2f",num1,num2,num3);
			break;
		case'-':
				printf("Enter the first number:");scanf("%f",&num1);
				printf("Enter the second number:");scanf("%f",&num2);
				num3=num1-num2;
				printf("%.2f-%.2f=%.2f",num1,num2,num3);
			break;
		case'3':
				printf("Enter the first number:");scanf("%f",&num1);
				printf("Enter the second number:");scanf("%f",&num2);
				num3=num1*num2;
				printf("%f*%f=%f",num1,num2,num3);
			break;
		case'*':
				printf("Enter the first number:");scanf("%f",&num1);
				printf("Enter the second number:");scanf("%f",&num2);
				num3=num1*num2;
				printf("%f*%f=%f",num1,num2,num3);
			break;
		case'4':
				printf("Enter the first number:");scanf("%f",&num1);
				printf("Enter the second number:");scanf("%f",&num2);
				num3=num1/num2;
				printf("%f/%f=%f",num1,num2,num3);
			break;
		case'/':
				printf("Enter the first number:");scanf("%f",&num1);
				printf("Enter the second number:");scanf("%f",&num2);
				num3=num1/num2;
				printf("%f/%f=%f",num1,num2,num3);
			break;
		case'5':
				printf("Enter a number:");scanf("%f",&num1);
				printf("Enter the power number:");scanf("%f",&num2);
				num3=pow(num1,num2);
				printf("%.2f power %.2f= %.2f",num1,num2,num3);
			break;
		case'6':
				printf("Enter a number:");scanf("%f",&num1);
				num3=sqrt(num1);
				printf("Squart root of %.2f=%.2f",num1,num3);
			break;
		case'7':
				printf("Enter a number:");scanf("%f",&num1);
				num3=cbrt(num1);
				printf("Cube root of %.2f=%.2f",num1,num3);
			break;
				
				
				
	}	
}while(ch!=27);
}
