#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void) {
  
    char next;
    int n = 1;
    FILE *entrada;
    FILE *saida;

    entrada = fopen("story.txt", "r");
    saida = fopen("numstory.txt", "w");

        next = fgetc(entrada);
        fprintf(saida, "%d ", n);

        while (!feof(entrada)){
            fprintf(saida, "%c", next);
            if (next == '\n'){
                n++;
                fprintf(saida, "%d ", n);
            }
            next = fgetc(entrada);
        }    

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