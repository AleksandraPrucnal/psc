#include <stdio.h>
#include <stdlib.h>

double foo(double (*wsk)(int), int x)
{
    return wsk(x);
}

double pom(int arg)
{
    return (double)(arg+3);
}

int main()
{
    printf("%lf\n", foo(pom, 5));
    double (*wsk)(int);
    return 0;
}
