/*LABORATÓRIO 02
SISTEMAS OPERACIONAIS
DATA: 23/08/2022
EXERICICO 2
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  FILE *entrada1, *entrada2; 
  entrada1 = fopen ("arquivo_1.txt", "r"); // "r" = read --> Le o arquivo_1 // (Chamadado 1 ao SO)
  entrada2 = fopen ("arquivo_2.txt", "w"); // "w" = write --> Escreve no arquivo_2 // (Chamadado 2 ao SO)
  
  if (entrada1 == NULL) { //Verificação, caso nao encontre o arquivo // (Chamadado 3 ao SO)
      printf ("\nArquivo não encontrado!\n");
      exit (EXIT_FAILURE); // Erro // (Chamadado 4 ao SO)
   }
    char conteudo;
    while ((conteudo=fgetc(entrada1))!=EOF) { //Lê cada caracter do arquivo ate o fim || EOF = End Of File // (Chamadado 5 ao SO)
      fputc(conteudo, entrada2);  //Armazena o conteudo do arquivo_1 no arquivo_2 // (Chamadado 6 ao SO)
      printf("%c", conteudo); //Imprime o conteudo do arquivo 2 (local onde foi copiado)
    }
    fclose(entrada1);  //Fechando o arquivo 1 // (Chamadado 7 ao SO)
    fclose(entrada2);  //Fechando o arquivo 2 // (Chamadado 8 ao SO)

  //Foram realizadas 8 chamadas ao SO
}

