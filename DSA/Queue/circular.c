#include<stdio.h>
#include<conio.h>
#define MaxSize 5
int front,ch;
void empty()
{
	front=-1;
	printf("Queue is Empty");
}
int isFull()
{
    if((rear + 1) % MaxSize == front)
        return 1;
    else
        return 0;
}
int isEmpty()
{
    return front == -1;
}
void enqueue(int data)
{
    if (isFull())
    {
        printf("Queue overflow\n");
        return;
    }
        if (front == -1)
        {
            front = 0;
        }
    rear = (rear + 1) % MaxSize;
    queue[rear] = data;
    printf("Element %d inserted\n", data);
}
int dequeue()
{

    if (isEmpty())
    {
        printf("Queue underflow\n");
        return -1;
    }

    int data = queue[front];

    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
       front = (front + 1) % MaxSize;
    }
    return data;
}
void display()
{
    if (isEmpty())
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    int i = front;
    while (i != rear)
    {
        printf("%d ", queue[i]);
        i = (i + 1) % MaxSize;
    }
    printf("%d\n", queue[rear]);
}


int main()
{
	while(1)
	{
		printf("\n Menu:");
		printf("\n ____");
		printf("\n\n1.Create Empty \n2.Enqueue \n3.Dequeue \n4.Display \n5.Display-Front \n6.Exit");
		printf("\nEnter your choice:");
		scanf("%d",&ch);

		switch(ch)
		{

		case 1:
			empty();
			break;
		case 2:
		    enqueue (data);
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			return 0;
			break;
		default:
			printf("Invalid");
		}
	}
	return 0;
}