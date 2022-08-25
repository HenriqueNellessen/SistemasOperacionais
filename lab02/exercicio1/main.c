/*LABORATÓRIO 02
SISTEMAS OPERACIONAIS
DATA: 23/08/2022
EXERCÍCIO 1
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

  int main(void) {
  FILE *entrada1;
  entrada1 = fopen ("arquivo_1.txt", "r"); // "r" = read // (Chamadado 1 ao SO)
    
  if (entrada1 == NULL) { //Verificação caso nao encontre o arquivo (Chamadado 2 ao SO)
      printf ("\nArquivo não encontrado!\n"); // (Chamadado 3 ao SO)
      exit (EXIT_FAILURE); //Status de erro 
   }
    char conteudo;
    while ((conteudo=fgetc(entrada1))!=EOF) { //EOF = End Of File --> Le o arquivo ate o final // (Chamadado 4 ao SO)
      printf("%c", conteudo);
    }
    fclose(entrada1); //Fecha arquivo // (Chamadado 5 ao SO)
    //Ao total foram realizadas 5 chamadas ao SO
}
