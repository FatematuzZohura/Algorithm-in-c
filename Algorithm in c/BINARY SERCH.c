#include<stdio.h>
int B_serch(int a[],int n,int serch_I)
{
    int L=0;
    int R = n-1;
    int m;
    while(L<=R)
    {
        m=((L+R)/2);
        if(a[m]<serch_I)
        {
            L=m+1;
        }
        else if(a[m]<serch_I)
        {
            R=m-1;
        }
        else
        return m;
    }
    return -1;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int serch_I;
    printf("serch item = ");
    scanf("%d",&serch_I);
    int result = B_serch(a,n,serch_I);
    if(result==-1){
        printf("result is not found");
    }
    else{
    printf("Iteam location is %d",result);
    }
}
