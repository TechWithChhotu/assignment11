// Write a function to print first N prime numbers (TSRN)
#include<stdio.h>
void Nprime_number(int );
int main()
{
	int n;
	printf("Enter value of N:  ");
	scanf("%d",&n);
	Nprime_number(n);
return 0;
}
void Nprime_number(int N){
	printf("all prime number between 1 to %d : ",N);
	int i,j,count;
	for(i=1;i<=N;i++){
		count=0;
		for(j=1;j<=i;j++)
		if(i%j==0)
		count++;
		if(count==2)
		printf(" %d",i);
	}
}
