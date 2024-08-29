#include <stdio.h>
#include <locale.h>

#define N 9

//Nível 3: Algoritmos Avançados (31-50)

//Ordenação por Insertion Sort: Implemente o algoritmo de ordenação Insertion Sort.

	  void insertionSort (int *lista , int tamanho){
	  	int j, aux, i;
	  	 
	  	 for(i=0; i<tamanho-1; i++){
	  	 	if(lista[i] > lista[i+1]){
	  	 		aux = lista[i+1];
	  	 		lista[i+1]=lista[i]; lista[i]=aux;
	  	 		j = i-1;
	  	 		while(j>=0){
	  	 			if(aux< lista[j]){
	  	 				lista[j+1] = lista[j]; lista[j] = aux;	
					   }else{
					   	 break;
					   }
					   j=j-1;
				   }
	  	 		
			   }
		   }
	  }
	  	  

int main() {
	setlocale(LC_ALL, "");
	
     int lista [N] = {2,3,9,6,1,4,5,8,7};
     
    
     	int k;
     	 
     	 printf("Insertion Sort\n\n");
     	 printf("Lista original: ");
     	  for (k = 0; k < N ; k++) 
		   		   printf ("%d ", lista[k] );
     	   insertionSort(lista, N);
     	 printf("\nLista ordenada: ");   	   	   
	 for (k = 0; k < N; k++)
        printf("%d ", lista[k]);
    
    printf("\n");

    return 0;}
