#include<unistd.h>
#include<stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int    i;
    int tmp;

    i = 0;

    while (i < size - 1)
    {
        if (tab[i] > tab[ i + 1])
        {
            tmp = tab[i];
            tab[i] = tab [i + 1];
            tab[i + 1] = tmp;
        }
        else
            i++;
    }
}

int main(void)
{
    int tab[5];

    tab[0] = 4;
    tab[1] = 1;
    tab[2] = 3;
    tab[3] = 5;
    tab[4] = 46;

    sort_int_tab(tab, 5);
    
    printf("%d\n" , tab[0]);
    printf("%d\n" , tab[1]);
    printf("%d\n" , tab[2]);
    printf("%d\n" , tab[3]);
    printf("%d\n" , tab[4]);
}