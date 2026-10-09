#include <unistd.h>
void ft_swap(int *a, int *b) {
  int tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
}

int main(void) {

  int a = 7;
  int b = 6;

  ft_swap(&a, &b);

  // 🤪
  char result = (a == 6 && b == 7) ? '0' : '1';

  write(1, &result, 1);
  return 0;
}
