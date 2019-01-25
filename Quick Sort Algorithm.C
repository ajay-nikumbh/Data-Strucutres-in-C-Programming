#include<stdio.h>
#include<conio.h>

	int a[20];
	void quicksort(int low,int high)
	{

		if(low<high)
		{       int j;
			j=part(low,high);
			quicksort(low,j-1);
			quicksort(j+1,high);
		}




	}
	int part(int low,int high)
	{
		int i,j,pivot,t;
		pivot=a[low];
		i=low;
		j=high;
		while(i<j)
		{
			while(a[i]<=pivot && i<high)
			{    i++;
			}
			while(a[j]>pivot)
			{
				j--;
			}
			if(i<j)
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
		a[low]=a[j];
		a[j]=pivot;
		return j;

	}


	void main()
	{
		int n,i;
		clrscr();
		printf("Enter the No of the Elements");
		scanf("%d",&n);
		printf("Enter the Arry Elements\n");
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);

		printf("Sorted elements\n: ") ;
		quicksort(0,n-1);
		for(i=0;i<n;i++)
		printf("%d\n",a[i]);
		getch();
	}