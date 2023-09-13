#include <stdio.h>


int main(int argc, char const *argv[])
{
    int a,b,c,d,e,f;
    int distance;

    printf("les cordonner de la premier place");
    scanf("%d",&a);
    scanf("%d",&b);

    printf("les cordonner de la dexieme place");
    scanf("%d",&c);
    scanf("%d",&d);

    e=c-a;
    f=d-b;

    distance=sqrt((e*e)+(f*f));


    printf("La distance entre les deux point est: %d",distance);

    return 0;
}
