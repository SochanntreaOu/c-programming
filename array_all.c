#include<stdio.h>
/*
void main()
{ int a[30],i,j,n,temp;
printf("\n Enter no of elements :");
scanf("%d",&n);
for(i=0 ; i < n ; i++)
scanf("%d",&a[i]);
j = i-1; // j will Point to last Element
i = 0; // i will be pointing to first element
while(i < j)
{ temp = a[i];
a[i] = a[j];
a[j] = temp;
i++;
j--; }
printf("Thge reverse number of array is:");
for(i = 0 ;i< n ;i++)
printf("\n %d",a[i]);
}
*/

/*
void main()
{ int arr[30],element,num,i,location;
printf("\n Enter no of elements :");
scanf("%d",&num);
for(i=0 ; i < num ; i++)
scanf("%d",&arr[i]);
printf("\n Enter the element to be inserted :");
scanf("%d",&element);
printf("\n Enter the location");
scanf("%d",&location);
for(i = num ;i >= location ; i--)
arr[i] = arr[i-1];
num++;
arr[location-1] = element;
for(i = 0 ;i < num ;i++)
printf("\n %d",arr[i]);
}
*/

/*
void main()
{ int a[30],n,i,j;
printf("\n Enter no of elements :");
scanf("%d",&n);
printf("\n Enter %d elements :",n);
for(i=0;i < n;i++)
scanf("%d",&a[i]);
printf("\n location of the element to be deleted :");
scanf("%d",&j);
while(j < n)
{ a[j-1]=a[j];
j++; }
n--;
for(i=0;i < n;i++)
printf("\n %d",a[i]);
getch();
}
*/

/*
void main()
{ int a[50],i,j,k,size,n,t;
printf("\nEnter size of the array: ");
scanf("%d",&n);
printf("\nEnter %d elements into the array: ",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
size=n;
for(i=0;i<size;i++){
for(j=0;j<size;j++){
if(i==j) continue;
else if(a[i]==a[j]){
k=j;
size--;
while(k < size){
a[k]=a[k+1];
k++; }
j=0;
} } }
for(i=0;i<size;i++){
for(j=i+1;j<size;j++){
if(a[i]>a[j])
{t=a[i];
a[i]=a[j];
a[j]=t; } } }
printf("\nThe array after removing duplicates is: ");
for(i=0;i < size;i++)
printf(" %d ",a[i]);
}
*/


void main()
{ int a[30],x,n,i;
printf("\nEnter no of elements :");
scanf("%d",&n);
printf("\nEnter the values :");
for(i=0;i < n;i++)
scanf("%d",&a[i]);
printf("\nEnter the elements to be searched");
scanf("%d",&x);
i=0;
while(i < n && x!=a[i])
i++;
if(i < n) /* Element is found */
printf("found at the location =%d",i+1);
else
printf("\n not found");
}


/*
void main()
{
int array[10];
int i, j, N, temp, keynum;
int low,mid,high;
printf("Enter the value of N\n");
scanf("%d",&N);
printf("Enter the elements one by one\n");
for(i=0;i<=N;i++) {
scanf("%d",&array[i]);}
printf("Enter the element to be searched\n");
scanf("%d", &keynum);
low=1;
high=N;
do
{mid= (low + high) / 2;
if ( keynum < array[mid] )
high = mid - 1;
else if ( keynum > array[mid])
low = mid + 1;
} while( keynum!=array[mid] && low <= high);
if( keynum == array[mid] )
printf("SUCCESSFUL SEARCH\n");
else
printf("Search is FAILED\n");
}
*/

/*
#include<stdio.h>
void bubble_sort(int [],int);
void main()
{ int a[30],n,i;
printf("\nEnter no of elements :");
scanf("%d",&n);
printf("\nEnter array elements :");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
bubble_sort(a,n);
getch();
} 
void bubble_sort(int a[],int n)
{int i,j,k,temp;
printf("\nUnsorted Data:");
for(k=0;k<n;k++)
printf("%5d",a[k]);
for(i=1;i< n;i++)
{ for(j=0;j< n-1;j++)
if(a[j]>a[j+1])
{ temp=a[j];
a[j]=a[j+1];
a[j+1]=temp; }
printf("\nAfter pass %d : ",i);
for(k=0;k< n;k++)
printf("%5d",a[k]); }
}
*/


/*
#include <stdio.h>
#include <math.h>
int binary_decimal(int n);
int decimal_binary(int n);
void main()
{ int n; char c;
printf("1. Enter alphabet 'd' to convert binary todecimal.\n");
printf("2. Enter alphabet 'b' to convert decimal tobinary.\n");
scanf("%c",&c);
if (c =='d' || c == 'D')
{ printf("Enter a binary number: ");
scanf("%d", &n);
printf("%d in binary = %d in decimal", n,
binary_decimal(n)); }
if (c =='b' || c == 'B')
{ printf("Enter a decimal number: ");
scanf("%d", &n);
printf("%d in decimal = %d in binary", n,
decimal_binary(n)); }
}
int decimal_binary(int n)
{ int rem, i=1, binary=0;
while (n!=0)
{ rem=n%2;
n/=2;
binary+=rem*i;
i*=10; }
return binary; }
int binary_decimal(int n)
{ int decimal=0, i=0, rem;
while (n!=0)
{ rem = n%10;
n/=10;
decimal += rem*pow(2,i);
++i; }
return decimal;
}
*/
