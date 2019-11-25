/*
	Este programa foi feito por:
	ANDERSON DOS ANJOS DE ARAUJO;
	ELIAS GUIMARAES MIRANDA BARBOSA DA SILVA;
	GABRIEL ROCHA BARRETO;
	LUCAS BORGES RIBEIRO;
	VINICIUS JOSE DO BOMFIM SILVA.
*/

#include<stdio.h>
#include<math.h>

float funcao_x(float x, int op){
	float f;
	switch(op){
		case 1:
			f = sin(x);
			return(f);
			break;
		case 2:
			f = 1/x;
			return(f);			
			break;
		case 3:
			f = exp(x);
			return(f);
			break;
		case 4:
			f = sqrt(1+7*x);
			return(f);
			break;
		case 5:
			//adicionar funções para testar...
			break;								
	}
}

float funcao_xy(float x, float y, int op){
	float f;
	switch(op){
		case 1:
			f = sin(x+y);
			return(f);
			break;
		case 2:
			f = 1/(x+y);
			return(f);			
			break;
		case 3:
			f = (x*x)/(1+y*y);
			return(f);
			break;
		case 4:
			//adicionar funções para testar...
			break;								
	}
}
