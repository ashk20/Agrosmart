#include<stdio.h>
int main()
{
    int n,k=0,a[1000];
    int i,j=0,count=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((a[i]+a[j])%k==0)
                {
                    count++;
                }
        }
    }
    printf("%d",count);
}
