#include <stdio.h>

int main () {

   char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
      char grt[6] =  "Hello";

   printf("Greeting message: %s\n", greeting );
      printf("Greeting message: %s\n", grt );

   return 0;
}
