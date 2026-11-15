#include<stdio.h>
#include<stdbool.h>
int top = -1;
int A[25];
int max;
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
    printf("\n---Verifying whether Stack is Full---\n");
    if(top == max-1){
        printf("\n--Stack OverFlow--\n");
        return true;
    }
    else{
        printf("\nPerforming Push Operation\n");
        return false;
    }
}
void Push(){
    printf("\n --Pushing In Stack-- \n");
    int value;
    if(isFull()){
        return;
    }
    else{
        printf("\nEnter the element :");
        scanf("%d",&value);
        top++;
        A[top] = value;
        printf("\n --Value entered in the stack--\n");
    }
}

void Pop(){
    printf("\n --Poping From Stack-- \n");
    if(isEmpty()){
        return;
    }
    else{
        printf("Deleting the element from the stack");
        int x;
        x = A[top];
        top--;
    }
}

void Display(){
    if(isEmpty()){
        return;
    }
    else{
        for(int i = 0; i <= top; i++){
        printf("%d\t",A[i]);
        }
    }
    
}
int main(){
    int n;
    
    printf("Enter the maximum size of stack :");
    scanf("%d",&max);
    printf("Enter initial size of stack :");
    scanf("%d",&n);
    for(int i =0; i <n; i++){
        printf("Enter value :");
        scanf("%d",&A[i]);
        top++;
    }
    int choice_m;

    while(true){
        printf("\n 1.Push \n 2.Pop \n 3.Display \n 4.Exit");
        printf("\n Enter the choice \n");
        scanf("%d",&choice_m);
        if(choice_m == 1){
            Push();
        }
        else if(choice_m == 2){
            Pop();
        }
        else if(choice_m == 3){
            Display();
        }
        else if(choice_m == 4){
            printf("\n--Exiting--\n");
            break;
        }
        else{
            printf("INVALID CHOICE");
        }
    }

    return 0;
}