#include<stdio.h>
int main()
{
    int a[20],temp,n,i,j,flag;
    printf("Enter how many data you want to sort : ");
    scanf("%d",&n);
    printf("Enter data : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        flag = 0;
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag++;
            }
        }
        if(flag==0)
            {
                break;
            }
    }
    printf("Your data has been sorted in ascending order.\n");
    printf("Sorted data is : ");
    for(i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
}
