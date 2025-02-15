//linked list demo
#include <stdio.h>
#include<stdlib.h>
void insertfront (int);
void insertend (int);
void insertafter(int, int);
void deletefront();
void deleteend();
void deleteele(int);
int search (int);
void queuedemo ();
void stackdemo();
void display();
int main()
{
	int a,b,c,d;
	while(1) {
		printf("\n\nMENU\n\n");
		printf("1. insert in front \n2. insert in end \n3. insert after an element\n4. delete in beginning\n");
		printf("5. delete in end\n6. delete a specific element\n7. display\n8. linked stack demo\n9. linked queue demo\n10. search an element\n11. Exit\n\n");
		scanf("%d",&a);
		switch (a) {
		case 1:
			printf("enter the element");
			scanf("%d",&b);
			insertfront(b);
			break;
		case 2:
			printf("enter the element ");
			scanf("%d",&b);
			insertend(b);
			break;
		case 3:
			printf(" enter the element to be inserted an the after ehich element ");
			scanf("%d%d",&b,&c);
			insertafter(c,b);
			break;
		case 4:
			deletefront();
			break;
		case 5:
			deleteend();
			break;
		case 6:
			printf("enter the element to be deleted ");
			scanf("%d",&b);
			deleteele(b);
			break;
		case 7:
			display();
			break;
		case 8:
			stackdemo();
			break;
		case 9:
			queuedemo();
			break;
		case 10:
			printf("enter the element to be searched");
			scanf("%d",&b);
			d=search (b);
			if (d==1) {
				printf("element exists in the list");
			}
			else {
				printf("element does not exist in the list");
			}
			break;
		case 11:
			exit(0);
		}
return 0;	}
}
