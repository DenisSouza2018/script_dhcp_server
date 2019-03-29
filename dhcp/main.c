/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: denis
 *
 * Created on 29 de Março de 2019, 12:59
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

  FILE *arq,*arq1;
  char Linha[100];
  char *result,*result1;
  int i;
  char  linha[100],p2[100],p3[100];
  int cont=0;
  // Abre um arquivo TEXTO para LEITURA
  arq = fopen("dhcp.txt", "rt");
  
  arq1 = fopen("dhcpFormatado.txt", "wt");  // Cria um arquivo texto para gravação
  
  
  if (arq == NULL && arq1 == NULL)  // Se houve erro na abertura
  {
     printf("Problemas na abertura do arquivo\n");
     return;
  }
  i = 1;
  
  
  while (!feof(arq) && !feof(arq1))
  {
	// Lê uma linha (inclusive com o '\n')
      result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
      cont++;
      
  //    if(cont % 2 == 0){
    //    scanf(arq,"%s %s %s \n", linha,p2,p3); 
      //  printf("%s %s %s \n", linha,p2,p3);
      //}else{
       // fscanf(arq,"%s %s %s \n", linha,p2,p3); 
        //printf("%s %s %s \n", linha,p2,p3);
     // }
      
      
      if (result)  // Se foi possível ler
	  printf(" %s ",linha);
      
      result1 = fprintf(arq1," %s",Linha);
      //fprintf(arq1," \n");
      
      
      
      if (result1 == EOF)		    
	  printf("Erro na Gravacao\n");
      
      i++;
  }
  
   
  
  
  fclose(arq);
  
  
  fclose(arq1);


   
    
    
    
    
    return (EXIT_SUCCESS);
}

