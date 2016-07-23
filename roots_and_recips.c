#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main()
{
  double n, v, i ;

  printf("Enter a whole number greater than 1 : ") ;
  scanf("%lf",&n) ;

  v = 0 ;
  i = 2 ;
  while (i <= n) {

    if (fmod(i,2) == 0) {
      v = sqrt(i + v) ;
    } else {
      v = sqrt(1/i + v) ;
    }

    i++ ;
  }


  printf("%lf\n",v) ;
}

