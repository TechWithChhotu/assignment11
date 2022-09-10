// Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>
int next_prime(int );
int main()
{
int n,k;
	printf("Enter a number to find next prime number: ");
	scanf("%d",&n);
	k=next_prime(n);
	printf("Next prime number is %d",k);
return 0;
}
int next_prime(int N){
	int i,count;
	while(1){
		N++;
		count=0;
		for(i=1;i<=N;i++)
		if(N%i==0)
		count++;
		if(count==2)
		return N;		
	}
}
