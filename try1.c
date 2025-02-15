//linked list demo
#include <stdio.h>
#include<stdlib.h>

typedef struct colgate {
	int data;
	struct colgate* next;
} *mylist;

mylist f=NULL,r=NULL,t=NULL;

int search (int a) {
	mylist t=f;
	int flag=0;
	while (t->next!=NULL) {
		if(t->data==a) {
			flag=1;
			break;
		}
		else {
			t=t->next;
		}
	}
	if (t->data==a) {
		flag=1;
	}
	return flag;
}

mylist createlist() { // memory is allocated to each node respectively here
	mylist node;
	node=(mylist)malloc(sizeof (struct colgate));
	node->data=0;
	node->next= NULL;
	return node;
}
void insertfront (int a) { // element will be inserted in the front
	mylist temp;
	temp= createlist();
	temp->data=a;
	if(f!=NULL) {
		temp->next= f;
		f=temp;
		r=temp;
	}
	else {
		f=temp;
		r=temp;
	}
}

void insertend(int a) { //element will be inseted in the end of the list
	mylist temp;
	temp=createlist();
	temp->data=a;
	if (r==NULL) {
		r=temp;
		f=temp;
	}
	else {
		r->next=temp;
		r=temp;
	}
}
void insertafter (int a,int b) {
	mylist temp, n;
	int flag=search(a);
	if (flag==1) {
		n=f;
		while (n!=NULL && n->data!=a) {
			n=n->next;
		}
		temp->next=n->next;
		temp->data=b;
		n->next=temp;
	}
	else {
		printf("element a does not exist in list");
	}
}
void deleteend() { // delete the element in the end
	int a;
	mylist n,m;
	n=f;
	m=n;
	a=r->data;
	printf("deleted data is %d \n",a);
	while(n!=r) {
		m=n;
		n=n->next;
	}
	free (r);
	m->next=NULL;
	r=m;
}
void deletefront() { // delete the element in the front
    mylist x;
	printf("the deleted element is %d",f->data);
	x=f->next;
	free(f);
	f=x;
}
void deleteele(int a) { // delete a specific element
	mylist n,m;
	int flag=search(a);
	if (flag==1) {
		n=f;
		m=n;
		if (a==f->data) {
			deletefront();
		}
		else if(a==r->data) {
			deleteend();
		}
		else {
			while(n->data!=a) {
				m=n;
				n=n->next;
			}
			free(n);
			m->next=n->next;
			n->next=NULL;
		}
	}
	else {
		printf("the element %d does not exist in the list",a);
	}
}
void display() {
	if(f==NULL)
		printf("list empty");
	else {
		for(t=f; t->next!=NULL; t=t->next) {
			printf("%d --",t->data);
		}
		printf("%d",t->data);
	}
}
