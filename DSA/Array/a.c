#include<stdio.h>
#include<stdlib.h>
int a[50],size,i,data,pos,del,item;
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
            delete();
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
    if(size>=50)
    {
        printf("Please enter less than 50.\n");
    }
    else 
    {
        printf("Enter the elements of the array:\n");
        for (i = 0; i < size; i++) 
        {
                scanf("%d", &a[i]);
        }
    }
}
void ins()
{
    /*printf("Enter element in array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }*/
   printf("Enter data you want to insert:\n");  //For inserting in required position
   scanf("%d",&data);
   
   printf("Enter the position(1-%d):",size+1);
   scanf("%d",&pos);
   if(pos<=0 || pos>size+1)
   {
    printf("invalid position.\n");
   }
   for(i=size-1;i>=pos-1;i--)           //size of a is decreasing
   {
        a[i+1]=a[i];
   }
   a[pos-1]=data;
   size++;
}
void delete()
{
    printf("\nEnter the data position to delete:");
    scanf("%d",&del);
    if(pos<=0 || pos>size)
    {
        printf("invalid position");
    }
    item=a[pos-1];
    for(i=del-1;i<size-1;i++)
    {
        a[i]=a[del-1];
    }
    size--;
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