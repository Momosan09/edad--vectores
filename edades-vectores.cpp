#include <stdio.h>

int i, edades[5], n=5, max, menor, acum, prom, cont, porc;

main(){
	
	for(i=0; i < n; i++){
		
		printf("\n  Ingrese edad %d \n  ", i);
		scanf("%d", &edades[i]);
	
	}
	
	for(i=0; i < n; i++){
		
		acum = acum + edades[i];
		prom = acum / n;

		if(edades[i] < 18){
			printf("\n  En la posicion %d hay un menor de 18", i);
		}
		
		if(edades[i] > prom){
			cont= cont +1;

		}

	}
	

		printf("\n  El promedio de edades es %d", prom);
		printf("\n  El porcentaje de mayores al promedio es %d", porc);
		
}
