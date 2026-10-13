#include <assert.h>
#define IS_LOWERCASE_CHAR(c) ((c) >= 'a' && (c) <= 'z')

int ft_str_is_lowercase(char *str) {
  while (*str) {
    if (!IS_LOWERCASE_CHAR(*str)) {
      return 0;
    }
    str++;
  }
  return 1;
}

int main(void) {
  assert(ft_str_is_lowercase("") == 1);
  assert(ft_str_is_lowercase("abc") == 1);
  assert(ft_str_is_lowercase("abC") == 0);
  assert(ft_str_is_lowercase("abc1") == 0);
  return 0;
}
