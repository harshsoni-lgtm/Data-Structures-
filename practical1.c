#include<stdio.h>

void Display(int Arr[],int length){
    for(int i = 0; i < length; i++){
        printf("%d \t",Arr[i]);
    }
    printf("\n");
}

int Deletion(int Arr[],int length){
    int choice_3;

    printf("\n --Deletion--\n");
    printf("\n 1. Deletion at Begining \n 2. Deletion at Ending \n 3. Deletion from Specific Position \n");
    scanf("%d",&choice_3);

    switch(choice_3){
        case 1:
        printf("\n --Deletion from Begining--\n");
        for(int i = 1; i <length; i++ ){
            Arr[i-1] = Arr[i];
        }
        printf("\n Deleted \n");
        length--;
        break;

        case 2:
        printf("\n --Deletion from Ending--\n");
        
        printf("\n Deleted \n");
        length--;
        break;

        case 3:
        printf("\n --Deleting from Specific Position --\n");
        int pos;
        printf("\n Enter the position : \n");
        scanf("%d",&pos);
        for(int i = pos-1; i < length-1; i++){
            Arr[i] = Arr[i+1];
        }
        printf("\n Deleted \n");
        length--;
        break;

        default:
        printf("INVALID CHOICE ");
        break;
    }
    
    
    printf("\n Array After Deletion :");
    Display(Arr,length);
    return length;
}

int Insertion(int Arr[],int length){
   
    printf("\n --- Insertion ---\n");
    
    int value;
    printf("\n Enter the value to be inserted :\n");
    scanf("%d",&value);

    int choice_2;
    printf("\n 1. Insertion at Begining \n 2. Insertion at Ending \n 3. Insertion at Specific Position \n");

    printf("\n Enter choice :");
    scanf("%d",&choice_2);

    switch(choice_2){
        case 1:
        printf("\n --Inserting at Begining-- \n");
        
        for(int i = length; i > 0; i--){
            Arr[i] = Arr[i-1];
        }
        Arr[0] = value;
        length++;
        break;

        case 2:
        printf("\n --Inserting at End--\n");
        Arr[length] = value;
        length++;
        break;

        case 3:
        
        printf("\n Inserting at Specific Position \n");
        int pos;
        printf("Enter the Position :");
        scanf("%d",&pos);
        for(int i = length; i >= pos; i--){
            Arr[i] = Arr[i-1];
        }
        Arr[pos-1] = value;
        length++;
        break;
        
        default:
        printf("INVALID CHOICE ");
        break;
    }

    printf("Array after Insertion : \t");
    Display(Arr,length);
    return length;
}
int main(){
    int A[10],n,length = 0;
    printf("\n Enter the number of element in the array :\n");
    scanf("%d",&n);
    
    //Initializing the Array..
    for(int i = 0; i < n; i++){
        printf("\n Enter the value :\n");
        scanf("%d",&A[i]);
        
        length++;
    }

    int choice_1;
    while(1){
        printf("\n 1. Insertion \n 2. Deletion \n");
        printf("\n Enter your choice :");
        scanf("%d",&choice_1);

        if(choice_1 == 1){
            length = Insertion(A,length);
        }
        else if(choice_1 == 2){
            length = Deletion(A,length);
        }
        else if(choice_1 == 3){
            printf("Exit");
            break;
        }
        else{
            printf("InValid Choice");
        }
    }
    return 0;

}