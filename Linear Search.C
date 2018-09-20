			//Program for Linear Search
#include<stdio.h>
#include<conio.h>
#define size 20

	void main()
	{
		int a[size],num,i,found=0,pos=0,n;
		clrscr();
		printf("\n Enter the number of the elements in the array\n");
		scanf("%d",&n);
		printf("Enter the elemnts\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);

		}
		//Logic
		printf("Enter the number to be searched:\t");
		scanf("%d",&num);
		for(i=0;i<n;i++)

		{
			if(a[i]==num)
			{
				found=1;
				pos=i;
				printf("\n %d is found in the array at the position =%d",num,i+1);
				break;

			}
		}

		if(found==0)
		{
			printf("%d doesn't exist in the array",num);
		}
		getch();
	}