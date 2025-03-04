#include<stdio.h>
#include<stdlib.h>
int ch,a=0;

struct node{
    int data;
    struct node* next;
};
struct node* head=NULL;
struct node* createnode(int data)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        return NULL;
    }
    newnode->data=data;
    newnode->next=NULL;
    a++;
    return newnode;
}
/*struct node* findlast(struct node* head)
{
    if(head==NULL)
    {
        reutrn NULL;
    }
    struct node* current=head;
    while(current->next != NULL)
    {
        current=current->next
    }
    return  current;
}*/
void first()
{
    int data;
    struct node* newnode;
    printf("\nEnter new value:");
    scanf("%d",&data);
    newnode=createnode(data);
    newnode->next=head;
    head=newnode;
}
void last()
{
    int data;
    struct node* ptr,*temp;
    
    printf("\nEnter new value:");
    scanf("%d",&data);
    temp=createnode(data);
    if (head==NULL)
    {
        head=temp;
    }
    ptr=head;
    while (ptr->next != NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
}
void posi()
{
    int data,n;
    printf("\nEnter the position:");
    scanf("%d",&n);
    if (n==1)
    {
        printf("\nInsert at first.\n");
        first();
    }
    else if (n==a)
    {
    last();
    }
    else
    {
    int data,i;
    struct node* ptr,*temp;
    
    printf("\nEnter new value:");
    scanf("%d",&data);
    temp=createnode(data);
    if (head==NULL)
    {
        head=temp;
    }
   
  else{
    ptr=head; 
    for(i=1;i<n-1;i++)
    {
        ptr=ptr->next;
    }
    temp->next=ptr->next;
    ptr->next=temp;
  }
    
    }    
}
void menu()
{    
    printf("\n  Menu\n");
    printf("---------\n");
    printf("1.Insert\n2.Delete\n3.Display\n4.Search\n5.Exit");
    printf("\nEnter your choice:");
	scanf("%d",&ch);
}
void disp()
{
struct node* temp;
temp=head;
printf("The data are:\n");
if(head==NULL)
{
    printf("Linklist is empty");
}
while(temp->next!=NULL){
printf("%d\n",temp->data);
temp=temp->next;
}
printf("%d\n",temp->data);
}
void ins1st()
{
    int a,b,c;
    char choice;
    printf("\na) Insert at beginning\nb) Insert at end\nc) Insert at position\nd) Back\n");
    printf("Enter your choice: ");
    getchar(); // To clear the newline character from the buffer
    scanf("%c", &choice);
    int data, position;
    switch (choice) 
    {
        case 'a':
            first();
            break;
        case 'b':
            last();
            break;
        case 'c':
            posi();
            break;
        case 'd':
            exit;
        default:
            printf("Invalid choice\n");
    }
}
void inslst()
{
    int a,b,c;
    char choice;
    printf("\na) Deletion at beginning\nb) Deletion at end\nc) Deletion at position\nd) Back\n");
    printf("Enter your choice for deletion: ");
    getchar(); // To clear the newline character from the buffer
    scanf("%c", &choice);
    int data, position;
    switch (choice) 
    {
        case 'a':
            dfirst();
            break;
        case 'b':
            dlast();
            break;
        case 'c':
            dposi();
            break;
        case 'd':
            exit;
        default:
            printf("Invalid choice\n");
    }
}
void dfirst()
{
    struct node* temp;
    temp=head;
    head=temp->next;
    free(temp);   
}

void dlast()
{}
void dposi()
{}

int main()
{
    while (1)
    {
        menu();
        switch (ch)
        {
        case 1:
            ins1st();
            break;
        case 2:
            break;
        case 3:disp();
            break;
        case 4:
            break;
        case 5:
            printf("\nExiting program . . . .");
            exit(0);
        
        default:
            printf("invalid");
        }
    }
    
}