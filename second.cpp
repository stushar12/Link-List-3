#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
  int data;
  struct node *next;
};
struct node *create()
{
    struct node *temp,*start=NULL,*q,*p,*r,*t;
  char str[10];
while(1)
{
  printf("\n Enter yes or no\n");
  scanf("%s",str);
  if(strcmp(str,"no")==0)
  break;
  else
  {
  temp=(struct node *)malloc(sizeof(struct node));
  printf("Enter a value ");
  scanf("%d",&temp->data);
    temp->next=NULL;
    if(start==NULL)
    {
      start=temp;
      p=temp;
      q=temp;
    }
    else
    {
      p->next=temp;
      p=temp;

    }
  }
}
return q;
}
struct node *display(struct node *q)
{
  while(q!=NULL)
  {
    printf("%d\n",q->data);
    q=q->next;
  }
}
struct node *delete_consecutive(struct node *p,int pos)
{
  struct node *temp,*start=NULL,*q,*r,*t;
  temp=p;
if(pos==1)
{
  q=p->next;
  r=q->next;
  free(p);
  free(q);
  return r;
}
else
{
  temp=p;
  for(int i=1;i<pos-1;i++)
  {
  p=p->next;
}
q=p->next;
r=q->next;
  free(q);
  p->next=r->next;
  free(r);
  return temp;
  }
}
int main()
{
  struct node *p,*temp,*start=NULL,*q,*t;
  int pos;
  p=create();
  printf("\n Enter the position ");
  scanf("%d",&pos);
  t=delete_consecutive(p,pos);
  display(t);
}
