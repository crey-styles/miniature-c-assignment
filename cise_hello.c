#include <stdio.h>

int main(void) 
{
    float fahr, celcius ;
    float upper, step;

    fahr = 300;    /*Name for farenheit with formula 5/9 * (fahrenheit - 32)*/
    step = 20;     
    upper = 0;    /*Loop arguement to be passed*/

    while (upper <= fahr) 
    {
        celcius = 5.0 / 9.0 * (fahr - 32);
        printf("%3.0f \t %6.1f\n", fahr, celcius);  
        fahr -= step;      
    }
}

/*First C assignment */