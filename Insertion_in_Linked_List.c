#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

//Validation checks are left in the programme and would be done afterwords 


struct node *head = NULL;

void Display(){
    struct node *temp;
    temp = head;
    while(temp != NULL){
        printf("%d\t",temp->data);
        temp = temp->next;
    }
}
void Deletion(struct node **start){
    struct node *temp;
    int choice_d;
    printf("\n 1. Deletion from Begining \n 2. Deletion from Ending \n 3. Deletion from Specific Position \n ");
    printf("Enter your choice :");
    scanf("%d",&choice_d);

    //Deletion from Begining..
    if(choice_d == 1){
        temp = *start;
        *start = temp->next;
        free(temp);
        printf("Successfully Deleted First Node \n");
    }

    //Deletion from Ending..
    else if(choice_d == 2){
        struct node *p;
        temp = *start;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        p = temp->next;
        temp->next = NULL;
        free(p);
        printf("Successfully Deleted Last Node\n");
    }
    
    //Deletion from specific position..
    else if(choice_d == 3){
        struct node *p;
        int pos;
        printf("Enter the position of node :");
        scanf("%d",&pos);
        temp = *start;
        for(int i = 0; i < pos; i++){
            temp = temp->next;
        }

        p = temp->next;
        temp->next = p->next;
        free(p);
        printf("Successfully Deleted %dth node ",pos);
    }
    printf("\n ---List After Deletion---\n");
    Display();
}
void Insertion(struct node **start){
    int choice_i;
    struct node *newnode,*temp;

    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data of the node :\n");
    scanf("%d",&newnode->data);

    if(*start == NULL){
        printf("\n Linked List is empty");
        *start = newnode;
        newnode->next = NULL;
        return;
    }
    
    
        printf("\n 1. Insertion at Beginning \n 2. Insertion at Ending \n 3. Insertion at Specific Position \n");
        printf("Enter your choice :");
        scanf("%d",&choice_i);

        //Insertion in begining...
        if(choice_i == 1){
        temp = *start;
        *start = newnode;
        newnode->next = temp; 
        
        }
        //Insertion in ending..
        else if(choice_i == 2){
            temp = *start;
            while(temp->next  != NULL){
                temp= temp->next;
            }
            temp->next = newnode;
            newnode->next = NULL;
            
            }
        //Inserting at specific position..
        else if(choice_i == 3){
            temp = *start;
            int pos;
            printf("Enter the position to insert the node :\n");
            scanf("%d",&pos);
            for(int i = 0; i < pos; i++){
                temp = temp->next;
            }
            newnode->next = temp->next;
            temp->next = newnode;
            
            }
        else{
            printf("INVALID CHOICE");
            }
    
    
    printf("\n ---List After Insertion---\n");
    Display();
    
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
    int choice_m;
    bool t_m = true;
    while(t_m){
        printf("\n 1. Insertion \n 2. Deletion \n 3. Exit \n");
        printf("Enter your choice :");
        scanf("%d",&choice_m);

        if(choice_m == 1){
            printf("\n --- Performing Insertion--- \n");
            Insertion(&head);
        }
        else if(choice_m == 2){
            printf("\n --Performing Deletion--\n");
            Deletion(&head);
        }
        else if(choice_m == 3){
            printf("\n Exit \n");
            t_m = false;
        }
        else{
            printf("INVALID CHOICE");
        }
    }
    return 0;
}