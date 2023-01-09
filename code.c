#include <stdio.h>

int main()
{
  int x, y, z;
  int F;

  printf("Enter the values of x, y, and z: ");
  scanf("%d %d %d", &x, &y, &z);

  F = (!x && !y && !z) || (!x && y && z);

  printf("Output: %d", F);

  return 0;
}

