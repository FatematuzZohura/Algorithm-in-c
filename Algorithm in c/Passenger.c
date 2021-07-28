/*Locate from Passengers
On a bus, there are N number of passengers sitting on their seats ranging from 0 to N-1. Karim is looking for passengers whose ages are multiplicand of 4 and seats are within a specific range (X to Y), where both X and Y are inclusive. Now can you help Karim to solve his problem?

Input: In the first line you have to take an integer (N) which indicates total number of passengers.
Next line you will take two space-separated integers (X  Y) which indicates the seat range.
Third line of input will take N space-separated integers indicating the ages of the passengers.

N.B: Seat number will count from 0 to N-1.
Sample input:
10
4 7
22 36 37 21 16 24 32 27 21 75

Sample output :
16 24 32

*/
#include<stdio.h>
void seat(int arr[],int x,int y)
{
    int i;
    for( i =x;i<=y;i++)
    {
        if(arr[i]%4==0)
        {
            printf("%d\n",arr[i]);
        }
    }
}
int main()
{
    int N,x,y;
    scanf("%d %d %d",&N,&x,&y);
    int arr[N];
    for(int i =0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    seat(arr,x,y);
}
