#include <stdio.h>

float totalExp (float  , float  ,float  ,float  ,float , float );
int main()
{
    float onion=12;
    float tomato=34;
    float potato=3.4f;
    float peas=4.5f;
    float ginger=3.5;
    float garlic=5.7;

    printf ("Onion per kg Rs 120: \n");
    scanf ("%f", &onion);
    printf ("Tomato per kg Rs 80: \n");
    scanf ("%f", &tomato);
    printf ("Potato per kg Rs 100: \n");
    scanf ("%f", &potato);
    printf ("Peas per kg Rs 90: \n");
    scanf ("%f", &peas);
    printf ("Ginger per kg Rs 200: \n");
    scanf ("%f", &ginger);
    printf ("Garlic per kg Rs 250: \n");
    scanf ("%f", &garlic);
    totalExp (onion,tomato,potato,peas,ginger,garlic);
    return 0;

}

float totalExp (float onion, float tomato, float potato, float peas, float ginger, float garlic)
{
    float o = 120*onion;
    float t = 80*tomato;
    float p = 100*potato;
    float pe = 90*peas;
    float g = 200*ginger;
    float gar = 250*garlic;
    float total = o+t+p+pe+g+gar;
    printf ("Your total expense is %f .\n Thank you for shopping. \n visit us again.\n",total);

    return (total);
}
