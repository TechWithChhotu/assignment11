//Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>
void between_prime_number(int ,int );
int main()
{
	int start,n;
	printf("Enter given range:  ");
	scanf("%d%d",&start,&n);
	between_prime_number(start,n);
return 0;
}
void between_prime_number(int start,int N){
	printf("all prime number between %d to %d : ",start,N);
	int i,j,count;
	for(i=start;i<=N;i++){
		count=0;
		for(j=1;j<=i;j++)
		if(i%j==0)
		count++;
		if(count==2)
		printf(" %d",i);
	}
}
