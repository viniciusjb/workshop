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
#include "Funcoes.h"

double Integral_Simples(double a, double b, int n, int op){
	double I=0, h, x;
	int i;
	
	h = (b - a)/n;
	x = a;
	for(i = 0; i < n; i++){
    	I = I + funcao_x(x, op) + funcao_x(x+h, op);
    	x = x + h;
	}
	I = I * h / 2;

	printf("\nResultado da Integral Simples: %.10lf", I);
}

double Integral_Dupla(double a, double b, double c, double d, int n, int m, int op){
	
	double x, y, h, l, p1=0, p2=0, I, s1=0, s2=0, s3=0, s4=0;
	int i, j, t; 

	h = ((b-a)/n);
	l = ((d-c)/m);

	for(t=1; t<m; t++){
		y = y + l;	
		s1 = s1 + funcao_xy(a, y, op);
		s2 = s2 + funcao_xy(b, y, op);
	}
	for(t=1; t<n; t++){
		x = x + h;	
		s3 = s3 + funcao_xy(x, c, op);
		s4 = s4 + funcao_xy(x, d, op);
	}
	p1 = 2*(s1+s2+s3+s4);
	x=a;
	y=c;
	
	for(i=1; i<m; i++){
		x =x +h;
		for(j=1; j<n; j++){
			y = y+l;	
			p2 = p2 + funcao_xy(x, y, op);
		}
		y= c;
	}
	p2 = 4 * p2;
	I = ((h*l)/4)*(funcao_xy(a, c, op)+funcao_xy(a, d, op)+funcao_xy(b, c, op)+funcao_xy(b, d, op) + p1 + p2);
	
	printf("Resultado da Integral Dupla: %.10lf \n", I);
}
