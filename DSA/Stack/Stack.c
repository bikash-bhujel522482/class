#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#define MaxSize 10
int stack[MaxSize];
int top=-1, value, ch;
void create_empty()
{
	top=-1;
    printf("Empty stack created\n");
}
void push()
{
	if(top==MaxSize-1)
	{
		printf("\nOverflow\n.");
	}
	else
	{
		top=top+1;
		printf("\nEnter the value to push:");
		scanf("%d",&value);
		stack[top]=value;
		printf("\nThe pushed value is %d.\n",stack[top]);
	}
}
void pop()
{
	if(top==-1)
	{
		printf("\nStack is empty or Underflow\n");
	}
	else
	{
		value=stack[top];
		printf("\nThe popped value is %d.\n",value);
		stack[top]=0;
		top=top-1;
	}
}
void display()
{
	if(top==-1)
	{
		printf("\nStack has no elements stored.\n");
	}
	else
	{
		printf("\nThe Stack value is \n");
		for(int i=0;i<=top;i++)
		printf("%d) %d\n",i,stack[i]);
	}
}
void peek()
{
	printf("\nThe value in top is %d.\n",stack[top]);
}
int main()
{


	while (1)
	{
		printf("\nSTACK MENU.\n");
		printf("1. Create a empty stack \n2. PUSH \n3. POP \n4. Display \n5. Peek \n6. Exit");
		printf("\nEnter your choice:");
		scanf("%d",&ch);

		switch (ch)
		{
			case 1:
				create_empty();
				break;
			case 2:
				push();
				break;
			case 3:
				pop();
				break;
			case 4:
				display();
				break;
			case 5:
				peek();
				break;
			case 6:
				printf("\nExiting the program.");
				return 0;
			default:
			printf("\nInvalid\n");
		}
	}
	return 0;
}
