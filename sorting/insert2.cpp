#include<stdio.h>

int main()
{
int a[3],i,j,temp;
printf("Enter 5 Array Element:\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
temp=a[i+1];
j=i;
while(temp=0)
{
a[j+1]=a[j];
j--;
}
a[j+1]=temp;
}
printf("Sorted Array id: ");
for(i=0;i<5;i++)
{
printf("%d",a[i]);
}
return 0;
}
