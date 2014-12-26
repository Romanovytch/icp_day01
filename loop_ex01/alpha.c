#include "brightcode.h"

void	disp_alpha()
{
  int	lettre;

  lettre = 97;
  while (lettre <= 122)
    bc_write_char(lettre++);
  bc_write_char('\n');
  lettre = lettre - 1;
  while (lettre >= 97)
    bc_write_char(lettre--);
  bc_write_char('\n');
}
