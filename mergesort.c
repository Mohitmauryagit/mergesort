#include<stdio.h>
void mergesort(int a[], int left,int right);
int main()
{
	int a[]={2,5,4,3,7,-1,4};
	int i,n;
	n=sizeof(a)/sizeof(int);
	mergesort(a,0,n-1);
	for(i=0;i<=n-1;i++)
	printf("%d,",a[i]);
		
}

void mergesort(int a[], int left,int right)
{
	
	
	int mid,i,j,k;
	int c[100]={0};
	if(left>=right)
	return;
	mid=(left+right)/2;
	mergesort(a,left,mid);
	mergesort(a,mid+1,right);
	
	i=left;
	j=mid+1;
	k=0;
	while(i<=mid && j<=right)
	{
		if(a[i]<a[j])
		{
			c[k]=a[i];
			i++;
			k++;
		}
		else
		{
			c[k]=a[j];
			j++;
			k++;
		}	
	}
	if(i<=mid)
	{
		for( ;i<=mid;i++,k++)
		c[k]=a[i];
	}
	else
	{
		for( ;j<=right;j++,k++)
		c[k]=a[j];
	}
	
	
	for(i=left;i<=right;i++)
	a[i]=c[i-left];
	
	
	
}