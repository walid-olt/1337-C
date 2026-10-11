
#include <assert.h>
char *ft_strcpy(char *dest, char *src) {
  /* found this snippet in the musl C lib implementation,
   * ts is so peak 😭😭😭😭😭
   */
  for (; (*dest = *src); dest++, src++) {
  }
  return dest;
}

int main(void) {
  char dest[5];
  char src[] = "test";

  ft_strcpy(dest, src);

  assert(src[0] == dest[0]);

  return 0;
}
