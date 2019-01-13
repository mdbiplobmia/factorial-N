#include<stdio.h> // library function

int fact(int n) // recursive function to calculate factorial
{
    if(n==0 || n==1)
        return 1;
    return n*fact(n-1);
}
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n); // scanf use to take input n
    printf("\nFactorial of %d = %d",n,fact(n));
    return 0;
}

