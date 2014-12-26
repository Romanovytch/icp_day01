#include "brightcode.h"

void	age_if(int age)
{
  if (age == 0)
    bc_write_string("Good Joke !\n");
  else if (age == 5)
    bc_write_string("Too Young !\n");
  else if (age == 12)
    bc_write_string("Child !\n");
  else if (age == 16)
    bc_write_string("Teenager !\n");
  else if (age == 18)
    bc_write_string("You're an adult !\n");
  else
    bc_write_char('\n');
}

void	age_case(int age)
{
  switch (age)
    {
    case 0:
      bc_write_string("Good Joke !\n");
      break;
    case 5:
      bc_write_string("Too Young !\n");
      break;
    case 12:
      bc_write_string("Child !\n");
      break;
    case 16:
      bc_write_string("Teenager !\n");
      break;
    case 18:
      bc_write_string("You're an adult !\n");
      break;
    default:
      bc_write_char('\n');
      break;
    }
}
