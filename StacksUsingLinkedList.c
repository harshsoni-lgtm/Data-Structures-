#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node{
    int data;
    struct node *next;
};
int top = -1;
int max = 10;
bool isEmpty(){
    if(top == -1){
        printf("\n--Stack is Empty--\n");
        return true;
    }
    else{
        return false;
    }
}

bool isFull(){
    if(top == max-1){
        printf("\n --Stack OverFlow--\n");
        return true;
    }
    else{
        return false;
    }
}
void Display(struct node **start){
    printf("\n--Displaying the list--\n");
    isEmpty();
    struct node *temp_display;
    temp_display = *start;
    for(int i =0; i <= top; i++){
        printf("%d\t",temp_display->data);
        temp_display = temp_display->next;
    }
}
void Push(struct node **start){
    if(isFull()){
        return;
    }
    else{
        printf("\n--Performing Push Operation--\n");
    }
    struct node *temp_push,*newnode;
    temp_push = *start;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data :");
    scanf("%d",&newnode->data);

    top++;
    *start = newnode;
    newnode->next = temp_push;
    temp_push = *start;
    printf("\n --Stack After Pushing-- \n");
    Display(&temp_push);
}

void Pop(struct node **start){
    if(isEmpty())
{
}    struct node *temp_pop;
    printf("\n--Deleting the element from the Stack--\n");
    temp_pop = *start;
    *start = temp_pop->next;
    free(temp_pop);
    top--;
    temp_pop = *start;
    printf("\n--After Deleting from Stack--\n");
    Display(&temp_pop);
}
int main(){
    int n;
    struct node *newnode,*head = NULL, *temp;

    printf("Enter initial member of the Stack :");
    scanf("%d",&n);

    for(int i = 0; i <n; i++){
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data :");
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
        }
        top++;
    }
    int choice_m;
    while(true){
        printf("\n 1.Push \n 2.Pop \n 3.Display \n 4.Exit \n");
        printf("enter your choice :");
        scanf("%d",&choice_m);
        if(choice_m == 1){
            Push(&head);
        }
        else if(choice_m == 2){
            Pop(&head);
        }
        else if(choice_m == 3){
            Display(&head);
        }
        else if(choice_m == 4){
            printf("\n Exit \n");
            break;
        }
        else{
            printf("INVALID CHOICE");
        }
    }
    return 0;
}