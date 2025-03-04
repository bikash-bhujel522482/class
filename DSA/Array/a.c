#include<stdio.h>
#include<stdlib.h>
int a[50],size,i;
void menu()
{
    int op;
    while(1)
    {
        printf("MENU:");
        printf("\n1.Create Array\n2.Insertion\n3.Deletion\n4.Display\n5.Exit");
        printf("\nEnter your option:");
        scanf("%d",&op);
        switch(op)
        {
        case 1:
            arr();
            break;
        case 2:
            ins();
            break;
        case 3:
            
            break;
        case 4:
            dis();
            break;
        case 5:
            printf("exiting the program . . .");
            exit(0);
        }
    }
}
void arr()
{
    printf("Enter the size of array:");
    scanf("%d",&size);
}
void ins()
{
    printf("Enter element in array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
}
void dis()
{
    printf("Elements of array are:\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }    
}
int main()
{
    menu();    
    return 0;
}