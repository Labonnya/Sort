#include<stdio.h>
int main()
{
    int a[20],n,i,j,temp;
    printf("Enter how many data you want to sort : ");
    scanf("%d",&n);
    printf("Enter data : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && temp<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("Your data has been sorted in ascending order.\n");
    printf("Sorted data is : ");
    for(i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
}
