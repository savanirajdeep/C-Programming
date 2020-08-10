#include <stdlib.h>
#include <stdio.h>
//contrcting node
struct node
{
    int number;
    struct node *next;
};
struct node* front = NULL;
struct node* rear = NULL;
void enqueue(int ele);
void dequeue();
void display();
 
int main()
{
    int ele, choice;
    while(1)
    {
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter the operations to be performed on queue: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter the element to add in stack: ");
                scanf("%d",&ele);
                enqueue(ele);
                printf("\n");
                break;
            
            case 2:
                dequeue();
                printf("\n");
                break;
                
            case 3:
                display();
                printf("\n");
                break;
                
            case 4:
                exit(0);
                
                
            default:
                printf("Invalid choice");
                printf("\n"); 
        }
    }
}
 
void enqueue(int ele)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    if(temp == NULL)
    {
        //for checking temp pointer is created or not 
        printf("No allocation of memory\n");
    }
    temp->number = ele;
    temp->next = NULL;
    if(front == NULL)
    {
        //this is the first element in queue
        front = rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;
    }
}
void dequeue()
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    if(temp == NULL)
    {
        //for checking temp pointer is created or not 
        printf("No allocation of memory\n");
    }
    if(front == NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        temp = front;
        front = front->next;
        free(temp);
    }
}
void display()
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    if(temp == NULL)
    {
        //for checking temp pointer is created or not 
        printf("No allocation of memory\n");
    }
    if(front == NULL)
    {
        printf("Queue is empty\n");
    }
    temp = front;
    while(temp != NULL)
    {
        //till the last node in queue
        printf("Data: %d\n",temp->number);
        temp = temp->next;
    }
}

