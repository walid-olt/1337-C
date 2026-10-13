#include <assert.h>
int ft_str_is_numeric(char *str) {
  if (!(*str))
    return 1;

  while (*str) {
    if (!(*str >= '0' && *str <= '9'))
      return 0;
    str++;
  }
  return 1;
}

int main(void) {
  assert(ft_str_is_numeric("") == 1);
  assert(ft_str_is_numeric("12a") == 0);

  assert(ft_str_is_numeric("123") == 1);
  return 0;
}
