// García Plácido Bryan Gerardo		24500585		05/09/18

#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>

int main(){
	FILE *archivo;
	
	archivo= fopen("prueba.txt", "r");
	
	if(archivo==NULL){
		printf("Archivo no encontrado\n");
	} else{
		printf("Archivo encontrado\n");
		fclose(archivo);
	}
	
	system("pause");
	
	return 0;
	
}

