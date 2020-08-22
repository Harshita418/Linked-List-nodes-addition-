#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node{
int data;
struct node *link;
};
void append(struct node **,int );
void main()
{
struct node *start;
start=NULL;
clrscr();
append(&start,10);

printf("%u",start);

printf("%d",start->data);
printf("%u",start->link);
append(&start,20);
getch();
}
void append(struct node **q,int num)
{
struct node *temp,*r;
if(*q==NULL)
{
temp=(struct node *)malloc(sizeof(struct node));
temp->data=num;
temp->link=NULL;
*q=temp;
}
else
{
temp=*q;
while(temp->link!=NULL)
{
temp=temp->link;
}
r=(struct node *)malloc(sizeof(struct node));
r->data=num;
r->link=NULL;
printf("%d",r->data);
printf("%u",r->link);
temp->link=r;
}
}


