#include <stdio.h>
#include <stdlib.h>
#define SIZE 5   
// 몇 명인지를 매크로로 정의하는 것. 학생 명수를 바꿀 때도 SIZE 뒤의 5를 다른 숫자로 바꾸면 되므로 간편  

int main(int argc, char *argv[])
{
  //SIZE명의 학생에 대한 시험 점수 저장 배열 선언 
  int score[SIZE];   
  int i;         // 점수를 출력하기 위한 변수 선언    
  int avg;
  int sum=0;   //누적을 위한 변수는 무조건 초기화 시켜줘야 한다. 안해서 평균이 계속 1234567이 나옴.  
  
  for(i=0;i<SIZE;i++) {
  printf("학생 성적을 입력하세요: ");
  scanf("%d", &score[i]);
  sum += score[i];
}
  
  avg = sum/SIZE;
  printf("성적 평균: %d\n", avg); 

  system("PAUSE");	
  return 0;
}
