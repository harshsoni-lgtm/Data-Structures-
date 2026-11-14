#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int count = 0;
struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;
void Display(struct node **start){
    struct node *temp;
    
    temp = *start;
    while(temp != NULL){
        printf("%d\t",temp->data);
        temp = temp->next;
    }
}
void Division(struct node **start){
    struct node *temp = *start;
    struct node *temp_p;
    int part1, part2;
    if(count%2 != 0){
        part1 = (count/2) + 1;
        part2 = count/2;
    }
    else{
        part1 = part2 = count/2;
    }
    for(int i = 1; i <part1; i++){
        temp = temp->next;
    }
    temp_p = temp->next;
    temp->next = NULL;
    temp = *start;
    printf("\n Part 1\n");
    Display(&temp);
    printf("\n Part 2 \n");
    Display(&temp_p);
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
    count--;
    temp = *start;
    printf("\n ---List After Deletion---\n");
    Display(&temp);
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
    
    count++;
    temp = *start;
    printf("\n ---List After Insertion---\n");
    Display(&temp);
    
}
int main(){
    struct node *newnode,*temp;
    int n;
    printf("Enter the inital Number of Nodes required :");
    scanf("%d",&n);
    count = n;
    for(int i = 0; i < n;i++){
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data of node :");
        scanf("%d",&newnode->data);

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
        }}
        int choice_m;
        while(true){
            printf("\n 1. Insertion \n2. Deletion \n3. Divide by 2 \n4. Exit");
            printf("Enter your choice :");
            scanf("%d",&choice_m);
            if(choice_m == 1){
                Insertion(&head);
            }
            else if(choice_m == 2){
                Deletion(&head);
            }
            else if(choice_m == 3){
                Division(&head);
            }
            else if(choice_m == 4){
                printf("\n--Exit--\n");
                break;
            }
            else{
                printf("INVALID CHOICE");
            }
        }
    
    return 0;
}