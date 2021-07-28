/*Mr. X is a student of Computer Science. He is facing a problem and  needs your help to solve it.
The problem is, you will be given N integer numbers( 4<n<=100) which are arranged side by side (x1,x2,x3,x4,.....).
Now you have to sort those items in ascending order. After doing this , your job is to print the items in a sorted way and find the median.
[NB: when N is odd  , Median= (N+1)/2; When N is even Median= (N/2)+1 ]

Sample Input:
7
4 7 11 2 9 3 5
Sample Output:
2 3 4 5 7 9 11
5*/
#include <math.h>
#include <stdio.h>
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;


        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}


void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    insertionSort(arr, n);
    printArray(arr, n);

    if(n%2==0){
            n=(n+1)/2;
            printf("%d\n",arr[n]);

        }
        else{
            n=(n/2);
            printf("%d\n",arr[n]);
        }


    return 0;
}

