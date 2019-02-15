#include <stdio.h>
#include <fcntl.h>
#include <zconf.h>
#include <stdlib.h>

static void vc_putstr(char *str)
{
  while (*str)
    write(1, str++, 1);
}

static void	add_hex(char **str, unsigned char c)
{
  char *p = *str;
  while (*p++) ;
  if ((c / 16) > 9) {
    *p = (char)((c / 16) - 10 + 'a');
    p++;
  } else {
    *p = (char)((c / 16) + '0');
    p++;
  }
  if ((c & 0xf) > 9) {
    *p = (char)((c & 0xf) - 10 + 'a');
    p++;
  } else {
    *p = (char)((c & 0xf) + '0');
    p++;
  }
  *p = '\0';
}

static void	print_addr(unsigned int offset)
{
  char *addr = (char *) malloc(sizeof(char) * 10);
  add_hex(&addr, (offset >> 24) & 0xff);
  add_hex(&addr, (offset >> 16) & 0xff);
  add_hex(&addr, (offset >> 8) & 0xff);
  add_hex(&addr, offset & 0xff);
  vc_putstr(addr);
  free(addr);
}

static char *vc_strrev(char *str)
{
  int i;
  int j;
  int len;
  char tmp;

  len = 0;
  while (str[++len])
    ;
  for (i = 0, j = len - 1; i < j; i++, j--)
  {
    tmp = str[i];
    str[i] = str[j];
    str[j] = tmp;
  }
  return str;
}

static int vc_atoi(char *str)
{
  int result;
  int sign;

  result = 0;
  sign = 1;
  if (*str == '-')
  {
    sign = -1;
    str++;
  }
  for (; *str != '\0'; str++)
  {
    if (*str < '0' || *str > '9')
      return 0;
    result = result * 10 + *str - '0';
  }
  return sign * result;
}

static size_t vc_strlen(char *str)
{
  size_t i;

  i = 0;
  while (*str++ != '\0')
    i++;
  return i;
}

static size_t vc_power(size_t nbr, int power)
{
  if (power == 0)
    return 1;
  if (power < 0)
    return 0;
  return nbr * vc_power(nbr, power - 1);
}

static char *decimal_to_base(int nbr, char *base_to)
{
  int base;
  int tmp;
  int len;
  int i;
  char *result;

  tmp = nbr;
  len = 0;
  base = vc_atoi(base_to);
  while (tmp)
  {
    tmp /= base;
    len++;
  }
  if (!(result = (char *)malloc(sizeof(len) + 1)))
    return NULL;
  i = 0;
  while (len--)
  {
    result[i++] = (nbr % base) + '0';
    nbr /= base;
  }
  result[i] = '\0';
  return vc_strrev(result);
}

int main(int argc, char *argv[]) {

  char *path = argv[1];

  int file = open(path, O_RDONLY);
  if (file == -1) return 1;

  char body[512 + 1];
  int bytes = read(file, body, 512);
  if (bytes == -1) return 1;

  print_addr(0);
  print_addr(16);

//  char *p = body;
//  int index = 0;
//  while (1) {
//    vc_putstr("00000000");
//    vc_putstr(" ");
//    for (int i = 0; i < 16; i++, p++) {
//      vc_putstr(decimal_to_base(*p, "16"));
//      vc_putstr(" ");
//      if (!*p) break;
//    }
//    vc_putstr("\n");
////    printf("%s\n", decimal_to_base(*p, "16"));
//    if (!*p) break;
//  }




  int result = close(file);
  if (result == -1) return 1;

  return 0;
}