#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
setlocale (LC_ALL, "Portuguese");

int opcao;
	printf ("1- Calcular \n2- Sair\n\n");
	scanf ("%d", &opcao);

    float preco, novoPreco;
    printf("Digite o preço do produto: ");
    scanf("%f", &preco);
    
    if (preco < 100) {
        novoPreco = preco * 1.1; // Inflaciona em 10%
    } 
	
	else {
        novoPreco = preco * 1.2; // Inflaciona em 20%
    }
    
    printf("O novo preço é: %.2f\n", novoPreco);
    
switch(opcao){
  	
	 case 0:
	 	
			printf ("Saindo...\n");
			break; 
			
	case 1:
		   printf("Calculo: preco * 1.1\n" );
		   printf("Calculo: preco * 1.2\n" );
		   break;
		
	}
    
    return 0;
}

