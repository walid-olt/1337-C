#include <unistd.h>
void ft_ultimate_ft(int *********nbr) { *********nbr = 42; };

int main(void) {
  int n = 41;

  int *p1 = &n;
  int **p2 = &p1;
  int ***p3 = &p2;
  int ****p4 = &p3;
  int *****p5 = &p4;
  int ******p6 = &p5;
  int *******p7 = &p6;
  int ********p8 = &p7;
  int *********nptr = &p8;
  ft_ultimate_ft(nptr);
  write(1, n == 42 ? "0" : "1", 1);
  return 0;
}
