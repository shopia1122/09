#include <stdio.h>
#include <stdlib.h>
#define SIZE 5   
// �� �������� ��ũ�η� �����ϴ� ��. �л� ����� �ٲ� ���� SIZE ���� 5�� �ٸ� ���ڷ� �ٲٸ� �ǹǷ� ����  

int main(int argc, char *argv[])
{
  //SIZE ũ�� �迭 ����   
  int grade[SIZE]; 
  int score[SIZE];   
  int i;            
  
  for(i=0;i<SIZE;i++) 
  {
   grade[i] = rand()%100;
  }
  
   for(i=0;i<SIZE;i++)    //�迭�� �ݺ��ؼ� ���ٰ� �ξ�� �Ѵ�.  
  {
   score[i] = grade [i];
  }
  
  
  for(i=0;i<SIZE;i++) 
   printf("grade[%d] = %d, score[%d] = %d\n", i, grade[i], i, score[i]);

  system("PAUSE");	
  return 0;
}



      
