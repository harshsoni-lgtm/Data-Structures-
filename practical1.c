#include<stdio.h>
int A[10];
int count = -1;

void display(int Ar[]){
    for(int i = 0; i < count ;i++){
        printf(Ar[i],"\t");
    }
}
void insertion(int Arr[]){
    int choice,value;
    printf("\n ---Insertion---\n");

    printf("\n Enter the value: \n");
    scanf("%d",&value);
    count++;

    printf("\n 1. Insertion in Starting \n Insertion at End \n Insertion At Specific Position ");
    printf("\n Enter your choice :");
    scanf("%d",&choice);

    swtich(choice){
        case 1:
        printf("\n Inserting at Begining \n");
        for(int i = 0; i < count; i++){
            Arr[i] = Arr[i+1];
        }
        Arr[0] = value;

        case 2:
        printf(" Inserting at End ");
        Arr[count] = value;

        case 3:
        int pos;
        printf(" Inserting at Specific Position :");
        printf("Enter the position for insertion ");
        scanf("%d",&pos);

        for(int i = pos; i < count; i++){
            Arr[i] = Arr[i+1];
        }
        Arr[pos] = value;
    }
    display(Arr);
}
int main(){
    int n;

    printf("Enter the Number of elements in the Array :");
    for(int i = 0; i < n; i++){
        printf("Enter the element :");
        scanf("%d",&A[i]);
        count++;
    }
    int choice;

    printf("\n 1. Insertion \n 2. Deletion \n 3. Exit");

    printf("\n Enter your choice : \n");
    scanf("%d",&choice);

    while(1){
        if(choice == 1){
        insertion(A);
        }
        else if(choice == 2){
            deletion(A);
        }
        else if(choice == 3){
            break;
        }
        else{
            printf("INVALID CHOICE");
        }
    }



}