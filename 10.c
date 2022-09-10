//Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function.
#include<stdio.h>
int fun(int );
int main()
{
    int n, result;
    printf("Enter nth term: ");
    scanf("%d",&n);
    fun(n);
    return 0;
}
int fun(int N) {
    int sum=0,n=N-1;
    while(N) {
          sum+=n+N;
        N--;
        n--;
    }
    printf("sum of series(1! /1+2!/2+3!/3+4!/4+5!/5....) = %d",sum);
}
