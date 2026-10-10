#include <assert.h>

void ft_ultimate_div_mod(int *a, int *b) {
  int div = *a / *b;
  int mod = *a % *b;

  *a = div;
  *b = mod;
}

int main(void) {
  int a = 10;
  int b = 5;

  ft_ultimate_div_mod(&a, &b);

  assert(a == 2 && b == 0);
  return 0;
}
