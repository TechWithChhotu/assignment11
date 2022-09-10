//Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>
int checkPrime(int );
int main()
{
	int n,k;
	printf("Enter a number to check primr or not: ");
	scanf("%d",&n);
	k=checkPrime(n);
	if(k==2)
	printf("Entred number is a prime number.");
	else
	printf("Enterd number is not a prime number.");
return 0;
}
int checkPrime(int N){
	int i=1,count=0;
	while(i<=N){
		if(N%i==0)
		count++;
		i++;
	}
return count;
}

