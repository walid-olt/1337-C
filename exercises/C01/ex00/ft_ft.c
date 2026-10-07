#include <unistd.h>
void ft_ft(int *nbr) { *nbr = 42; };

int main(void) {
  int n = 41;
  ft_ft(&n);
  // as lazy as they come
  write(1, n == 42 ? "0" : "1", 1);
  return 0;
}
