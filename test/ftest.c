#include <stdlib.h>

int main(int argc, char *argv[])
{
   long long ll_foo, ll_bar;
   double    d_foo;
  
   ll_foo = 56L;
   d_foo = (double)ll_foo;
   ll_bar = (long long)d_foo;   

   printf("ll_foo = %ld\n",ll_foo);
   printf("ll_bar = %ld\n",ll_bar);
}
