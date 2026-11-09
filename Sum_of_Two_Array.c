#include<stdio.h>
#include<stdbool.h>

void Validation(int r, int c,bool *b){
    if((r>0 && r<= 10) && (c>0 && c<= 10)){
        *b= false;
    }
    else{
        *b = true;
        printf("Please Re-Enter the Rows and Columns");
    }
}

void Display(int r, int c, int Arr[r][c]){
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d\t",Arr[i][j]);
        }
        printf("\n");
    }
}
void Sum(int R, int C, int A[R][C],int B[R][C]){
    int Sum[R][C];
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            Sum[i][j] = A[i][j]+B[i][j];
        }
    }
    printf("\n ---Displaying the Sum Matirx---\n ");
    Display(R,C,Sum);
}

void Product(int R, int C, int A[R][C],int B[R][C]){
    int Product[R][C];
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C;j++){
            Product[i][j] = A[i][j]*B[i][j];
        }
    }
    printf("\n ---Displaying the Product Matirx---\n ");
    Display(R,C,Product);
}
int main(){
    int Rows,Columns;
    bool t = true;
    printf("Enter Rows & Columns < 10 and > 0\n");
    while(t){
        printf("Enter the number of Rows :\n ");
        scanf("%d",&Rows);
        printf("Enter the number of Columns :\n");
        scanf("%d",&Columns);

        Validation(Rows, Columns,&t);
    }
    int A[Rows][Columns], B[Rows][Columns];
    //Initializing Array 1...
    printf("\n ---Enter the elements of First Array---\n ");
    for(int i = 0; i < Rows; i++){
        for(int j = 0; j < Columns; j++){
            printf("Enter the element :");
            scanf("%d",&A[i][j]);
        }
    }
    Display(Rows, Columns, A);

    //Initializing Array 2...
    printf("\n ---Enter the elements of Second Array---\n ");
    for(int i = 0; i < Rows; i++){
        for(int j = 0; j < Columns; j++){
            printf("Enter the element :");
            scanf("%d",&B[i][j]);
        }
    }
    Display(Rows, Columns, B);
    int choice;
    printf("\n 1. Sum \n 2. Product \n 3. Exit \n");

    
    while(1){
        printf("Enter your choice :");
        scanf("%d",&choice);
        if(choice == 1){
            Sum(Rows, Columns, A,B);
        }
        else if(choice == 2){
            Product(Rows, Columns, A,B);
        }
        else if(choice == 3){
            printf("EXIT");
            break;
        }
        else{
            printf("INVALID CHOICE");
        }
    }

    return 0;
}