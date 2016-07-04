#include <stdio.h>
#include <stdlib.h>

int test1(int **theints, float **thefloats);

int main()
{
   int i=0;
   int *intsp;
   float *floatsp;

   printf("Value of intsp: %lX\n", intsp);
   printf("Value of floatsp: %lX\n", floatsp);

   test1( &intsp, &floatsp);

   printf("Value of intsp: %lX\n", intsp);
   printf("Value of floatsp: %lX\n", floatsp);

   for(i=0; i<3; i++) printf("%i\n", intsp[i]);
   for(i=0; i<5; i++) printf("%8.2f\n", floatsp[i]);

}

int test1(int **theints, float **thefloats)
{
   int i = 0;

   printf("Value of *theints: %lX\n", *theints);
   printf("Value of *thefloats: %lX\n", *thefloats);

   *theints = (int *) malloc( 3*sizeof(int) );
   *thefloats = (float *) malloc( 5*sizeof(float) );

   for(i=0; i<3; i++) (*theints)[i] = rand();
   for(i=0; i<5; i++) (*thefloats)[i] = ( (float) rand() ) / 100;

   for(i=0; i<3; i++) printf("%i\n", (*theints)[i]);
   for(i=0; i<5; i++) printf("%8.2f\n", (*thefloats)[i]);

   printf("Value of theints: %lX\n", *theints);
   printf("Value of thefloats: %lX\n", *thefloats);
}

