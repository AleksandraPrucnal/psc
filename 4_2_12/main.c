#include <stdio.h>
#include <stdlib.h>

void wyswietlTablice(int n, int *tab)
{
    for(int i=0;i<n;i++)
    {
        printf("[%d]=%d\n", i, *(tab+i));
    }
    printf("--\n");
}

void fooa(int n, int *tab)
{
    for(int i=0; i<(n/2);i++)
    {
        int temp= *(tab+i);
        *(tab+i) = *(tab +n-1-i);
        *(tab +n-1-i) = temp;
    }
}

void foob(int n, int *tab)
{
    int temp=*tab;
    for(int i=0; i<n-1;i++)
    {
        *(tab+i)=*(tab+i+1);
    }
    *(tab+n-1)=temp;
}

void fooc(int n, int *tab)
{
    int temp=*(tab+n-1);
    for(int i=n-1; i>0;i--)
    {
        *(tab+i)=*(tab+i-1);
    }
    *tab=temp;
}

void food(int n, int *tab)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(*(tab+j)>*(tab+j+1))
            {
                int temp=*(tab+j+1);
                *(tab+j+1)=*(tab+j);
                *(tab+j)=temp;
            }
        }
    }
}

void fooe(int n, int *tab)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(*(tab+j)<*(tab+j+1))
            {
                int temp=*(tab+j+1);
                *(tab+j+1)=*(tab+j);
                *(tab+j)=temp;
            }
        }
    }
}

int main()
{
    int *tab = malloc(5*sizeof(int));
    *tab=3;
    *(tab+1)=-4;
    *(tab+2)=7;
    *(tab+3)=8;
    *(tab+4)=-9;
    fooa(5,tab);
    wyswietlTablice(5,tab);
    foob(5,tab);
    wyswietlTablice(5,tab);
    fooc(5,tab);
    wyswietlTablice(5,tab);
    food(5,tab);
    wyswietlTablice(5,tab);
    fooe(5,tab);
    wyswietlTablice(5,tab);

    return 0;
}
