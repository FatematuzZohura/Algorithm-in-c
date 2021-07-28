/*Write a program in C to print the elements of an array in reverse order by using pointers. [use user-defined function to solve the problem]

Sample Input:
5
2 3 4 5 6
Sample Output :
6 5 4 3 2*/
#include <stdio.h>
void main()
{
    int n,i,arr[200];
    int *pt;
    printf("Input : ");
    scanf("%d",&n);
    pt = &arr[0];
    for(i=0;i<n;i++)
    {
        scanf("%d",pt);
        pt++;
    }
    pt = &arr[n-1];
    printf("Outprt:\n");
    for(i=n;i > 0;i--)
    {
        printf("%d ",*pt);
        pt--;
    }
    printf("\n");
}
