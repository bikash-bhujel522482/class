#include<stdio.h>
int main()
{
    int a[6], size, i;
    
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter element in array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements of array are:\n");
    for(i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }    
    return 0;
}