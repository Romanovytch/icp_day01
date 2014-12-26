#include "brightcode.h"

void	star_pyramid(unsigned int nb)
{
  int	tmp;
  int	tmp2;
  int	a;
  int	z;
  int	i;
  
  if (nb == 0)
    bc_write_char('\n');
  else
    {
      tmp2 = 2;
      z = 1;
      tmp = (nb * 2) - 1;
      while (tmp2 != 0)
	{
	  i = 0;
	  tmp2 = (tmp - z) / 2;
	  a = tmp - (tmp - z);
	  while (i != tmp2)
	    {
	      bc_write_char(' ');
	      i = i + 1;
	    }
	  i = 0;
	  while (i < a)
	    {
	      bc_write_char('*');
	      i = i + 1;
	    }
	  bc_write_char('\n');
	  z = z + 2;
	}
    }
}
