#include <unistd.h>
#define BUFFSIZE 8

void ft_putstr(char *str) {
  /*
   * let's get fancy a little bit
   * so, apparently, raw syscalls like write hand the data immediately
   * to the OS which triggers a switch from user mode to kernel mode, that
   * requires some extra work from the CPU and some other shenanigans.
   * and because of that extra work, stdio functions usually maintain a
   * temporary buffer to reduce the number for of raw syscalls and
   * align read/write sizes with what the OS is already optimized for
   */
  char buf[BUFFSIZE];
  int buf_idx = 0;
  while (*str != '\0') {
    buf[buf_idx] = *str;
    buf_idx++;
    str++;
    if (buf_idx == BUFFSIZE) {
      write(1, buf, BUFFSIZE);
      buf_idx = 0;
    }
  }
  if (buf_idx > 0) {
    write(1, buf, buf_idx);
  }
}

int main(void) {
  // only one 2 writes instead of 13 🤯
  ft_putstr("hello, world!");
  return 0;
}
