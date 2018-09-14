		//Program for the Bubble sort
		//Time Complexcity is: o(n^2)

#include<stdio.h>
#include<conio.h>
	int main()
	{
		int i,n,temp,j,a[10];
		clrscr();
		printf("\n Enter the number of the elements in the Array:");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("\n Array[%d]=",i);
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-i;j++)
			{

				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}

			}

		}
		printf("\n Array Sorting in ascending order is:");
		for(i=0;i<n;i++)
		{
			printf("\n Array[%d]=%d",i,a[i]);

		}
		getch();
		return 0;

	}
