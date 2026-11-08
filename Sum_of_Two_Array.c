#include<stdio.h>
//This programme is for adding two Arrays..

int main(){
    int A[10][10], B[10][10];
    int Rows, Columns;
    printf("Enter the number of rows :\n");
    scanf("%d",&Rows);
    printf("Enter the number of columns :\n");
    scanf("%d",&Columns);

   
    //Initializing array 1..
    printf("\n ---Enter the element for Array 1--- \n");
    for(int i = 0; i < Rows; i++){
        for(int j = 0; j < Columns; j++){
            printf("Enter the element :");
            scanf("%d",&A[i][j]);
        }}

    //Initializing Array 2..
    printf("\n ---Enter the element for Array 2--- \n");
    for(int j = 0; j < Rows; j++){
        for(int i = 0; i < Columns; i++){
            printf("Enter the element : \n");
            scanf("%d",&B[i][j]);
        }
    }
    //Calculating sum of arrays..
    int Sum[Rows][Columns];
    for(int i = 0; i < Rows; i++){
        for(int j = 0; j < Columns; j++){
            Sum[i][j] = A[i][j]+B[i][j];
        }
    }

    //Displaying the Sum Array..
    for(int i = 0; i < Rows; i++){
        for(int j = 0; j < Columns; j++){
            printf("%d\t",Sum[i][j]);
            
        }
        printf("\n");
    }
    return 0;
}