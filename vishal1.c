#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
#define TRUE 1
#define FALSE 0
#define size 10
int x=1,p=1;
//structure for singly linklist
typedef struct SLL
{
int data;
struct SLL *next;
}node;
//structure for stack
struct stack
{
int s[size];
int top;
}st;

 //structure for Queue
struct Queue
{
int que[10];
int front;
int rear;
}Q;
// Deceleration for circular Queue
int que[10];
int front=-1;
int rear=0;
//structure for doubly linklist
	struct doub
	{
	int info;
	struct doub *next;
	struct doub *prev;
	};
	//structure for circular linklist
	struct node
	{
	int info;
	struct node* next;
	};
	struct node* last=NULL;
int num;
// Deceleration for doubly linklist
struct doub start;
void double_linklist(); //The function Definition line is 435.
void display();//The function Definition line is 465.
node *create();
//Deceleration for circular linklist
void insertfront(); //The function Definition line is 483.
void viewlist(); //The function Definition line is 501.
void addlast();//The function Definition line is 519.
void insertafter();//The function definiton line is 538.
void deletefirst(); //The function Definition line is 564.
void deletelast(); //The function Definition line is 576.
void deleteindex(); //The function Definition line is 587.
//for the decleration function stack
void display1();//The function definition line is 721.
void push(int num); //746
//decleartion for Queue
int Qempty();
int insert1(int c);//line no is 772
int Delete1();//line no. is 779
void display2(); //line no. is 787
void display3();
void Delete3();
void add();
		void main()
		{
		int choice,val,ch1,target,point,item,desire,digit;
		int data,num,wish,c,choose,temp,k,z;
		char ans,pns,vns,cnb,lks,mks;
		node *head;
		void Display(node *);
		node *search(node *,int);
		node *insert(node *);
		void dele(node **);
		printf("\n Created Doubly linklist :-\n");
		display();
		head=NULL;
do
{
clrscr();
printf("\n main menu");
printf("\n1.SSL using node\n2.Doubly linklist using \n3.Circular linklist using node\n4.Display\n5.stack\
\n6.Queue\n7.Circular Queue Array\n8.exit");
printf("\n Enter your target");
scanf("%d",&target);
			switch(target)
			{
			case 1:
			while(x==1)
			{
			printf("\n1.Insert\n2.search\n3.delete\n4.display\n5.exit\n>>> ");
			scanf("%d",&ch1);
switch(ch1)
{
case 1:
do
{

clrscr();
printf("\n min menu");
printf("\n1.create");
printf("\n2.Display");
printf("\n3.search");
printf("\n4.insert an elements in a list");
printf("\n5.Delete an elements from list");
printf("\n6.exit");
printf("\n enter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
head=create();
break;
case 2:
Display(head);
break;
case 3:
printf("enter the elements you want to search");
scanf("%d",&val);
search(head,val);
break;
case 4:
head=insert(head);
break;
case 5:
dele(&head);
break;
case 6:
exit(0);
break;
}
}
while(choice!=8);
}
}
break;
		case 2:
		printf("\nThe implimentation of Doubly linklist");
		double_linklist(&ans);
		break;
case 3:
while(p==1)
{
printf("\n Main menu");
printf("\n1.insert\n2.delete\n3.viewlist\n4.exit");
printf("\nEnter your choice");
scanf("%d",&item);
switch(item)
{
case 1:
do
{
printf("\n main menu");
printf("\n1.insertfront\n2.insertlast\n3.insertafter\n4.viewlist\n5.exit");
printf("\n enter your choice");
scanf("%d",&digit);
		switch(digit)
{
		case 1:
		insertfront();
		break;
		case 2:
		addlast();
		break;
		case 3:
		insertafter();
		break;
		case 4:
		viewlist();
		break;
		case 5:
		exit(0);
		break;
		}
		printf("\n do you want to continue");
		pns=getche();
		}while(pns=='y' || pns=='Y');
		break;
case 2:
do
{
printf("\n main menu");
printf("\n1.deletefrist\n2.deletelast\n3.deleteindex\n4.viewlist\n5.exit");
printf("\n enter your choice");
scanf("%d",&desire);
		switch(desire)
	{
		case 1:
		deletefirst();
		break;
		case 2:
		deletelast();
		break;
		 case 3:
		 deleteindex();
		 break;
		 case 4:
		 viewlist();
		 break;
		 case 5:
		 exit(0);
		 }
		 printf("\n do you want to continue");
		 vns=getche();
}while(vns=='y' || vns=='Y');
case 3:
viewlist();
break;
case 4:
exit(0);
break;
}
break;
}
		break;
		case 4:
		Display(head);
		break;
		case 5:
		do
		{
		printf("\n main menu");
		printf("\n1.Push\n2.Pop\n3.display1\n4.exit");
		printf("\n enter your wish");
		scanf("%d",&wish);
		switch(wish)
		{
		case 1:
		printf("\n Enter the number to be push");
		scanf("%d",&num);
		if(stfull())
		printf("\n stack is full");
		else
		push(num);
		break;
		case 2:
		if(stempty())
		printf("\n underflow");
		else
		{
		item=pop();
		printf("\n The pop elements %d",num);
		}
		break;
		case 3:
		display1();
		break;
		case 4:
		exit(0);
		break;
		}
		printf("\n do you want to continue");
		cnb=getche();
		}
		while(cnb=='y' || cnb=='Y');
		break;
		case 6:
		do
		{
		printf("\n1.insert\n2.delete\n3.display2\n4.exit");
		printf("\n enter your choose");
		scanf("%d",&choose);
		switch(choose)
		{
		case 1:
		if(Qfull())
		printf("\n can not insert elements in Queue");
		else
		{
		printf("\n Enter the elements to be insert");
		scanf("%d",&c);
		insert1(c);
		}
		break;
		case 2:
		if(Qempty())
		printf("\n Que is underflow");
		else
		Delete1();
		break;
		case 3:
		if(Qempty())
		printf("\n No elements in the queue");
		else
		display2();
		break;
		case 4:
		exit(0);
		break;
		}
		printf("\n Do you want to continue");
		lks=getche();
		}
		while(lks=='y' || lks=='Y');
		break;
		case 7:
		do
		{
		printf("\n1.insert\n2.Delete\n3.display\n4.exit");
		printf("\n Enter your choice");
		scanf("%d",&k);
		switch(k)
		{
		case 1:
		printf("\n Enter the elements \n");
		scanf("%d",&z);
		add(point);
		break;
		case 2:
		Delete3();
		break;
		case 3:
		display3();
		break;
		case 4:
		exit(0);
		break;
		}
		printf("\n Do you want to continue");
		mks=getche();
		}while(mks=='Y' || mks=='y');
		break;
		 }
		 printf("\n Do you want to continue");
		 ans=getche();
		 }
		 while(ans=='y' || ans=='Y');
}		 getch();
	       node *create()
		{
		node *temp,*New,*head;
		int val,flag;
		char ans='Y';
		node *getnode();
		temp=NULL;
		flag=TRUE;
		do
		{
		printf("\n enter the elements");
		scanf("%d",&val);
		New=getnode();
		if(New==NULL)
		printf("\n memory is not allocated");
		New->data=val;
		if(flag==TRUE)
		{
		head=New;
		temp=head;
		flag=FALSE;
		}
		else
		{
		temp->next=New;
		temp=New;
		}
		printf("enter more elements ? y/n");
		ans=getche();
		}
		while(ans=='Y' || ans=='y');
		getch();
		clrscr();
		return head;
		}
		node *getnode()
		{
		node *temp;
		temp=(node *)malloc(sizeof(node));
		temp->next=NULL;
		return temp;
		}
void Display(node *head)
{
node *temp;
temp=head;
if(temp==NULL)
{
printf("\n the list is empty");
getch();
clrscr();
return;
}
while(temp!=NULL)
{
printf("%d->",temp->data);
temp=temp->next;
}
printf("NULL");
getch();
clrscr();
}
		node *search(node *head,int key)
		{
		node *temp;
		int found;
		temp=head;
		if(temp==NULL)
		{
		printf("\n linked is empty");
		getch();
		clrscr();
		return NULL;
		}
		found=FALSE;
		while(temp!=NULL && found==FALSE)
		{
		if(temp->data!=key)
		temp=temp->next;
		else
		found=TRUE;
		}
		if(found==TRUE)
		{
		printf("\n elements is present in the list");
		getch();
		return temp;
		}
		else
		{
		printf("\n the elements is not present in the list");
		getch();
		return NULL;
		}
		}
node *insert(node *head)
{
int choice;
node *insert_head(node *);
void insert_after(node *);
void insert_last(node *);
printf("\n1.insert node as head node");
printf("\n2.insert node as a last node");
printf("\n3. insert a node at intermediate position in the linked list\n");
printf("\n enter your choice for insertion of node\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
head=insert_head(head);
break;
case 2:
insert_last(head);
break;
case 3:
insert_after(head);
break;
}
return head;
}
		node *insert_head(node *head)
		{
		node *New,*temp;
		New=getnode();
		printf("\n enter the elements which you want to insert");
		scanf("%d",&New->data);
		if(head==NULL)
		head=New;
		else
		{
		temp=head;
		New->next=temp;
		head=New;
		}
		return head;
		}
		void insert_last(node *head)
		{
		node *New,*temp;
		New=getnode();
		printf("\n enter the elements which you want to insert");
		scanf("%d",&New->data);
		if(head==NULL)
		head=New;
		else
		{
		temp=head;
		while(temp->next!=NULL)
		temp=temp->next;
		temp->next=New;
		New->next=NULL;
		}
		}
void insert_after(node *head)
{
int key;
node *New,*temp;
New=getnode();
printf("\n enter the elements which you want to insert");
scanf("%d",&New->data);
if(head==NULL)
{
head=New;
}
else
{
printf("\n enter the elements after which you want to insert the node");
scanf("%d",&key);
temp=head;
do
{
if(temp->data==key)
{
New->next=temp->next;
temp->next=New;
return;
}
else
temp=temp->next;
}
while(temp!=NULL);
}
}
		node* get_prev(node *head,int val)
		{
		node *temp,*prev;
		int flag;
		temp=head;
		if(temp==NULL)
		return NULL;
		flag=FALSE;
		prev=NULL;
		while(temp!=NULL && !flag)
		{
		if(temp->data!=val)
		{
		prev=temp;
		temp=temp->next;
		}
		else
		flag=TRUE;
		}
		if(flag)
		return prev;
		else
		return NULL;
		}
void dele(node ** head)
{
node *temp,*prev;
int key;
temp=*head;
if(temp==NULL)
{
printf("\n the list is empty");
getch();
clrscr();
return;
}
printf("\n enter the elements you want to delete");
scanf("%d",&key);
temp=search(*head,key);
if(temp!=NULL)
{
prev=get_prev(*head,key);
if(prev!=NULL)
{
prev->next=temp->next;
free(temp);
}
else
{
*head=temp->next;
free(temp);
}
printf("\n the elements is deleted ");
getch();
clrscr();
}
}
void double_linklist()
		{
		int n;
		char ch;
		struct doub *point;
		start.next=NULL;
		start.prev=NULL;
		point=&start;
		num=0;
		printf("\n The implimentation of Doubly linklist\n");
		printf("\n enter n for break\n");
		ch=getchar();
		while(ch!='n')
		{
		point->next=(struct  doub*)malloc(sizeof(struct doub));
		point->next->prev=point;
		point=point->next;
		printf("\n enter the value of the point %d",(num+1));
		scanf("%d",&point->info);
		point->next=NULL;
		fflush(stdin);
		printf("\n input n for break\n");
		ch=getchar();
		num=num++;
		}
		printf("\n Total node is equal to %d\n",num);
		}
void display()
{
struct doub *point;
point=start.next;
printf("\n Address \t value\n");
printf("_____________________");
do
{
printf("\n 0x%x",point);
printf("\t%d",point->info);
point=point->next;
}
while(point->next);
do
{
printf("\n 0 x%x",point);
printf("\t%d",point->info);
point=point->prev;
}
while(point->prev);
}
void insertfront()
{
int data;
struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("\nenter the number which you want to insert");
scanf("%d",&temp->info);
if(last==NULL) //last is declear by head.
{
temp->info=data;
temp->next=temp;
last=temp;
}
else
{
temp->info=data;
temp->next=last->next;
last->next=temp;
}
}
void viewlist()
{
if(last==NULL)
printf("\n List is empty");
else
{
struct node* temp;
temp=last;
temp=last->next;
do
{
printf("\n Data =%d",temp->info);
temp=temp->next;
}
while(temp!=last->next);
}
}
void addlast()
{
int data;
struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("\n enter the number which you want to insert");
scanf("%d",&temp->info);
if(last==NULL)
{
temp->info=data;
temp->next=temp;
last=temp;
}
else
{
temp->info=data;
temp->next=last->next;
last->next=temp;
last=temp;
}
}
void insertafter()
{
int data,value;
struct node *temp,*n;
printf("\n Enter number after which you want to enter number");
scanf("%d",&value);
temp=last->next;
do
{
if(temp->info==value)
{
n=(struct node*)malloc(sizeof(struct node));
printf("\n Enter data to be inserted ");
scanf("%d",&data);
n->info=data;
n->next=temp->next;
temp->next=n;
if(temp==last)
last=n;
break;
}
else
temp=temp->next;
}
while(temp!=last->next);
}
void deletefirst()
{
struct node* temp;
if(last==NULL)
printf("\n List is empty");
else
{
temp=last->next;
last->next=temp->next;
free(temp);
}
}
void deletelast()
{
struct node* temp;
if(last==NULL)
printf("\n List is empty");
temp=last->next;
while(temp->next!=last)
temp=temp->next;
temp->next=last->next;
last=temp;
}
void deleteindex()
{
int pos,i=1;
struct node *temp,*position;
temp=last->next;
if(last==NULL)
printf("\n Link is empty");
else
{
printf("\n Enter index");
scanf("%d",&pos);
while(i<=pos-1)
{
temp=temp->next;
i++;
}
position=temp->next;
temp->next=position->next;
free(position);
}
}
void display1()
{
int i;
if(stempty())
printf("\n stack is empty");
else
{
for(i=st.top;i>=0;i--)
printf("\n%d",st.s[i]);
}
}
stempty()
{
if(st.top==-1)
return 1;
else
return 0;
}
stfull()
{
if(st.top>=size-1)
return 1;
else
return 0;
}
void push(int num)
{
st.top++;
st.s[st.top]=num;
}
int pop()
{
int item;
item=st.s[st.top];
st.top--;
return item;
}
Qfull()
{
if(Q.rear>=size-1)
return 1;
else
return 0;
}
int Qempty()
{
if((Q.front==-1) && (Q.front>Q.rear))
return 1;
else
return 0;
}
int insert1(int c)
{
 if(Q.front==-1)
Q.front++;
Q.que[++Q.rear]=c;
return Q.rear;
}
int Delete1()
{
int c;
c=Q.que[Q.front];
Q.front++;
printf("\n Delete elements %d",c);
return Q.front;
}
void display2()
{
int c,i;
for(i=Q.front;i<=Q.rear;i++)
printf("\n %d",Q.que[i]);
printf("\n program for Que");
}
int Qfull1()
{
if(front==(rear+1)%size)
return 1;
else
return 0;
}
int Qempty1()
{
if(front==-1)
return 1;
else
return 0;
}
void add()
{
int z;
if(Qfull1())
printf("\n Circular Queue is full");
else
{
if(front==-1)
front=rear=0;
else
{
rear=(rear+1)%size;
que[rear]=z;
}
}
}
void Delete3()
{
int z;
if(Qempty())
printf("\n Queue is empty");
else
{
z=que[front];
if(front==rear)
{
front=rear=-1;
}
else
front=(front+1)%size;
printf("\n The deleted item is %d",z);
}
}
void display3()
{
int i;
if(Qempty())
{
printf("\n The Queue is empty");
return;
}
i=front;
while(i!=rear)
{
printf("%d",que[i]);
i=(i+1)%size;
}
printf("%d",que[i]);
}

