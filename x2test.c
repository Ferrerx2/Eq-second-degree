#include<stdio.h>
#include<math.h>

int main ()  {
     float res, r, rn;
     int a, d ,c ,b;
     char opt;

do {
     printf("\033[36m===================================================================================\033[0m\n");
     printf("                                   EQ SEGUNDO GRADO                                  \n");
     printf("\033[36m===================================================================================\033[0m\n");
     printf("**Si la equacion que quiere resolver no tiene el coeficiente b introduzcalo como 0**\n");
     printf("introducelos coeficiontes a, b y c de la equacion:\n");
          scanf("%d %d %d", &a, &b, &c);

     if(a == 0){
          printf("no es una equacion de segundo grado\n");
          return 0;
     }
     else if ( c == 0)
     {
          r = 0;
          rn = -((float)b / a);

          printf("los resultados son: X1 = %2.2f y X2 = %2.2f \n", r, rn);
          printf("-----------------------------------------------------------\n");
          printf("Quiere resolver otra ecuacion? [y/n]: ");
          scanf("%s", &opt);

     }
     else if ( a != 0 && b != 0 && c != 0)
     {
          d = b*b - 4*a*c;
          d = sqrt(d);
          r = (-b + d) / (2*a);
          rn = (-b - d) / (2*a);
          
          if (r == rn)
          {
               printf("el resultado es: %2.2f     \n", r);
               printf("-----------------------------------------------------------\n");
               printf("Quiere resolver otra ecuacion? [y/n]: ");
               scanf("%s", &opt);
               continue;
          }

          printf("los resultados son: X1 = %2.2f y X2 = %2.2f \n", rn, r);
          printf("-----------------------------------------------------------\n");

          printf("Quiere resolver otra ecuacion? [y/n]: ");
          scanf("%s", &opt);
     }   
     else if( b == 0)
     {
          c = -c;
          res =sqrt(c/a);
          printf(" el resultado es: %2.f\n",res);
          printf("-----------------------------------------------------------\n");
          printf("Quiere resolver otra ecuacion? [y/n]: ");
          scanf("%s", &opt);

     }
          printf("\n\n");
} while (opt == 'y');

     return 0;

}