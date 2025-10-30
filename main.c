#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 3

void addMatrix(int A[][COLS], int B[][COLS], int C[][COLS])
{
     //C = A + B 형태로 행렬 계산 
     //for문을 이용해서 계산
     int i, j;  
     for(i=0;i<ROWS;i++)
       for(j=0;j<COLS;j++)
         C[i][j] = A[i][j] + B[i][j];
}

void printMatrix(int A[][COLS])
{
     //C = A + B 형태로 행렬 계산 
     //for문을 이용해서 계산  
     int i, j;  
     for(i=0;i<ROWS;i++)
     {
       for(j=0;j<COLS;j++)
        printf(" %3d", A[i][j]);
        printf("\n");
        }
}
 

int main(int argc, char *argv[])
{
    int A[ROWS][COLS] = { //더하기 대상 행렬  
        {2, 3, 0},
        {8, 9, 1},
        {7, 0, 5}
        };
        
    int B[ROWS][COLS] = { //더하기 대상 행렬  
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
        };
        
    int C[ROWS][COLS]; //덧셈 결과 행렬
    
    addMatrix(A, B, C);
    printMatrix(C); 
  
  
  system("PAUSE");	
  return 0;
}



