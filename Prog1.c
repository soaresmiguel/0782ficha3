#include <stdio.h>

int main (void) {
    float fahrenheit;
  float converter; 
    printf("introduza os graus que quer converter em fahrenheit \n"); // output 
    scanf(" %f", &fahrenheit); //  input 

   
   converter = (fahrenheit - 32) / 1.8; // Esta é conta  para converter fahrenheit para celcius //
   printf("convertido em celcius %2.f", converter); //  Aqui ira mostrar  os graus fahrenheit em celcius //
}