#include<stdio.h>
#include<math.h>
int Linear_search(int n,int m,int ke,int a[],int c)
{
    for(int i=n;i<m;i++)
    {
        if(a[i]==ke)
        {
            printf("Present ");
            return c;
        }
    }
    printf("Not present ");
         return c;
}
int jumpsearch(int a[],int n,int ke)
{
    int jp,i=0,c=0,j;
    jp=int(sqrt(n));
    while(i<n)
    {
        if(a[i]==ke)
        {
            c++;
            printf("Present ");
            return c;
        }
        if(a[i]>ke)
        {
            return Linear_search(i-jp,i,ke,a,c);
        }
        else
        {
            c++;
           i+=jp;
        }
    }
    printf("Not present ");
    return c;
}
int main()
{
   int t;
    scanf("%d",&t);
    for(int j=0;j<t;j++)
    {
        int n,i,ke;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%d",&ke);
        printf("%d\n",jumpsearch(a,n,ke));
    }
}
