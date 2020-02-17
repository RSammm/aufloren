#include <stdio.h>

void ft_putchar(char i);

int  main() {
   char i = 'a';
   ft_putchar(i);
   return 0;
}

void ft_putchar(char i) {
   if(i < 'z')
   {
       ft_putchar(i+1);
   }
   printf("%c", i);
}


