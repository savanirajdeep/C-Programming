#include <stdlib.h>
#include <stdio.h>
struct node
{
    int number;
    struct node *next;
};
struct node* top = NULL;
 
void push(int ele);
void pop();
void display();
int main()
{
    int ele, choice;
    while(1)
    {
        //choice to choose operation
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter the operations to be performed on stack: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter the element to add in stack: ");
                scanf("%d",&ele);
                push(ele);
                printf("\n");
                break;
            
            case 2:
                pop();
                printf("\n");
                break;
                
            case 3:
                display();
                printf("\n");
                break;
                
            case 4:
                exit(0);
                
                
            default:
                printf("Invalid choice\n");
                printf("\n");
                
        }
    }
}
void push(int ele)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        //for checking temp pointer is constructed or not 
        printf("Memory not allocated");
        
    }
    if(top == NULL)
    {
        //if no element in stack
        temp->number = ele;
        temp->next = NULL;
        top = temp;
    }
    else
    {
        //if already there are nodes in stack
        temp->number = ele;
        temp->next = top;
        top = temp;
    }
}
void pop()
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        //for checking if temp pointer is created or not 
        printf("Memory not allocated\n");
    }
    if (top == NULL)
    {
        printf("The stack is empty: \n");
        
    }
    temp = top;
    top = top->next;
    free(temp);
}
void display()
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        //for checking if temp pointer is created or not 
        printf("Memory not allocated\n");
    }
    temp = top;
    while(temp!=NULL)
    {
        printf("Data: %d\n",temp->number);
        temp = temp->next;
    }
    printf("\n");
}
