#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 5

int main()
{


    int numeros[TAM];
    int i, aux, contador;

    printf("Entre com dez numéros para preencher o array, e pressione enter apos cada um:\n");
    for(i=0; i< TAM; i++){
        scanf("%d", &numeros[i]);
    }
    printf("------->    ordem atual dos itens no array:    <-------\n");
    for(i=0; i< TAM; i++){
        printf("%4d", numeros[i]);
    }

    //Algoritmo de ordenação booblesort
    for(contador = 1; contador< TAM; contador++){
        for(i = 0; i < TAM; i++){
            if(numeros[i] > numeros[i+1]){
                aux= numeros[i];
                numeros[i] = numeros[i + 1];
                numeros[i + 1] = aux;
            }
        }
    }
    printf("\n\n\n------->    Elementos do array em ordem crecente:    <------- \n");

    for(i=0; i< TAM; i++){
        printf("%4d", numeros[i]);
    }
    printf("\n");

    return 0;
}
