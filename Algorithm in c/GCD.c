/*Write a program in C to find GCD(Greatest Common Divisor) of two numbers using recursion. [use user-defined function to solve the problem]
Sample input:
10 50
Sample output:
10*/

#include<stdio.h>
int gcd(int k,int a);
int main()
{
    int k, a;
    scanf("%d%d",&k,&a);
    printf("%d",gcd(k,a));
    return 0;
}
int gcd(int k,int a)
{
    if (a !=0)
    return gcd(a, k% a);
    else
    return k;
}
