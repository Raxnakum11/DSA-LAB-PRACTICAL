#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *head = NULL;

struct node *allocatenew(int n)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = n;
    temp->link = NULL;
    return temp;
}

// Function to insert a new node at the end of the list
void insert(int n)
{
    struct node *temp = allocatenew(n);
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        struct node *current = head;
        while (current->link != NULL)
        {
            current = current->link;
        }
        current->link = temp;
    }
}

// Function to reverse the linked list
void RevLinkedList()
{
    struct node *prev = NULL;
    struct node *next = NULL;
    

    while (head != NULL)
    {
        next = head->link;
        head->link = prev;
        prev = head;
        head = next;
    }
    head = prev;
    printf("Linked List Reversed\n");
}

// Function to print the linked list and count the number of nodes
void print_count(struct node *head)
{
    int count = 0;
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->link;
        count++;
    }
    printf("\nCount: %d\n", count);
}

int main()
{
    // Insert some nodes into the list
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);

    printf("Original List: ");
    print_count(head);

    RevLinkedList();

    printf("Reversed List: ");
    print_count(head);

    return 0;
}
