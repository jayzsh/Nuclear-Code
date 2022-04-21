#include <stdio.h>
int main()
{
    int d;
    printf("Enter the distance travelled: Rs \n");
    scanf("%d", &d);
    
    int fare = 0;
    if (d <= 10)
      fare = 80;
    else if (d <= 20)
      fare = 6 * d;
    else if (d <= 30)
      fare = 5 * d;
    else
      fare = 4 * d;
    
    printf("Total fare due: Rs %d", fare);
}