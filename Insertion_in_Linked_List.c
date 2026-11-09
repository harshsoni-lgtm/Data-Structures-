#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;

void Display(){
    struct node *temp;
    temp = head;
    while(temp != NULL){
        printf("%d\t",temp->data);
        temp = temp->next;
    }
}

bool Insertion(struct node **start){
    int choice;
    struct node *newnode,*temp;

    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data of the node :\n");
    scanf("%d",&newnode->data);

    if(*start == NULL){
        printf("\n Linked List is empty");
        *start = newnode;
        newnode->next = NULL;
    }
    bool t = true;
    while(t){
        printf("\n 1. Insertion at Beginning \n 2. Insertion at Ending \n 3. Insertion at Specific Position \n");
        printf("Enter your choice :");
        scanf("%d",&choice);

        //Insertion in begining...
        if(choice == 1){
        temp = *start;
        *start = newnode;
        newnode->next = temp;
        }
        //Insertion in ending..
        else if(choice == 2){
            temp = *start;
            while(temp->next  != NULL){
                temp= temp->next;
            }
            temp->next = newnode;
            newnode->next = NULL;
            }
        //Inserting at specific position..
        else if(choice == 3){
            temp = *start;
            int pos;
            printf("Enter the position to insert the node :\n");
            for(int i = 0; i < pos; i++){
                temp = temp->next;
            }
            newnode->next = temp->next;
            temp->next = newnode;
            }
        else{
            t = false;
            }
    }
    
    printf("\n ---List After Insertion---\n");
    Display();
    return false;
}

int main(){
    int n;
    struct node *newnode,*temp;
    printf("\n ---Linked List---\n ");
    printf("Enter the initial number of nodes required :\n");
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data of the node :");
        scanf("%d",&newnode->data);

        //Linking the list..
        if(head == NULL){
            head = newnode;
            newnode->next = NULL;
        }
        else{
            temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->next = NULL;
        }
    }

    bool t2 = true;
    while(t2){
        printf("\n ----Performing Insertion----\n");
        printf("\n --Enter the data of the node to be inserted--\n");
        t2 = Insertion(&head);
    }
    return 0;
}