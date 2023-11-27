#include <stdio.h>
#include <string.h>

//#include "ex00/ft_strdup.c"
#include "ex01/ft_range.c"
#include "ex02/ft_ultimate_range.c"
#include "ex03/ft_strjoin.c"


int main(void)
{
  //  char source[] = "castiel";
    //printf("%s",ft_strdup(source));

   //int a = 10;
    //int b = 10;
    //int *buffer;
    //int i = 0;

    //buffer = ft_range(a,b);
    
/*
    while(i < b - a)
    {
        printf("%d ,", buffer[i]);
        i++;
    }
*/

/*
    buffer = ft_range(a,b);

    while(i < b - a)
    {
        printf("%d ,", buffer[i]);
        i++;
    }

    */
   // ex02
/*
   int *range;
    int size;

    size = ft_ultimate_range(&range, a, b);
    printf("%d ", size);
    if (size == -1)
    {
        printf("Error allocating memory for range\n");
        return (1);
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", range[i]);
    }

    free(range);

    
    */
    
    char *tab[3];
    tab[0] = "Castiel";
    tab[1] = "the";
    tab[2] = "Angel";
    printf("%s",ft_strjoin(3,tab,"**"));

}

