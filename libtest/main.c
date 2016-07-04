/* first file */

#include <stdio.h>

int i; /* definition */
main() {
   void f_in_other_place (void);  /* declaration */
   i=0;
   printf("%s%i\n", "The value of i is ", i);
   f_in_other_place();
   printf("%s%i\n", "The value of i is ", i);
}
/* end of first file */
