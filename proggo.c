#include <stdio.h>

void centenas(int c);
void umillar(int c);
void numalet(int n);
void decenas(int d);
void unidades(int n);

int main(){

	int n;
	printf("Teclea un numero entre 1 y 9999\n");
	scanf("%d", &n);
	numalet(n);
	
return 0;	
}

void unidades(int n){
	switch(n){
	case 1:
	  puts("uno\n");
	break;
	case 2:
	  puts("dos\n");
	break;
	case 3:
	  puts("tres\n");
	break;
	case 4:
	  puts("cuatro\n");
	break;
	case 5:
	  puts("cinco\n");
	break;
	case 6:
	  puts("seis\n");
	break;
	case 7:
	  puts("siete\n");
	break;
	case 8:
	  puts("ocho\n");
	break;
	case 9:
	  puts("nueve\n");
	break;
	}
}

void decenas(int d){
	switch(d){
	case 1:
	  puts("diez ");
	break;
	case 2:
	  puts("veinte ");
	break;
	case 3:
	  puts("treinta ");
	break;
	case 4:
	  puts("cuarenta ");
	break;
	case 5:
	  puts("cincuenta ");
	break;
	case 6:
	  puts("sesenta ");
	break;
	case 7:
	  puts("setenta ");
	break;
	case 8:
	  puts("ochenta ");
	break;
	case 9:
	  puts("noventa ");
	break;
	}
}

void centenas(int c){
	switch(c){
	case 1:
	  puts("ciento ");
	break;
	case 2:
	  puts("doscientos ");
	break;
	case 3:
	  puts("trescientos ");
	break;
	case 4:
	  puts("cuatrocientos ");
	break;
	case 5:
	  puts("quinientos ");
	break;
	case 6:
	  puts("seiscientos ");
	break;
	case 7:
	  puts("setecientos ");
	break;
	case 8:
	  puts("ochocientos ");
	break;
	case 9:
	  puts("novecientos ");
	break;
	}
}

void umillar(int c){
	switch(c){
	case 1:
	  puts("mil ");
	break;
	case 2:
	  puts("dos mil ");
	break;
	case 3:
	  puts("tres mil ");
	break;
	case 4:
	  puts("cuatro mil ");
	break;
	case 5:
	  puts("cinco mil ");
	break;
	case 6:
	  puts("seis mil ");
	break;
	case 7:
	  puts("siete mil ");
	break;
	case 8:
	  puts("ocho mil ");
	break;
	case 9:
	  puts("nueve mil ");
	break;
	}
}

void numalet(int n){
	umillar(n/1000);
	n=n%1000;
	centenas(n/100);
	n=n%100;
   decenas(n/10);
	   if(n%10!=0){
	    puts("y ");
	    unidades(n%10);
	   }
}
