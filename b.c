#include<stdio.h>
int main ()
{
	int a[10], i,j,n,key,temp,mid,first,last;
	
	printf("enter size of the array : ");
	scanf("%d",&n);
	
	printf("enter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
    
	printf("displaying the array elements before sorting\n");
	for(i=0;i<n;i++)
	{
	
		printf("%d\t", a[i]);
	} 
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\ndisplaying the array elements after sorting\n");
	for(i=0;i<n;i++)
	{
	
		printf("%d\t", a[i]);
	} 
	
	printf("\nenter key :");
	scanf("%d",&key);
	
	first=0;
	last=n-1;
	while(first <= last)
	{
		mid = (first+last) / 2;
		
		if (key == a[mid])
		{
			printf("Key - %d is found at location %d\n", key, mid+1);
			return 0;
		}
		else if (key > a[mid])
		{
			first = mid + 1;
		}
		else
		{
			last = mid -1;
		}
	}
	printf("Key - %d is not found\n",key);
	return 1; 
}
	
	
		
	
	
   
   
