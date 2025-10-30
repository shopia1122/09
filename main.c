#include <stdio.h>
#include <stdlib.h>
#define SIZE 5   
// 몇 명인지를 매크로로 정의하는 것. 학생 명수를 바꿀 때도 SIZE 뒤의 5를 다른 숫자로 바꾸면 되므로 간편  

int main(int argc, char *argv[])
{
  //SIZE 크기 배열 선언   
  int grade[SIZE]; 
  int score[SIZE];   
  int i;            
  
  for(i=0;i<SIZE;i++) 
  {
   grade[i] = rand()%100;
  }
  
   for(i=0;i<SIZE;i++)    //배열도 반복해서 같다고 두어야 한다.  
  {
   score[i] = grade [i];
  }
  
  
  for(i=0;i<SIZE;i++) 
   printf("grade[%d] = %d, score[%d] = %d\n", i, grade[i], i, score[i]);

  system("PAUSE");	
  return 0;
}



      
