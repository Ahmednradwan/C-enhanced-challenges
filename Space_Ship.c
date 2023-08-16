#include<stdio.h>
#include<stdlib.h>

typedef enum
{
    THRUST_NONE=0,
    THRUST_LOW=5,
    THRUST_MEDIUM=12,
    THRUST_MAXIMUM=20
}Space_ship_thrust;

int main()
{
    printf("SPACE SHIP THRUST CHALLENGE\n\n\n");

    Space_ship_thrust thrust;
    thrust=THRUST_NONE;
    printf("System is ON and we ready to go thrust level is None with value of %d\n\n",thrust);
    thrust=THRUST_MAXIMUM;
    printf("TAKING OFF WITH THRUST LEVEL OF %d \n\n",thrust);
    thrust=THRUST_MEDIUM;
    printf("Entring Iono Sphere WITH THRUST LEVEL OF %d\n\n",thrust);
    thrust=THRUST_LOW;
    printf("Entring Deep Space WITH THRUST LEVEL OF %d\n\n\n",thrust);
    printf("WE WISH YOU LUCKY JOURNY\n");
}