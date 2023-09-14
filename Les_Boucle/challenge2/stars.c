#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j, h;
    for (i = 0; i < 10; i++)
    {
        for ( j = 0; j <10-i ; j++)
        {
            printf(" ");
        }
        for ( h = 0; h <=i*2 ; h++)
        {
            printf("*");
        }
        
        printf("\n");
        
    }
    
    return 0;
}
