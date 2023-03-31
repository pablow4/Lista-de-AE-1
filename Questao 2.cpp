#include <stdio.h>

int main() {
   float raio, area;
   const float pi = 3.14159;

   printf("Digite o raio do circulo: ");
   scanf("%f", &raio);

   area = pi * raio * raio;

   printf("A area do circulo de raio %.2f eh %.2f.\n", raio, area);

   return 0;
}
