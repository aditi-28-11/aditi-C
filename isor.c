#include<stdio.h>
#include<stdlib.h>
int t[100],valid;
typedef struct mylist {
	int data;
	struct mylist* next;
} *list;
list f=NULL;
list createlist(int value) { // memory is allocated to each node respectively here
	list node;
	node=(list)malloc(sizeof (struct mylist));
	node->data=value;
	node->next= NULL;
	return node;
}
void insert(int value)
{
	list temp,rag,prev=f;
	temp=createlist(value);
	if (f==NULL) {
		f=temp;
	}
	else if (temp->data < f->data) //front insertion
	{
		temp->next=f;
		f=temp;
	}
	else if (f->next==NULL) //second element
	{
		f->next=temp;
	}
	else
	{
		int x=0;
		for(rag=f; rag!=NULL; rag=rag->next)
		{
			if(temp->data<rag->data)
			{
				temp->next=prev->next;
				prev->next=temp;
				x=1;
				break;
			}
			prev=rag;
		}
		if (x==0) {
			prev->next=temp;
		}
	}
}

int verification() {
	list temp=f;
	while (temp->next)
	{
		if (temp->data>temp->next->data) {
			return 0;
		}
		return 1;
	}
}
int main()
{
	int n,i,v;
	int value;
	list temp;
	printf("enter the number of elements to be inserted\n");
	scanf("%d",&n);
	for (i=0; i<n; i++)
	{
		value=(rand()%50);
		printf("value %d\t",value);
		insert(value);
		v= verification();
		printf("verification %d\n",v);
	}
	valid=i;
	printf("sorted array elements are\n");
	for (temp=f; temp->next!=NULL; temp=temp->next)
	{
		printf("%d \t",temp->data);
	}
	printf("%d",temp->data);
}




