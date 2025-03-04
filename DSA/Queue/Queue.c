#include<stdio.h>
#include<conio.h>
int front,ch;
void empty()
{
	front=-1;
	printf("Queue is Empty");
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