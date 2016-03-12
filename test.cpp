#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

using namespace std;

int main() {

   char text[] = "Hey JSLab";
   int digit;
   for (digit = 0; digit < 1000; ++digit)
   {
      sleep(1);
      text[6] = digit + '0';
      puts(text);
   }
   return 0;
}