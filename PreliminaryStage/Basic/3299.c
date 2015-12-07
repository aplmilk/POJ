#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float humidex,T,D,e,h;
    char a,b;
    float result[10],data[10][2];
    int sum = 0 , i = 0;
    scanf("%c",&a);
    while( a != 'E' )
    {
        scanf("%f %c %f",&T,&b,&D);
        fflush(stdin);
        e = 6.11 * exp(5417.7530 * ((1/273.16) - (1/(D+273.16))));
        h = (0.5555) * (e - 10.0);
        humidex = T +h;
        result[sum] = humidex;
        data[sum][0] = T;
        data[sum][1] = D;
        sum++;
        scanf("%c",&a);
        if (a == 'E')
        {
            break;
        }
    }
    for(;i<sum;i++)
    {
        printf("T %.1f D %.1f H %.1f\n",data[i][0],data[i][1],result[i]);
    }


    return 0;
}
