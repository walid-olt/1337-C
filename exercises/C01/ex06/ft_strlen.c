#include <assert.h>
int ft_strlen(char *str) {
  /*
   * Among the many pillars of C philosophy is to "Trust the programmer",
   * so, while it makes sense to do some basic checks like checking for
   * NULL pointers, this breaks the contract that the original function
   * adheres to, therefor it's the caller's job to make sure to pass
   * the function a valid pointer
   */
  int len = 0;
  while (*str != '\0') {
    str++;
    len++;
  };
  return len;
}

int main(void) {
  assert(ft_strlen("abc") == 3);
  assert(sizeof("abc") == 4);
  return 0;
}
