#include  <stdio.h>

int main(){
  int a, b, c;
  int max, min, mid;
  scanf("%d %d %d", &a, &b, &c);
    
  max = (a > b) ? a : b; // ���׿����� ���� ? ��1 : ��2
  max = (max > c) ? max : c;

  min = (a < b) ? a : b;
  min = (min < c) ? min : c;
  
  mid = a + b + c - max - min;
    
  printf("%d %d %d", min, mid, max);

  return 0;
}
