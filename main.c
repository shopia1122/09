#include <stdio.h>
#include <stdlib.h>
#define SIZE 5   
// �� �������� ��ũ�η� �����ϴ� ��. �л� ����� �ٲ� ���� SIZE ���� 5�� �ٸ� ���ڷ� �ٲٸ� �ǹǷ� ����  

int main(int argc, char *argv[])
{
  //SIZE���� �л��� ���� ���� ���� ���� �迭 ���� 
  int score[SIZE];   
  int i;         // ������ ����ϱ� ���� ���� ����     
  
  printf("%d���� ������ �Է��ϼ���.\n", SIZE);
  
  //���� �Է� �Լ�(�ݺ��� Ȱ��) 
  for(i=0;i<SIZE;i++)
  scanf("%d", &score[i]);
  
  
  //���� ȭ�� ���(�ݺ��� Ȱ��)   
  for(i=0;i<SIZE;i++)                                 // �ݺ��� ���� for�� 
  printf("grade[%d] = %d\n", i, score[i]);  

  system("PAUSE");	
  return 0;
}
