//Programme for implementing doubly linked list 
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
void Display(struct node **start){
    struct node *temp_d = *start;
    while(temp_d != NULL){
        printf("%d\t",temp_d->data);
        temp_d = temp_d->next;
    }
    printf("\n");
}
void Deletion(struct node **start){
    struct node *temp;
    int choice_d;

    printf("\n --Performing Deletion-- \n");
    printf("\n 1. Deletion from Beginning \n 2. Deletion from Ending \n 3. Deletion from Specific Position ");
    scanf("%d",&choice_d);

    if(choice_d == 1){
        printf("\n--Deleting from Beginning--\n");
        temp = *start;
        *start = temp->next;
        temp->prev = NULL;
        free(temp);
    }
    else if(choice_d == 2){
        struct node *p;
        printf("\n --Deleting from Ending");
        temp = *start;
        while(temp->next != NULL){
            temp = temp->next;
        }
        p = temp->prev;
        p->next = NULL;
        free(temp);
    }
    else if(choice_d == 3){
        int pos;
        temp = *start;
        printf("\n --Deleting from Specific position--\n");
        printf("Enter the position of deletion :");
        scanf("%d",&pos);
        for(int i = 0; i < pos-1; i++){
            temp = temp->next;
        }
        struct node *p;
        p = temp->next;
        temp->next = p->next;
        p->next->prev = temp;
        free(p);
    }
    else{
        printf("INVALID CHOICE");
        return;
    }
    temp = *start;
    printf("Linked list after deletion :");
    Display(&temp);
}
void Insertion(struct node **start){
    struct node *temp;
    printf("\n--Performing Insertion-- \n");
    struct node *newnode;

    if(*start == NULL){
        printf("\n Linked list is empty--\n ");
    }
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data of node: ");
    scanf("%d",&newnode->data);

    int choice_i;
    printf("\n 1. Insertion at Beginning \n 2. Insertion at Ending\n 3. Insertion at Specific Position \n");
    scanf("%d",&choice_i);

    if(choice_i == 1){
        printf("\n --Inserting Node in the Beginning--\n ");
        newnode->prev = NULL;
        newnode->next = *start;
        *start = newnode;
    }
    else if(choice_i == 2){
        printf("\n --Inserting Node in the Ending--\n ");
        temp = *start;
        while(temp->next != NULL){
            temp = temp->next;
        }
        newnode->prev = temp;
        temp->next = newnode;
        newnode->next = NULL;
    }
    else if(choice_i == 3){
        printf("\n --Inserting Node at the Specific Position--\n ");
        int Pos;
        temp = *start;
        printf("Enter the position :");
        scanf("%d",&Pos);
        for(int i = 0; i < Pos-1; i++){
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->prev = temp;
    }
    else{
        printf("INVALID CHOICE");
        return;
    }
    temp = *start;
    printf("\n Linked List After Insertion is :\n");
    Display(&temp);
}

int main(){
    int n;
    struct node *head = NULL, *temp;
    struct node *newnode;
    printf("\n Enter the initial Number of Nodes :");
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("\n Enter the data of node :");
        scanf("%d",&newnode->data);

        if(head == NULL){
            head = newnode;
            newnode->next = newnode->prev =NULL;
        }
        else{
            temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            newnode->prev = temp;
            temp->next = newnode;
            newnode->next = NULL;
        }
    }
    int choice_m;
    while(true){
        printf("1. Insertion \n 2. Deletion \n 3. Exit");
        printf("\n Enter your choice :");
        scanf("%d",&choice_m);
        if(choice_m == 1){
            Insertion(&head);
        }
        else if(choice_m == 2){
            Deletion(&head);
        }
        else if(choice_m == 3){
            printf("\n -Exit- \n");
            break;
        }
        else{
            printf("--INVALID CHOICE--");
        }
    }

    return 0;
}
