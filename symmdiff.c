#include<stdio.h>
#include<conio.h>
int main()
{
int a[10],b[10],c[10],d[10],m=0,k=0,n1,n2,l,i,sy[100],j,n=0;
printf("enter the size of set A\n");
scanf("%d",&n1);
printf("enter the elements of set A\n");
for(i=0;i<n1;i++)
scanf("%d",&a[i]);
printf("enter the size of set B\n");
scanf("%d",&n2);
printf("enter the elements of set B\n");
for(i=0;i<n2;i++)
scanf("%d",&b[i]);
for(i=0;i<n1;i++)
{
for(j=0;j<n2;j++)
{
if(b[j]==a[i])
break;
}
if(j==n2)
{
for(l=0;l<k;l++)
{
if(c[l]==a[i])
break;
}
if(l==k)
{
c[k]=a[i];
k++;
}
}
}
for(i=0;i<n2;i++)
{
for(j=0;j<n1;j++)
{
if(b[i]==a[j])
break;
}
if(j==n1)
{
for(l=0;l<m;l++)
{
if(d[l]==b[i])
break;
}
if(l==m)
{
d[m]=b[i];
m++;
}
}
}
for(i=0;i<k;i++)
{
sy[n]=c[i];
n++;
}
for(i=0;i<m;i++)
{
sy[n]=d[i];
n++;
}
printf("\n symmetric difference of set is");
for(i=0;i<n;i++)
printf("%d",sy[i]);
getch();
}