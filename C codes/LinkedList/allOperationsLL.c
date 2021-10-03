//Operations on singly linked list

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

 struct node *head;

//function to create a singly LL
void create(){
    struct node *newnode,*temp;
     int i, n, item;
    printf("enter the no of nodes:");
    scanf("%d", &n);

    printf("enter the value of head node:");
    scanf("%d", &item);

    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = item;
    newnode->next = 0;

    head = newnode;
    temp = head;

    for (int i = 1; i < n; i++)
    {
        printf("enter the value of next node:");
        scanf("%d", &item);

        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = item;
        newnode->next = 0;

        temp->next=newnode;  //next the nodes
        temp=temp->next;  //jump the nodes

    }
}
// Function to insert at beginning of linked list
void insertAt_beg(int data){
    struct node *newnode;
    
     newnode = (struct node *)malloc(sizeof(struct node));
     newnode->data=data;
     newnode->next=head;
     head=newnode;
}

// Function to insert at end of linked list
void insertAt_end(int data){
    struct node *newnode,*p;

     newnode = (struct node *)malloc(sizeof(struct node));
     newnode->data=data;
     p=head;
     while(p->next!=NULL){
         p=p->next;
     }
     p->next=newnode;
     newnode->next=NULL;
     
}

// Function to insert in between the linked list
void insertAt_pos(int data,int pos){
    struct node *newnode,*p;
    
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(pos==1){
        
        newnode->next=head;
        head=newnode;
    }
    p=head;
    for (int i = 0; i < pos-1 && p!=NULL; i++)
    {
        p=p->next;
        if (p==NULL)                
        {
            printf("there are less than %d elements\n",pos);
        }
        else{
            newnode->next=p->next;
            p->next=newnode;
        }
    }
}

// Function to delete from the front of the linked list
void deleteFirst()
{
    struct node* temp;
    if (head == NULL)
        printf("\nList is empty\n");
    else {
        temp = head;
        head = head->next;
        free(temp);
    }
}
  
// Function to delete from the end of the linked list
void deleteEnd()
{
    struct node *temp, *prevnode;
    if (head == NULL)
        printf("\nList is Empty\n");
    else {
        temp = head;
        while (temp->next != 0) {
            prevnode = temp;
            temp = temp->next;
        }
        free(temp);
        prevnode->next = 0;
    }
}
  
// Function to delete from any specified position from the linked list
void deletePosition()
{
    struct node *temp, *position;
    int i = 1, pos;
  
    // If LL is empty
    if (head == NULL)
        printf("\nList is empty\n");
  
    // Otherwise
    else {
        printf("\nEnter index : ");
  
        // Position to be deleted
        scanf("%d", &pos);
        position = malloc(sizeof(struct node));
        temp = head;
  
        // Traverse till position
        while (i < pos - 1) {
            temp = temp->next;
            i++;
        }
  
        // Change Links
        position = temp->next;
        temp->next = position->next;
  
        // Free memory
        free(position);
    }
}

// Function to print the  linked list
void display(){
     struct node *temp;
    if(head==NULL){
        printf("list is empty\n");
    }

    temp=head;
     printf("Nodes of singly linked list\n");
    while (temp!=0)        
    {
        printf("\t %d",temp->data);
        temp=temp->next;
    }
    printf("\n\n");
    }

// Function to find the maximum element in the linked list
void maximum()
{
    int a[10];
    int i;
    struct node* temp;
  
    // If LL is empty
    if (head == NULL)
        printf("\nList is empty\n");
  
    // Otherwise
    else {
        temp = head;
        int max = temp->data;
  
        // Traverse LL and update the
        // maximum element
        while (temp != NULL) {
  
            // Update the maximum
            // element
            if (max < temp->data)
                max = temp->data;
            temp = temp->next;
        }
        printf("\nMaximum number "
               "is : %d ",
               max);
    }
}
  
// Function to find the mean of the elements in the linked list
void mean()
{
    int a[10];
    int i;
    struct node* temp;
  
    // If LL is empty
    if (head == NULL)
        printf("\nList is empty\n");
  
    // Otherwise
    else {
        temp = head;
  
        // Stores the sum and count of
        // element in the LL
        int sum = 0, count = 0;
        float m;
  
        // Traverse the LL
        while (temp != NULL) {
  
            // Update the sum
            sum = sum + temp->data;
            temp = temp->next;
            count++;
        }
  
        // Find the mean
        m = sum / count;
  
        // Print the mean value
        printf("\nMean is %f ", m);
    }
    printf("\n\n");
}

// Function to reverse the linked list
void reverseList()
{
    struct node *prevNode, *curNode;

    if(head != NULL)
    {
        prevNode = head;
        curNode = head->next;
        head = head->next;

        prevNode->next = NULL; // Make first node as last node

        while(head != NULL)
        {
            head = head->next;
            curNode->next = prevNode;

            prevNode = curNode;
            curNode = head;
        }

        head = prevNode; // Make last node as head
        printf("SUCCESSFULLY REVERSED LIST\n");
    }
}

int main()
{
   struct node *head=NULL;
   create();
   maximum();
   mean();
   reverseList();
   display();

    return 0;
}