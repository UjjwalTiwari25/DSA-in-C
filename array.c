#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
int data;
int next;
}a[10];
void main()
{
char ans;
int i,head,choice;
int create();
void insert();
void delete();
void search();
void display(int);
do
{
clrscr();
printf("main menu\n");
printf("\n1.create\n2.insert\n3.delete\n4.search\n5.display");
printf("enter your chioce\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
for(i=0;i<10;i++)
{
a[i].data=-1;
}
head=create();
break;
case 2:
insert();
break;
case 3:
delete();
break;
case 4:
search();
break;
case 5:
display();
break;
default :
exit(0);
}
printf("\n do you want to go to main menu");
ans=getch();
}
while(ans=='y' || ans=='Y');
getch();
}
int create()
{
int i,head;
printf("enter the index of first node\n");
scanf("%d",&i);
head=i;
while(i!=-1)
{
printf("enter the data and index of the elements\n");
scanf("%d%d",&a[i].data,&a[i].next);
i=a[i].next;
}
return head;
}
void insert()
{
int i,temp,newdata;
printf("enter the new data which you want to insert\n");
scanf("%d",&temp);
for(i=0;i<10;i++)
{
if(a[i].data==temp)
break;
}
if(a[i+1].data==-1)
{
a[i+1].next=a[i].next;
a[i].next=i++;
a[i+1].data=newdata;
}
}
void delete()
{
int i,temp,current,newnext;
printf("enter the node to be deleted\n");
scanf("%d",&temp);
for(i=0;i<=9;i++)
{
if(a[i].data==temp)
{
if(a[i].next==-1)
{
a[i].data=-1;
}
current=i;
newnext=a[i].next;
}
}
for(i=0;i<10;i++)
{
if(a[i].next==current)
a[i].next=newnext;
a[current].data=-1;
}
}
}
void search()
{
int i,temp,flag=0;
printf("enter the item to be search\n");
scanf("%d",&temp);
for(i=0;i<10;i++)
{
if(a[i].data==temp)
{
flag=1;
break;
}
}
if(flag==1)
{
printf("%d node present in the list",temp);
}
else
{
printf("node is not present in the list\n");
}
void display(int)
while(i!=-1)
{
if(a[i].data==-1)
{
printf("no elements present in the list\n");
}
else
{
printf("%d",a[i].data);
}
i=a[i].next;
}




