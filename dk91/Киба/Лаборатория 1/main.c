#include <stdio.h>
#include <stdlib.h>

#include "Silka.h"// � �������� �� ����

int main(int argc, char * argv[]) { //������ ��������
  int A, B, C, Q;
  printf("((A*2+B*2)/(B+5^C))+B!\nEnter the numbers in the following order: A, B, C\nOnly numbers greater than zero are entered\n");
  goback: // ��� ����������� ������ � �������� ������� goto ����� ������������

    while (scanf("%d %d %d", & A, & B, & C) == 0) { // ��� ���� ��������� �� ����� �� �������� ����� � �������� �������� ���� ������� ��������
      printf("Only numbers greater than zero are entered\n");
      fflush(stdin); // ������� ���������� �������� ���������� ���� � ��������� ��� �� ������� ���
    }
  if (A <= 0 || B <= 0 || C <= 0) { // ���������� �������� ��� ������� ��� �������� ������ ���� ������ 0
    goto goback; // ������� ��� �������� ���� � ������ ��� � ������ goback
  } else {


    Q = sum (A, B , C);

    printf("((%d*2+%d*2)/(%d+5^%d))+%d!=%d", A, B, B, C, B, Q);
  }
  return 1;
}


