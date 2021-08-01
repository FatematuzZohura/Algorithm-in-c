/*One day Nobita's mother told him to go to the market. His mother gave him some money and a bag whose Capacity is X unit and told him to buy some valuable items for home [maximum profits] and nobita was suggested not to exceed the capacity of the bag.

He went to the market and after some time he returned home and gave the bag to his mother. His mother brought out the items from the bag and asked the weights and values for each item. Nobita answered to his mother. After a few minutes, his mother told him that he could not gain the maximum profit.

Your task is to write a program that will help Nobita to calculate the maximum profit considering the item’s weights and values, so that he can buy items with maximum profit.

Input:
First line contains an Integer N (3<=N<=100) which denotes the number of items.
Next N number of lines contains two floating point numbers/ each line. First floating point number denotes the weight of the item and the second floating point number denotes the value of the item.
The last line contains a floating point number K which denotes the size of the bag.
Output:
Displays the value of the maximum profit.

Sample Input:
7
2 10
3 5
5 15
7 7
1 6
4 18
1 3
15
Sample Output:
55.3333

Sample Input:
3
10 60
20 100
30 120
50
Sample Output:
240*/



#include<stdio.h>
void MaxProfit(int n,int weight[],int value[],int capacity)
{
    int item;
    float profit;
    int u[n];
    for(int i=0;i<n;++i)
        u[i]=0;
    int Pweight = capacity;
    while (Pweight > 0)
    {
        item = -1;
        for (int i = 0; i <n; ++i)
            if ((u[i] == 0) &&
                ((item == -1) || ((float) value[i] / weight[i] > (float) value[item] / weight[item])))
                item = i;

        u[item] = 1;
        Pweight -= weight[item];
        profit += value[item];

        if(Pweight<0)
        {
            int item_percent = (int) ((1 + (float) Pweight / weight[item]) * 100);

            profit -= value[item];
            profit += (1 + (float) Pweight / weight[item]) * value[item];
        }
    }
   printf("%.4f \n",profit);

}
int main()
{
    int n;
    scanf("%d",&n);
    int weight[n];
    int value[n];
    for(int i = 0;i<n;i++)
    {
         scanf("%d", &weight[i]);
         scanf("%d", &value[i]);
    }
    int capacity;
    scanf("%d",&capacity);
    MaxProfit(n,weight,value,capacity);

}

