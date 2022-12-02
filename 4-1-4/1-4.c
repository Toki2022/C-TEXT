//找最小值
#include<stdio.h>
int main()
{
    int n;
    int i, j;
    int min=0;
    int num = 0;
    scanf("%d",&n);
    for( i=0;i<n;i++)
    {
        scanf("%d",&num);
    }
    min=num;
    for(j=0;j<n;j++)
    {
        for(int t=0;t<n-1;t++)
        {
            if(num<min)
            {
                min=num;

            }
        }
    }
    printf("%d\n",min);
    return 0;
}