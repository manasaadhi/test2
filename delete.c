#include<stdio.h>
#include<stdlib.h>
struct stu
{
	int data;
	struct stu *next;
};
struct stu * createnode(struct stu *,struct stu **);
void Display(struct stu *);
struct stu * deletion(struct stu *,int);
//struct stu *t=0;
int main()
{
	struct stu *H1=0;

struct stu *t1=0;
	int i=5,pos;
printf("Enter nodes for list1:\n");
	while(i>0)
	{
		H1=createnode(H1,&t1);
		i--;
	}
	printf("list1 Nodes are:\n");
	Display(H1);

	printf("\nEnter a position\n");
	scanf("%d",&pos);
	
H1=deletion(H1,pos);

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
struct stu * deletion(struct stu *H,int pos)
{
	struct stu * temp=0,*prev=0;
	prev=H;
	if(pos==1)
	{
		H=prev->next;
		free(prev);
		return H;
	}
	while(pos-2>0&&prev&&prev->next)
	{
		prev=prev->next;
		pos--;
	}
	if(prev&&prev->next)
	{
	temp=prev->next;
	prev->next=temp->next;
	free(temp);
	}
	else
	{
		printf("position is out of range\n");
		exit(0);
	}
return H;
	
}

