#include<stdio.h>
#include<math.h>
void main (){
	int p,r,t;
	printf("enter the value (p):");
	scanf("%d",&p);
	printf("\nenter the value (r):");
	scanf("%d",&r);
	printf("\nenter the value (t):");
	scanf("%d",&t);
	
	int a=p*r*t/100;
	printf("\nsimple intrest :%d",a);
	int b;
	b= p*((pow((1 + r / 100), 
                    t)));
	printf("\ncompound intrest : %d",b);
	
	
}
