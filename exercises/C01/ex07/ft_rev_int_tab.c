#include <assert.h>
void ft_rev_int_tab(int *tab, int size) {
  int l = 0;
  int r = size - 1;
  int tmp;
  while (!(l >= r)) {

    tmp = tab[l];

    tab[l] = tab[r];
    tab[r] = tmp;

    l++;
    r--;
  }
}

int main(void) {
  int n[] = {1, 2, 3, 4, 5};

  int size = (sizeof(n) / sizeof(int));

  ft_rev_int_tab(n, size);

  assert(n[0] == 5 && n[size - 1] == 1);

  return 0;
}
