#include <stdio.h>
void printuwu(int &a)
{
    printf("%d", a);
}
int main()
{
    int x = 5;
    int &y = x;
    printuwu(x);
}