#include <stdio.h>
#include <stdlib.h>
#define SIZE 5   
// �� �������� ��ũ�η� �����ϴ� ��. �л� ����� �ٲ� ���� SIZE ���� 5�� �ٸ� ���ڷ� �ٲٸ� �ǹǷ� ����  

int main(int argc, char *argv[])
{
  //SIZE���� �л��� ���� ���� ���� ���� �迭 ���� 
  int score[SIZE];   
  int i;         // ������ ����ϱ� ���� ���� ����    
  int avg;
  int sum=0;   //������ ���� ������ ������ �ʱ�ȭ ������� �Ѵ�. ���ؼ� ����� ��� 1234567�� ����.  
  
  for(i=0;i<SIZE;i++) {
  printf("�л� ������ �Է��ϼ���: ");
  scanf("%d", &score[i]);
  sum += score[i];
}
  
  avg = sum/SIZE;
  printf("���� ���: %d\n", avg); 

  system("PAUSE");	
  return 0;
}
