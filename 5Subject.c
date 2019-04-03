/*This program is used to Explain the structure of C program*/
/*Written by Mr Leo 5/12/2018*/
#include<stdio.h>
main(){
float a,b,c,d,e,f,g;
printf("Enter Mark of Khmer History:");scanf("%f",&a);
printf("Enter Mark of Physic:");scanf("%f",&b);
printf("Enter Mark of Khmer Chimestry:");scanf("%f",&c);
printf("Enter Mark of Math:");scanf("%f",&d);
printf("Enter Mark of English:");scanf("%f",&e);
f=a+b+c+d+e;
printf("The Total of five subject is %f",f);
g=f/6;
printf("\nThe average of five subject is %f",g);


/*printf("Enter the value of B:");scanf("%d",&b);
c=a+b;
printf("The value of c is %d\n",&c);
c=a-b;*/

/*Condition*/
/*
if(a>b)printf("Max is A %d",a);
else printf("Max is B %d",b);
*/
getch();
}
