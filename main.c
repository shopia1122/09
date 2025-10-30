#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  //5명의 학생에 대한 시험 점수 저장 배열 선언 
  int score[5];   
  int i;         // 점수를 출력하기 위한 변수 선언     
  
  //점수 입력   
  score[0] = 10;    //다섯 학생의 각각의 점수를 배열에 각각 저장 
  score[1] = 20;
  score[2] = 30;
  score[3] = 40;
  score[4] = 50;
  
  
  //점수 화면 출력(반복문 활용)   
  for(i=0;i<5;i++)                                 // 반복을 위한 for문, n번 반복 원하면 5 대신 n을 대입   
  printf("grade[%d] = %d\n", i, score[i]);  

  system("PAUSE");	
  return 0;
}
