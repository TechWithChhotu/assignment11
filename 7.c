// Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>
void fibonacci(int );
int main()
{
int n;
	printf("Enter Nth term: ");
	scanf("%d",&n);
	fibonacci(n);
return 0;
}
void fibonacci(int N){
	int a=0,b=1,temp,i;
	for(i=1;i<=N;i++){
		temp=a;		
		a+=b;			
		b=temp;		
		printf(" %d",temp);
	}
}
