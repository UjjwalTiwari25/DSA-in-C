#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

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
void  insert();
void  Dlt();
void search();
void display(int);
do
{
    clrscr();
    printf("\n Main Memory");
    printf("\n 1.create
            \n 2.inseart
            \n 3.Dlt
            \n 4.search
            \n 5.display
            \n 6.exit");
    printf("\n Enter Your Choice");
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
         Dlt();
         break;
         case 4:
         search();
         break;
         case 5:
         display(head);
         break;
         case 6:
         exit(0);


      }  
    printf("\n Do you want to move main memory");
        ans=getch();      
}   while(ans=='y'&& ans=='y')
     
     getch();

  }