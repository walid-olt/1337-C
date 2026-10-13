#include <assert.h>
#define IN_RANGE(v, min, max) ((v) >= (min) && (v) <= (max))
int ft_str_is_alpha(char *str) {
  if (!(*str))
    return 1;

  while (*str) {
    if (!IN_RANGE(*str, 'a', 'z') && !IN_RANGE(*str, 'A', 'Z')) {
      return 0;
    }
    str++;
  }
  return 1;
};

int main(void) {
  assert(ft_str_is_alpha("abc") == 1);
  assert(ft_str_is_alpha("abc1") == 0);
  assert(ft_str_is_alpha("ABc") == 1);
  assert(ft_str_is_alpha("") == 1);
  return 0;
}
