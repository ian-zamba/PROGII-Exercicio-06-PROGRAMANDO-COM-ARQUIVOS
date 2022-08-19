#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void) {
    
    FILE *entrada;
    FILE *saida;
    int primeiro, segundo, terceiro;

    entrada = fopen("infile.txt", "r");
    saida = fopen("outfile.txt", "w");

        fscanf(entrada, "%d %d %d", &primeiro, &segundo, &terceiro);
        fprintf(saida, "A soma dos primeiros \n");
        fprintf(saida, "3 número em \n");
        fprintf(saida, "infile.txt é %d", (primeiro + segundo + terceiro));

    fclose(saida);
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