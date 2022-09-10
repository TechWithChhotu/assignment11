//Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
int LCM(int,int);
int main()
{
    int a,b,k;
    printf("Enter tow number: ");
    scanf("%d%d",&a,&b);
    k=LCM(a,b);
    printf("LCM = %d ",k);
    return 0;
}
int LCM(int a,int b ) {
    int i=1;
    while(i){
    if(i%a==0&&i%b==0)
    return i;
    i++;
    }
}
