#include<stdio.h>
#include<stdlib.h>
main(){
	char ch,ch1;
	
do{ 
	int num,n,j,i=1,k=1,l;
	
    long long int a[10],Bin1,Bin2,base1=1,base2=1,dec1=0,dec2=0,n3,n4,b,c,Dec,d,N,remnant;
    int n1,n2,Re; 
	printf("\n1.Convert Decimal to binary\n");
	printf("2.Plus Binary(Decimal)\n");
	printf("3.Plus Binary(Binary)\n");
	printf("4.Subtraction Binary(Decimal)\n");
	printf("5.Subtraction Bianry(Binary)\n");
	printf("6.Mutiplication Binary(Decimal)\n");
	printf("7.Multiplication Binary(Binary)\n");
	printf("8.Division Binary(Decimal)\n");
	printf("9.Division Binary(Binary)\n");
	printf("Press esc to Exit\n\n");
    ch=getch();
switch(ch){
				
	case'1':
			printf("Convert Decimal to binary\n");
			printf("Enter a decimal number: ");
    		scanf("%d", &num);
    		n=num;
    		while (n!=0){
        	a[i] = n%2;
        	n=n/2;
        	i++;}
        	printf("The Result is:");
        	for(j=i-1;j>0;j--)
			printf("%lld",a[j]);
			printf("in binary\n");
			getch();
		break;
	case'2':
					printf("Plus Binary(Decimal)\n");
					printf("Input first Decimal number:");scanf("%d",&n1);
					printf("Input second Decimal number:");scanf("%d",&n2);
					Re=n1+n2;
					n=Re;
		    		while (n!=0){
		        	a[i] = n%2;
		        	n=n/2;
		        	i++;}
		        	printf("The Result is:");
		        	for(j=i-1;j>0;j--)
					printf("%lld",a[j]);
						printf("in binary\n");
					getch();
		break;
	case'3':	
					printf("Plus Binary(Binary)\n");
					printf("Enter first binary number:");scanf("%lld",&Bin1);
					n3=Bin1;
					 while (Bin1>0){
			        b= Bin1%10;
			        dec1 = dec1 + b* base1;
			        Bin1 = Bin1/10 ;
			        base1 = base1 * 2;}
			        
			        
			        printf("Enter second binary number:");scanf("%lld",&Bin2);
			        n4=Bin2;
					 while (Bin2>0){
			        c= Bin2%10;
			        dec2 = dec2 + c* base2;
			        Bin2 = Bin2/10 ;
			        base2 = base2 * 2;}
			        
					Dec=dec1+dec2;
					
		    		while (Dec!=0){
		        	a[i] = Dec%2;
		        	Dec=Dec/2;
		        	i++;}
		        	
		        	printf("\nThe Result is:");
		        	
		        	for(j=i-1;j>0;j--){
		        	printf("%lld",a[j]);}
					printf("in binary\n");
			        
		break;
	case'4':        
					printf("Subtraction Binary(Decimal)\n");
					printf("Input first number:");scanf("%d",&n1);
					printf("Input second number:");scanf("%d",&n2);
					Re=n1-n2;
					n=Re;
		    		while (n!=0){
		        	a[i] = n%2;
		        	n=n/2;
		        	i++;}
		        	printf("The Result is:");
		        	for(j=i-1;j>0;j--)
					printf("%lld",a[j]);
					printf("in binary\n");
					getch();
		break;
	case'5':		
					printf("Subtraction Bianry(Binary)\n");
					printf("Enter first binary number:");scanf("%lld",&Bin1);
					n3=Bin1;
					 while (Bin1>0){
			        b= Bin1%10;
			        dec1 = dec1 + b* base1;
			        Bin1 = Bin1/10 ;
			        base1 = base1 * 2;}
			        
			        printf("Enter second binary number:");scanf("%lld",&Bin2);
			        n4=Bin2;
					 while (Bin2>0){
			        c= Bin2%10;
			        dec2 = dec2 + c* base2;
			        Bin2 = Bin2/10 ;
			        base2 = base2 * 2;}
			        
					Dec=dec1-dec2;
					
		    		while (Dec!=0){
		        	a[i] = Dec%2;
		        	Dec=Dec/2;
		        	i++;}
		        	printf("The Result is:");
					for(j=i-1;j>0;j--){
		        	printf("%lld",a[j]);}
		        	printf("in binary\n");
			        
		break;	
	case'6':		
					printf("Mutiplication Binary(Decimal)\n");
					printf("Input first number:");scanf("%d",&n1);
					printf("Input second number:");scanf("%d",&n2);
					Re=n1*n2;
					n=Re;
		    		while (n!=0){
		        	a[i] = n%2;
		        	n=n/2;
		        	i++;}
		        	printf("The Result is:");
		        	for(j=i-1;j>0;j--)
					printf("%lld",a[j]);
					printf("in binary\n");
					getch();
		break;
	case'7':		
						printf("Multiplication Binary(Binary)\n");
					printf("Enter first binary number:");scanf("%lld",&Bin1);
					n3=Bin1;
					 while (Bin1>0){
			        b= Bin1%10;
			        dec1 = dec1 + b* base1;
			        Bin1 = Bin1/10 ;
			        base1 = base1 * 2;}
			        
			        printf("Enter second binary number:");scanf("%lld",&Bin2);
			        n4=Bin2;
					 while (Bin2>0){
			        c= Bin2%10;
			        dec2 = dec2 + c* base2;
			        Bin2 = Bin2/10 ;
			        base2 = base2*2;}
			        
					Dec=dec1*dec2;
					
		    		while (Dec!=0){
		        	a[i] = Dec%2;
		        	Dec=Dec/2;
		        	i++;}
		        	printf("The Result is:");
		        	for(j=i-1;j>0;j--){
		        	printf("%lld",a[j]);}
		        	printf("in binary\n");
			        
		break;
	case'8':		
					printf("Division Binary(Decimal)\n");
					printf("Input first number:");scanf("%d",&n1);
					printf("Input second number:");scanf("%d",&n2);
					Re=n1/n2;
					n=Re;
		    		while (n!=0){
		        	a[i] = n%2;
		        	n=n/2;
		        	i++;}
		        	printf("The Result is:");
		        	for(j=i-1;j>0;j--)
					printf("%lld",a[j]);
					printf("in binary\n");
					
					remnant=n1%n2;
					N=remnant;
					while (N!=0){
		        	a[k] = N%2;
		        	N=N/2;
		        	k++;}
		        	for(l=k-1;l>0;l--)
					printf("%lld",a[l]);printf("is remnant of division\n");
					getch();
		break;
	case'9':		
					printf("Division Binary(Binary)\n");
					printf("Enter first binary number:");scanf("%lld",&Bin1);
					n3=Bin1;
					 while (Bin1>0){
			        b= Bin1%10;
			        dec1 = dec1 + b* base1;
			        Bin1 = Bin1/10 ;
			        base1 = base1 * 2;}
			        
			        printf("Enter second binary number:");scanf("%lld",&Bin2);
			        n4=Bin2;
					 while (Bin2>0){
			        c= Bin2%10;
			        dec2 = dec2 + c* base2;
			        Bin2 = Bin2/10 ;
			        base2 = base2 * 2;}
			        
					Dec=dec1/dec2;
					
		    		while (Dec!=0){
		        	a[i] = Dec%2;
		        	Dec=Dec/2;
		        	i++;}
					printf("The Result is:");	        	
		       		for(j=i-1;j>0;j--){
		        	printf("%lld",a[j]);}
		        		printf("in binary\n");
					
					remnant=dec1%dec2;
					N=remnant;
					while (N!=0){
		        	a[k] = N%2;
		        	N=N/2;
		        	k++;}
		        	for(l=k-1;l>0;l--)
					printf("%lld",a[l]);printf("is remnant of division\n");
			    
		break;		    
					
			
}
}while(ch!=27);
getch();
}
