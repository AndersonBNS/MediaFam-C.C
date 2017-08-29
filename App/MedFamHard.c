#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
		//Variaveis
	char nome[15];
	float notaa, notab, notaf;
	int cnt, sexo;
	
	printf("\t\tCALCULAR MEDIA DA N1 - FAM - CIENCIA DA COMPUTACAO\n\n");
	
			// Primeira interação com usuario
	printf("Digite seu sexo:(1 Masculino) / (0 Feminino)\n");
	scanf("%i", &sexo);
	
	while(sexo > 1) { 
	printf("\n>> Por favor, digite uma resposta valida! <<\n");
	printf("Digite seu sexo:(1 Masculino) / (0 Feminino)\n");
	scanf("%i", &sexo);
	}
	
				//Segunda interação com usuario
	printf("\nDigite seu nome:\n");
	scanf("%s", &nome);
	
	

	if (sexo== 1)
	{
		printf("\nSr. %s >> SEJA BEM VINDO <<\n", nome);
	}
	else
	{
		printf("\nSra. %s >> SEJA BEM VINDA <<\n", nome);
	}
	
				//Terceira interação com usuario
	printf("\nDigite sua nota na P1 - N1\n");
	scanf("\n%f",&notaa);
	
	
				//Quarta Interação com usuario
	printf("\nVoce fez a P2 - N1? ( 1 Sim ) (0 Nao)\n");
	scanf("%i", &cnt);
		
		
		//Fazer repetição ate usuario digitar uma resposta válida
	while(cnt > 1){ 
	printf("\n>> Por favor, digite uma resposta valida! <<\n");
	printf("Voce fez a P2 - N1? ( 1 Sim ) (0 Nao)\n");
	scanf("%i", &cnt);
	}
	
		//Interação onde suario insere a nota da P2 
	if(cnt== 1)
	{
		printf("\nDigite a sua nota da P2-N1\n");
		scanf("%f",&notab);
		
		notaf = (notaa + notab) / 200 * 50;
		
		printf("\n%s, como a N1 tem peso de 50 por cento, sua media e: %.2f\n\n",nome ,notaf);
	}
	
	else
	{
		notaf = notaa / 200 * 50;
		printf("\n%s, como a N1 tem peso de 50 por cento, sua media e: %.2f\n\n",nome ,notaf);
	}
		
		//FIM
		
	system("PAUSE");
	return 0;
}
