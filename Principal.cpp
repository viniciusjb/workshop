/*
	Este programa foi feito por:
	ANDERSON DOS ANJOS DE ARAUJO;
	ELIAS GUIMARAES MIRANDA BARBOSA DA SILVA;
	GABRIEL ROCHA BARRETO;
	LUCAS BORGES RIBEIRO;
	VINICIUS JOSE DO BOMFIM SILVA.
*/

#include <stdio.h>
#include <math.h>
#include "Metodo.h"

main(){
	int opcao, op, n, m;
	double a, b, c, d;
	printf("***Metodo do Trapezio***\n");
	printf("Digite a opcao que deseja utilizar:\n1-Integral Simples\n2-Integral Dupla\n");
	scanf("%d", &opcao);

	switch(opcao){
		case 1:
			printf("Qual funcao voce deseja calcular a integral?\n");
			printf("1-sin(x)\n2-1/x\n3-e^x\n4-sqrt(1+7x)\n");
			scanf("%d", &op);

    		printf("Digite o limite inferior a:     ");
			scanf("%lf", &a);
			printf("Digite o limite superior b:     ");
			scanf("%lf", &b);
			printf("Digite o n�mero de intervalos:  ");
			scanf("%d", &n);

			printf("\n---------Calculando a Integral Simples----------\n");
			Integral_Simples(a, b, n, op);
			break;

		case 2:
			printf("Qual a funcao que voce deseja calcular a integral dupla?\n");
			printf("1-sin(x+y)\n2-1/(x+y)\n3-x^2/(1+y^2)\n");
			scanf("%d", &op);

			printf("Digite o intervalo inicial [a] em x:   ");
			scanf("%lf", &a);
			printf("Digite o intervalo final [b] em x:     ");
			scanf("%lf", &b);
			printf("Digite o intervalo inicial [c] em y:   ");
			scanf("%lf", &c);
			printf("Digite o intervalo final [d] em y:     ");
			scanf("%lf", &d);
			printf("Digite a quantidade de divisoes em x:  ");
			scanf("%d", &n);
			printf("Digite a quantidade de divisoes em y:  ");
			scanf("%d", &m);

			printf("\n---------Calculando a Integral Dupla----------\n");
			Integral_Dupla(a, b, c, d, n, m, op);
			break;
	}
}
