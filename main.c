#include <stdio.h>
#include <stdlib.h>
#define SIZE 5   
// 몇 명인지를 매크로로 정의하는 것. 학생 명수를 바꿀 때도 SIZE 뒤의 5를 다른 숫자로 바꾸면 되므로 간편  

int main(int argc, char *argv[])
{
  //SIZE명의 학생에 대한 시험 점수 저장 배열 선언 
  int score[SIZE];   
  int i;         // 점수를 출력하기 위한 변수 선언     
  
  printf("%d명의 점수를 입력하세요.\n", SIZE);
  
  //점수 입력 함수(반복문 활용) 
  for(i=0;i<SIZE;i++)
  scanf("%d", &score[i]);
  
  
  //점수 화면 출력(반복문 활용)   
  for(i=0;i<SIZE;i++)                                 // 반복을 위한 for문 
  printf("grade[%d] = %d\n", i, score[i]);  

  system("PAUSE");	
  return 0;
}
