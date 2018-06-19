#include <stdio.h>
/**
 * Escreva uma função que encontra a primeira letra que não se repete em uma
 * sentença.
 * Função: char firstNonRepeatingChar(char[] sentence, int length)
 * Input:
 * - sentence: array não nulo de letras, formado apenas por ASCII em minúsculo.
 * - length: tamanho do array - número de caracteres
 * Output: A primeira letra que não se repete, ou -1, caso todas se repitam.
 */

#include <stdio.h>

char firstNonRepeatingChar (char sentence[], int length)
{
    printf("\nfirstNonRepeatingChar::START: %s, %d\n", s, length);
    
       int isRepeating; //variável para verificar se a letra é diferente das outras
   
   for(int i = 0; i < length ; i++){
       
       isRepeating = 0;
       
       for(int j = 0; j < length ; j++){
           if (i != j){
               if(sentence[i] == sentence[j]){
                   isRepeating = 1; // Se i = j, quer dizer que tem outra letra igual na palavra/frase
               } 
           } 
       }
     
       if (isRepeating==0) {
           printf("%c", sentence[i]);
           printf("\nfirstNonRepeatingChar::END\n");
           return sentence[i];
       }
       
   }
   
   printf("\nfirstNonRepeatingChar::END\n");
   printf("-1");
   return -1;
   
}
    
    printf("\nfirstNonRepeatingChar::END\n");
    return -1;
}

int main()
{
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: firstNonRepeatingChar ###\n");
    
    firstNonRepeatingChar("ovo", 3);
    firstNonRepeatingChar("cesar school", 12);
    firstNonRepeatingChar("sistemas digitais", 17);
    
    return 0;
}
