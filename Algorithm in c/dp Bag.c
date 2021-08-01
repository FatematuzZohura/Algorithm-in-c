/*One day Atik Bhuiyan went to a supermarket for shopping. He bought some products of different weights. After buying all of his required products, the shopkeeper gave him some bags each with equal capacity. Every bag can carry the same amount of weights, W. The Shopkeeper told him to use a minimum number of bags to carry those products.

Atik Bhuiyan was thinking for a while. After some time, He started sorting items in descending order according to their weights. However, he could not put the products into those bags in an optimal way so a minimum number of bags can be used. Suddenly one of his friends was passing by the shop and Atik Bhuiyan saw him. Atik Bhuiyan told him about the problem. Then his friend told him that there is an algorithm named FFD and he can easily solve the problem by using it.

Now, your task is to write a program that will take an integer N(5<=N<=50) which denotes the number of products. The next line contains N integer values (weights of those products). The last line takes a value K (the capacity of each bag).
You have to print an integer which denotes the minimum number of bags required.

Sample Input:
 6
6 5 4 3 2 1
7
Sample Output:
3

Sample Input:
10
6 1 5 1 4 2 3 3 3 2
7
Sample Output:
5*/

#include <stdio.h>
void Bag(int arr[],int size,int n)
{
    int bagCount = 0;
    int bagValues[n];
    for(int i=0;i<n;i++)
    bagValues[i] = size;
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++){
        if(bagValues[j] - arr[i]>=0)
        {
            bagValues[j] -=arr[i];
            break;
        }
    }
    for (int i=0;i<n;i++)
    if(bagValues[i] != size)
    bagCount++;
    printf("%d",bagCount);

}

int sort(int arr[],int n)
{
    for(int i = 1;i<n;i++)
    {
        int key = arr[i];
        int j = i -1;
        while(key>arr[j]&& j>=0)
        {
            arr[j+1]=arr[j];
            --j;
        }
        arr[j+1] = key;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int size;
    scanf("%d",&size);
    arr[n] = sort(arr,n);
    Bag(arr,size,n);
    return 0;

}
