#include <stdio.h> 
int main()
{
   printf("/%e/\n", 1234.56); 
   printf("/%4.f/\n", 1234.56); 
   printf("/%3.1f/\n", 1234.56); 
   printf("/%-10.3f/\n", 1234.56); 
   printf("/%10.3f/\n", 1234.56); 
   printf("/%10.3e/\n", 1234.56); 
   return 0;
}
