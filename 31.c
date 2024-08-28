#include <stdio.h>
#include <locale.h>

//Nível 3: Algoritmos Avançados (31-50)

//Ordenação por Bubble Sort: Implemente o algoritmo de ordenação Bubble Sort.

int main() {
	setlocale(LC_ALL, "");
	 
	 int i, aux, flag;
	 int lista[10];
	 
	  for(i = 0; i < 10; i++){
	  	printf ("Item %d: ", i+1);
	  	 scanf ("%d", &lista[i]);
	  }
	  
	  flag = 1;
	  while (flag){
	  	flag = 0;
	  	for (i = 0; i <= 8; i++){
	  		if (lista[i] > lista[i+1]){
	  			aux = lista [i];
	  			lista[i] = lista [i+1];
	  			lista[i+1] = aux;
	  			flag = 1;
	  			
	  			
			  }
		  }
	  }
       
       for (i = 0; i < 10; i++){
       	printf ("\nItem %d: %d", i+1, lista[i]);
	   }
	 
    return 0;
}
