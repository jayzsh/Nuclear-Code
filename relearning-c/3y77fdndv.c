#include <stdio.h>
void printuwu(int *a)
{
    printf("%d", *a);
}
int main()
{
    int x = 3;
    printuwu(&x);
}