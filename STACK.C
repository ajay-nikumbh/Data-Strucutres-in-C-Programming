#include<stdio.h>
#include<conio.h>
#define MAX 66

	int top=-1;
	int s[MAX],no ;


	void push()
	{
		if(top==MAX-1)
		{
			printf("\t Stack is Full");
		}
		else
		{
			printf("Enter ant element to be pushed:\t");
			scanf("%d",&no) ;
			s[++top]=no;
		}
	}

	int pop()
	{       int v;
		if(top==-1)
		{
			printf("\tStack is Empty");
			return 1;
		}
		else
		{
			v=s[top];
			top--;
			printf("elemt removed=%d",v)  ;
			return v;
		}

	}


	int peek()
	{
		int b;
		if(top==-1)
		{
			printf("\tStack is Empty") ;
			return 1;
		}
		else
		{
			b=s[top];
			printf("Stack Topmost Element=%d",b);
			return b;
		}
	}


	void display()
	{
		int i;
		if(top>=0)
		{
			for(i=top;i>=0;i--)
			{
				printf("%d\t\n",s[i]) ;
			}
		}
		else
		{
			printf("\tStack is empty");
		}
	}

	void main()
	{
		int choice;
		clrscr();
		do
		{
			printf("\n1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n") ;
			printf("USER PLZ ENTER YPUR CHOICE\n") ;
			scanf("%d",&choice) ;
			switch(choice)
			{
				case 1: push(); break;
				case 2: pop(); break;
				case 3: peek(); break;
				case 4: display(); break;
				default: printf("USER PLZ ENTER YOUR CORRECT OPTION\n") ;
			}
		}
		while(choice<=4);
	}