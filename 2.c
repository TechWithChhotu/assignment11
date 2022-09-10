//Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int HCF(int ,int );
int main()
{
	int a,b,hcf;
	printf("Enter two number: ");
	scanf("%d%d",&a,&b);
	hcf=HCF(a,b);
	printf("HCF = %d ",hcf);
return 0;
}
int HCF(int a,int b){
	int temp;
	if(a>b){
	temp=a;
	a=b;
	b=temp;
	}
	while(1){
	temp=b%a;
	b=a;
	if(temp==0)
	return a;
	temp=a;
	}
}

