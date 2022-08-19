#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void) {
    
    char *arquivo = "exemploES.txt";
    FILE *saida;
    char c[500];

    saida = fopen (arquivo, "w"); 

        fprintf(saida, "Universidade Federal de Sergipe\n");
        fprintf(saida, "Departamento de Sistema de Informacao");

    fclose(saida);

    FILE *entrada;

    entrada = fopen(arquivo, "r");

        while(!feof(entrada)){
            fgets(c, 500, entrada);
            printf("%s", c);
        }        

    fclose(entrada);

    return 0;
}


/*

                 .eeeeeeeee
                .$$$$$$$$P"
               .$$$$$$$$P
              z$$$$$$$$P
             z$$$$$$$$"
            z$$$$$$$$"
           d$$$$$$$$"
          d$$$$$$$$"
        .d$$$$$$$P
       .$$$$$$$$P
      .$$$$$$$$$.........
     .$$$$$$$$$$$$$$$$$$"
    z$$$$$$$$$$$$$$$$$P"
   -**********$$$$$$$P
             d$$$$$$"
           .d$$$$$$"
          .$$$$$$P"
         z$$$$$$P
        d$$$$$$"
      .d$$$$$$"
     .$$$$$$$"
    z$$$$$$$beeeeee
   d$$$$$$$$$$$$$*
  ^""""""""$$$$$"
          d$$$*
         d$$$"
        d$$*
       d$P"
     .$$"
    .$P"
   .$"
  .P"
 ."
/"

ZAMBA
*/