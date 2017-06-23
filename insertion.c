#include<stdio.h>



int main()
{
int i,j,temp;
int a[7]={4,23,43,38,15,10,30};
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
for(i=0;i<7;i++)
{
printf("%d\t",a[i]);
}
printf("\n");
}
