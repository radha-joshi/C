#include<stdio.h>
#include<stdlib.h>
struct node
{
     int data;
     struct node *next;
};

struct node *head=NULL;
struct node *ptr;

void insert_at_beg()
{
    ptr = (struct node *)malloc(sizeof (struct node));
    if (ptr == NULL)
    {
        printf("failed to allocate memory");
    }
    else
    { 
        printf("enter data: \n");
        scanf("%d", &ptr->data);
        if(head==NULL)
        {
            head=ptr;
            ptr->next=NULL;
        }
        else
        {
            ptr->next=head;
            head=ptr;
        }
    }
}

int main()
{
    insert_at_beg();
    return 0;
}

