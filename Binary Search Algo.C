#include<stdio.h>
#include<conio.h>

	int binarysearch(int a[],int n,int x)
	{
		int low=0,high=n-1,mid;
		while(low<=high)
		{
			mid=(low+high)/2;

			if(x==a[mid])
				return mid;

			if(x<a[mid])
				high=mid-1;

			if(x>a[mid])
				low=mid+1;


		}
		return -1;


	}


	void main()
	{
		int a[45],n,x,i,k,flag;
		clrscr();
		printf("Enter the number of the elements\n");
		scanf("%d",&n);
		printf("Enter the elements in sorted order");
		for(i=0;i<n;i++)
		{
			scanf("%d",a[i]);
		}
		printf("Enter the elemnt to be searched\n");
		scanf("%d",&x);
		k=binarysearch(a,n,x);
		if(k>=0)
			printf("Element present at a[%d]",k);

		else
			printf("Element is not present");
		  getch();
	}