#include<stdio.h>
int main()
{
int i,j,n1,n2,a[10],b[10],c[10],temp=0;
printf("enter the limit for first array");
scanf("%d",&n1);
printf("enter the elements of the first array");
for(i=0;i<n1;i++)
scanf("%d",&a[i]);

printf("enter the limit for second  array");
scanf("%d",&n2);
printf("enter the elements of the second array");
for(i=0;i<n2;i++)
scanf("%d",&b[i]);

for(i=0;i<n1;i++)
c[i]=a[i];
for(i=0;i<n2;i++)
c[i+n1]=b[i];






for(i=0;i<n1+n2;i++)
for(j=i+1;j<n1+n2;j++)
if(c[i]>c[j])
{
temp=c[i];
c[i]=c[j];
c[j]=temp;
}
for(i=0;i<n1+n2;i++)
printf("%d\t",c[i]);
return 0;
}


