#include<stdio.h>

int sort(int *a)
{
int i,j,temp;
for(i=0;i<7;i++)
{
	j=i;
	while(j>0 && a[j-1]>a[j])
	{
		temp=a[j];
		a[j]=a[j-1];
		a[j-1]=temp;
		j=j-1;
	}
}
return 0;
}

int read(int *a)
{
int size,i;
scanf("%d",&size);
for(i=0;i<size;i++)
	scanf("%d",&a[i]);
return size;
}

int main()
{
int i;
int a[7]={4,23,43,38,15,10,30};

sort(a);
for(i=0;i<7;i++)
printf("%d\t",a[i]);
printf("\n");
return 0;
}
