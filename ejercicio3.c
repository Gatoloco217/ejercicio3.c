/*Axel Miranda Quiroz
Ejercicio 3 clase
Calcular promedio*/

#include <stdio.h>
int main()
{  //inicio

   //Declarar variables
   float a, b, c, d, s, p;

   //Leer las calificaciones
   printf("Dame la primera calificacion : ");
   scanf("%f", &a);
   printf("Dame la segunda calificacion : ");
   scanf("%f", &c);
   printf("Dame la tercera calificacion : ");
   scanf("%f", &c);
   printf("Dame la cuarta calificacion : ");
   scanf("%f", &d);

   //Calcular la suma y el promedio
   s = a + b + c + d;
   p = s/4;
   //Imprimir promedio
  printf( "el promedio es de %f. \n",p);

  //fin
  return 0;
}
