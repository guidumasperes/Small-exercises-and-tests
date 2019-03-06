#include <stdio.h>
#include <stdlib.h>
#include <math.h> 


 int main (int argc, char* argv[]) {
   float a, b, c, delta, raiz_unica, raiz_dist1, raiz_dist2, raiz_quad;
     printf("Digite os coeficientes da equaçao do segundo grau: ");
     scanf("%f %f %f", &a, &b, &c);
     delta = b * b - 4 * a * c;
       if (delta < 0) {
	 printf("As raizes sao imaginarias, e portanto nao e possivel calcula-las no conjunto dos reais\n");
       } else if (delta == 0) {
	 raiz_unica = -b / 2 * a;
	 printf("A equaçao possui raiz unica e seu valor e: %f\n", raiz_unica);
       } else if (delta > 0) {
	 raiz_quad = sqrt(delta);
	 raiz_dist1 = -b + raiz_quad / 2 * a;
	 raiz_dist2 = -b - raiz_quad / 2 * a;
	 printf("A equaçao possui raizes distintas e seus valores sao: %f %f\n", raiz_dist1, raiz_dist2);
       } 
       return 0;
} 
       
   
   
