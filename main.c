#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  //5���� �л��� ���� ���� ���� ���� �迭 ���� 
  int score[5];   
  int i;         // ������ ����ϱ� ���� ���� ����     
  
  //���� �Է�   
  score[0] = 10;    //�ټ� �л��� ������ ������ �迭�� ���� ���� 
  score[1] = 20;
  score[2] = 30;
  score[3] = 40;
  score[4] = 50;
  
  
  //���� ȭ�� ���(�ݺ��� Ȱ��)   
  for(i=0;i<5;i++)                                 // �ݺ��� ���� for��, n�� �ݺ� ���ϸ� 5 ��� n�� ����   
  printf("grade[%d] = %d\n", i, score[i]);  

  system("PAUSE");	
  return 0;
}
