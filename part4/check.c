#include "check.h"

int func(int i)
{
  int count = 0;
  int j;
  for (j = 2; j<= ceil(sqrt( (float) i)) ; j++)
  {
    
    if(i%j == 0)
      return 0;
  }
  return 1;
}
