
#include<stdio.h>
int main ()
{
    int taka;
    scanf ("%d",&taka);
    if (taka>=1000)
    {
        printf ("I Will Eat Pizza");
    }
    else if ( taka>=500)
    {
        printf ("I Will Eat Burger");
    }
    else
    {
        printf ("I Won't Eat Anything");
    }
    return 0;
}
