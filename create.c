#include<stdio.h>
#include<stdlib.h>
struct stu
{
	int data;
	struct stu *next;
};
struct stu * createnode(struct stu *,struct stu **);
void Display(struct stu *);
struct stu * Insert_list(struct stu *,struct stu *,int);
//struct stu *t=0;
int main()
{
	struct stu *H1=0,*H2=0;

struct stu *t1=0,*t2=0;
	int i=5,pos;
printf("Enter nodes for list1:\n");
	while(i>0)
	{
		H1=createnode(H1,&t1);
		i--;
	}
	i=5;
printf("Enter nodes for list2:\n");
	while(i>0)
	{
		H2=createnode(H2,&t2);
		i--;
	}
	printf("list1 Nodes are:\n");
	Display(H1);
printf("\n");
	printf("list2 Nodes are:\n");
	Display(H2);
	printf("\n");

	printf("Enter a position\n");
	scanf("%d",&pos);
	
H1=Insert_list(H1,H2,pos);

	printf("list1 Nodes are:\n");
	Display(H1);
	printf("\n");
}

struct stu * createnode(struct stu *H,struct stu **l)
{
	struct stu *n=0;
	n=(struct stu *)malloc(sizeof(struct stu));
	scanf("%d",&n->data);
	n->next=NULL;
	if(H==NULL)
		H=n;

	else
		(*l)->next=n;
*l=n;
return H;	

}
void Display(struct stu *H)
{
	struct stu *m=0;
		m=H;	
	while(m)
	{
		printf("%d ",m->data);
		m=m->next;
	}
}
struct stu * Insert_list(struct stu *H1,struct stu *H2,int pos)
{
	struct stu *temp1=H1;
	struct stu *temp2=H2;
	while(pos-2>0&&temp1&&temp1->next)
	{
		temp1=temp1->next;
	pos--;
	}
	while(temp2->next)
	{
		temp2=temp2->next;
	}
	if(temp1&&temp1->next)
	{
	temp2->next=temp1->next;
	temp1->next=H2;
	}
	else
	{	
		printf("position is outof range\n");
		exit(0);
	}
return H1;
}









