//You need to take a integer A, very big integer B,  a floating value C and a character D as input and output them serially.
#include<stdio.h>
int main()
{
  int A;
  long long int B;
  double C;
  char D;
  scanf ("%d %lld %lf %c", &A, &B, &C, &D);
  printf ("%d\n%lld\n%0.2lf\n%c", A,B,C,D);
    return 0;
}
