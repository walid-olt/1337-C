#include <assert.h>
void ft_div_mod(int a, int b, int *div, int *mod) {
  *div = a / b;
  *mod = a % b;
}

int main(void) {

  int div;
  int mod;
  ft_div_mod(10, 5, &div, &mod);

  assert(div == 2 && mod == 0);

  return 0;
}
