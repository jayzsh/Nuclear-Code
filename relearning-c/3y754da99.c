#include<stdio.h>
#define SIZE 20

int main()
{
    int a[SIZE],i,p[SIZE],c[SIZE],x,k=0,l=0,j;
    printf("Enter elements: \n");
    for(i=0;i<SIZE;i++)
        scanf("%d",&a[i]);
    for(i=0;i<SIZE;i++)
    {
        x=0;
        for(j=2;j<=a[i]/2;j++)
        {
            if(a[i]%j==0)
            {
                x++;
                break;
            }
        }
        if(x==0)
        {
          if (a[i] != 1)
            {
               p[k]=a[i];
               k++;
            }
        }
        else
        {
            c[l]=a[i];
            l++;
        }
    }
    printf("all prime: \n");
    for(i=0;i<k;i++)
        printf("%d\n",p[i]);
    printf("all composite: \n");
    for(i=0;i<l;i++)
        printf("%d\n",c[i]);
}
