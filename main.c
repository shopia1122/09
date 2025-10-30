#include <stdio.h>
#include <stdlib.h>
#define SIZE 5   
// 몇 명인지를 매크로로 정의하는 것. 학생 명수를 바꿀 때도 SIZE 뒤의 5를 다른 숫자로 바꾸면 되므로 간편  

int main(int argc, char *argv[])
{
   int i;
   int a[SIZE] = {1, 2, 3, 4, 5};
   int b[SIZE] = {1, 2, 3, 4, 6};
   int flag_same = 1;


  for(i=0;i<SIZE;i++)
  {
     if(a[i] != b[i])
       printf("%i-th element is diff.\n", i);     
       flag_same = 0;  
                   }
                      
  
  
  printf("Are a and b the same? %i\n", flag_same);
  
  system("PAUSE");	
  return 0;
}


