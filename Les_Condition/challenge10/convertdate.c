#include <stdio.h>

int main(int argc, char const *argv[])

//12 dyal ch7al man fasila kayna 
//20 dyal ch7al man character kayn wasst fassila
{
    char days[12][20]= {"janvier", "février", "mars", "avril", "mai", "juin", "juillet", "aout", "septembre", "octobre", "novembre", "décembre"};

 
    int d,m,y;

//sscanf

    printf("Entrer le jour : \n");
    scanf("%d",&d);

    printf("Entrer le moi : \n");
    scanf("%d",&m);

    printf("Entrer la annee : \n");
    scanf("%d",&y);

    switch(m){
        case 1:
            printf( "%d-%s-%d",d ,days[0],d);
            break;
        case 2:
            printf( "%d-%s-%d",d ,days[1],d);
            break;
        case 3:
            printf( "%d-%s-%d",d ,days[2],d);
            break;
        case 4:
            printf( "%d-%s-%d",d ,days[3],d);
            break;
        case 5:
            printf( "%d-%s-%d",d ,days[4],d);
            break;
        case 6:
            printf( "%d-%s-%d",d ,days[5],d);
            break;
        case 7:
            printf( "%d-%s-%d",d ,days[6],d);
            break;
        case 8:
            printf( "%d-%s-%d",d ,days[7],d);
            break;
        case 9:
            printf( "%d-%s-%d",d ,days[8],d);
            break;
        case 10:
            printf( "%d-%s-%d",d ,days[9],d);
            break;
        case 11:
            printf( "%d-%s-%d",d ,days[10],d);
            break;
        case 12:
            printf( "%d-%s-%d",d ,days[11],d);
            break;
        default:
            printf("invalide moins");
    }

    return 0;
}
