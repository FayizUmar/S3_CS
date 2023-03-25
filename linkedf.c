#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *head = NULL;

void insertfront();
void deletefront();
void insertrand();
void deleterand();
void insertend();
void deleteend();
void display();

void main()
{
    int choice;
    while(choice!=8)
    {
        printf("enter the choice = ");
        printf(" 1) display \n 2) insert begining \n 3) insert end \n 4) insert random \n 5) delete begining \n");
        printf("6) delete end \n 7) delete random \n");

        switch(choice)
        {
            case 1:
            insertfront();
            break;

            case 2:
            insertend();
            break;

            case 3:
            insertrand();
            break;

            case 4:
            display();
            break;

            case 5:
            deletefront();
            break;

            case 6:
            deleteend();
            break;

            case 7:
            deleterand();
            break;

            case 8:
            exit(0);

            default:
            printf("invalid entry !!!");           
        }
    }
}
void insertfront()
{
    struct node *newnode;
    int info;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("enter the number to be inserted");
    scnaf("%d",&info);
    newnode->data=info;
    newnode->link=head;
    head=newnode;

}
void insertend()
{
    int info;
    struct node *newnode;
    struct node *head;
    struct node *temp;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("enter the number to be entered = \n");
    scanf("%d",&info);

    newnode->data = info;
    newnode->link= NULL;

    head = temp;
    while(temp->!=NULL)
    {
        temp = temp->link;
    }
    head->link = temp;


}
void insertrand()
{
    struct node *newnode,*temp;
    int info,n;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("enter the position and number to be inserted");
    scanf("%d %d",&n,&info);

    head = temp;
    newnode->data = info;
    newnode->link = NULL;
    while(i<n-1)
    {
        temp = temp->link;
        i++;
    }
    newnode->link = temp->link;
    temp->link=newnode;


    
}
void deletebeg()
{
	struct node* temp;
	if (start == NULL)
		printf("\nList is empty\n");
	else {
		temp = start;
		start = start->link;
		free(temp);
	}
}


void deleteend()
{
	struct node *temp, *prevnode;
	if (start == NULL)
		printf("\nList is Empty\n");
	else {
		temp = start;
		while (temp->link != 0) {
			prevnode = temp;
			temp = temp->link;
		}
		free(temp);
		prevnode->link = 0;
	}
}


void deleterand()
{
	struct node *temp, *position;
	int i = 1, pos;

	if (start == NULL)
		printf("\nList is empty\n");

	
	else {
		printf("\nEnter index : ");

		
		scanf("%d", &pos);
		position = malloc(sizeof(struct node));
		temp = start;

		
		while (i < pos - 1) {
			temp = temp->link;
			i++;
		}

		
		position = temp->link;
		temp->link = position->link;

		
		free(position);
	}
}