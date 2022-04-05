#include <stdio.h>
int main()
{
    int x, y;
    
    printf("Enter cartesian coordinates: \n");
    scanf("%d%d", &x, &y);
    
    if (x > 0 && y > 0)
      printf("Point is in First Quadrant");
    else if (x < 0 && y > 0)
      printf("Point is in Second Quadrant");
    else if (x < 0 && y < 0)
      printf("Point is in Third Quadrant");
    else if (x > 0 && y < 0)
      printf("Point is in Fourth Quadrant");
}