#include <stdio.h>
#include <stdlib.h>

int foo(int (*wsk1)(int), int (*wsk2)(int), unsigned int n;)
{
    for (int i=0; i<n; i++)
    {
        if(wsk1==wsk2)
        {
            return 1;
        }
    }
    return 0;
}

int pom1(int x);

int main()
{
    printf("Hello world!\n");
    return 0;
}
