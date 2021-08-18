#include<stdio.h>
#include<string.h>
 int m,n, c[70][90];
 char b[40][40], x[50],y[60];
void lcs(char x[],char y[])
{

    m= strlen(x);
    n=strlen(y);


    for(int i = 0;i<=m;i++)
    {
        c[i][0] = 0;
    }
    for(int i=0;i<=n;i++)
    {
        b[0][i] =0;
    }
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(x[i-1]==y[j-1])
            {
                c[i][j]=c[i-1][j-1]+1;
                b[i][j]='c';
            }
            else if(c[i-1][j]>=c[i][j-1])
            {
                c[i][j]=c[i-1][j];
                b[i][j]='u';
            }
            else
            {
                c[i][j]=c[i][j-1];
                b[i][j]='l';
            }

        }
    }
}
void print(int i,int j)
{
    if(i==0||j==0)
    {
        return;
    }
    if(b[i][j]=='c')
    {
        print(i-1,j-1);
        printf("%c",x[i-1]);
    }
    else if(b[i][j]=='u')
    {
        print(i-1,j);
    }
    else
    {
        print(i,j-1);
    }
}
int main()
{

    scanf("%c",x);
    scanf("%c",y);
    lcs(x,y);
    print(m,n);
    return 0;
}
