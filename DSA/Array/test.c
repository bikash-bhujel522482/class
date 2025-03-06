#include<stdio.h>
void sort(int a[])
{
    int temp,i,j;
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<4;j++){
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
    
        }
        
        
    }
}
int main()
{
    int a[5]={3,2,4,1,5};
    int i;
    sort(a);
    for(i=0;i<4;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}