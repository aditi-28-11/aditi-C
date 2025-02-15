#include <stdio.h>
#include<stdlib.h>
void insertend(int);
void deleteend();
void display();
void stackdemo() {
	int a,b;
	struct colgate *f,*r;
	f=r=NULL;
	while (1) {
		printf("\n\nenter your requirement based on menu shown below\n\n");
		printf("1.insert element\n2.delete element\n3.display\n4.exit\n\n");
		scanf("%d",&b);
		switch (b) {
		case 1:
			printf("enter the element to be inserted");
			scanf("%d",&a);
			insertend(a);
			break;
		case 2:
			deleteend();
			break;
		case 3:
			display();
			break;
		case 4: exit (0);
        	}
       }
}
