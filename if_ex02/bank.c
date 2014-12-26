#include "brightcode.h"

void	bank(int age, int money)
{
  if (age < 18 || money < 1000)
    bc_write_string("You can't enter the bank.\n");
  else if (age > 70 && money > 100000)
    bc_write_string("Make a placement...\n");
  else if (money >= 100000)
    bc_write_string("WELCOME, HAVE A SIT !\n");
  else if (money >= 10000)
    bc_write_string("Welcome.\n");
  else
    bc_write_string("You can enter the bank.\n");
}
