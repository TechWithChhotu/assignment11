//Write a program in C to find the square of any number using the function.
#include<stdio.h>
#include<math.h>
int main()
{
    int n, square;
    printf("Enter a number to find square: ");
    scanf("%d",&n);
    square=pow(n,2);
    printf("square of %d is %d",n, square);
}
