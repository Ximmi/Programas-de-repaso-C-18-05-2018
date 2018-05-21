#include <stdio.h>

void pago(int s);
void miles(int m);
void cientos(int c);
void imprimircien(int c);
void decenas(int d);
void imprimird(int d);
void pesitos(int p);
int main(){

	int sal;
	printf("Por favor ingrese su salario");
	scanf("%d", &sal);
	pago(sal);
	
return 0;
}

void pago(int s){
	
	miles(s/1000);
	s=s%1000;
	cientos(s/100);
	s=s%100;
	decenas(s/10);
	if(s%10!=0){
	    puts("\n y ");
	    pesitos(s%10);
	   }
}

void miles(int m){

	int mil=m, quin=2*m, dosc=5*m, cien=10*m, cinc=20*m, veint=50*m, diez=100*m, cinco=200*m, dos=500*m, uno=1000*m;

	if(m){
		printf("\tSe pueden pagar $%d000 con:\n\n", m);
		printf("%d billetes de mil\n", mil);
		printf("%d billetes de quinientos\n", quin);
		printf("%d billetes de doscientos\n", dosc);
		printf("%d billetes de cien\n", cien);
		printf("%d billetes de cincuenta\n", cinc);
		printf("%d billetes de veinte\n", veint);
		printf("%d monedas de diez\n", diez);
		printf("%d monedas de cinco\n", cinco);
		printf("%d monedas de dos\n", dos);
		printf("%d monedas de un peso\n", uno);
		printf("-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n");
	}
}

void cientos(int c){

	printf("\tSe pueden pagar $%d00 con:\n\n", c);
	
		switch(c){
			case 1:
				imprimircien(c);
				printf("-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n");
			break;
			case 2:
				imprimircien(c);
				printf("\n O un billete de doscientos\n");
				printf("-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n");
			break;
			case 3:
				imprimircien(c);
				printf("\n O un billete de doscientos con:\n");
				imprimircien(1);
				printf("-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n");
			break;
			case 4:
				imprimircien(c);
				printf("\n O dos billetes de doscientos\n");
				printf("-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n");
			break;	
			case 5:
				imprimircien(c);
				printf("\n O un billete de quinientos\n");
				printf("\n O dos billetes de doscientos con: \n");
				imprimircien(1);
				printf("-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n");
			break;
			case 6:
				imprimircien(c);
				printf("\n O un billete de quinientos con:\n");
				imprimircien(1);
				printf("\n O un billete de doscientos con:\n");
				imprimircien(4);
				printf("\n O dos billetes de doscientos con:\n");
				imprimircien(2);
				printf("\n O tres billetes de doscientos\n");
				printf("-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n");
			break;	
			case 7:
			  	imprimircien(c);
				printf("\n O un billete de quinientos con\n");
				printf("\n Un billete de doscientos\n O\n");
				imprimircien(2);
				printf("....................................\n");
				printf("\n O un billete de doscientos con\n");
				imprimircien(5);
				printf("....................................\n");	
				printf("\n O dos billetes de doscientos con\n");
				imprimircien(3);
				printf("....................................\n");
				printf("\nO tres billetes de doscientos con: \n");
				imprimircien(1);
				printf("-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n");
			break;
			case 8:
			  	imprimircien(c);
				printf("\n O un billete de quinientos con:\n\n");
				printf("Un billete de doscientos \n y \n");
				imprimircien(1);
				printf("\n O \n");
				imprimircien(3);
				printf("....................................\n");
				printf("\n O cuatro billetes de doscientos\n");
				printf("\n O tres billetes de doscientos con:\n");
				imprimircien(2);
				printf("\n O dos billetes de doscientos con:\n");
				imprimircien(4);
				printf("\n O un billete de doscientos con:\n");
				imprimircien(6);
				printf("-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n");
			break;  
			case 9:
				imprimircien(c);
				printf("\n O un billete de quinientos con:\n\n");
				printf("Dos billetes de doscientos\nO\n");
				printf("Un billete de doscientos \n y \n");
				imprimircien(2);
				printf("\n O \n");
				imprimircien(4);
				printf("....................................\n");
				printf("\n O cuatro billetes de doscientos con:\n");
				imprimircien(1);
				printf("\n O tres billetes de doscientos con:\n");
				imprimircien(3);
				printf("\n O dos billetes de doscientos con:\n");
				imprimircien(5);
				printf("\n O un billete de doscientos con:\n");
				imprimircien(7);
				printf("-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n");
			break; 
		}

}

void imprimircien(int c){
		
		int cien=1, cinc=2, veint=5, diez=10, cinco=20, dos=50, uno=100;
		
		printf("%d billetes de cien\n", cien*c);
		printf("%d billetes de cincuenta\n", cinc*c);
		printf("%d billetes de veinte\n", veint*c);
		printf("%d monedas de diez\n", diez*c);
		printf("%d monedas de cinco\n", cinco*c);
		printf("%d monedas de dos\n", dos*c);
		printf("%d monedas de un peso\n", uno*c);
}

void decenas(int d){

	printf("\tSe pueden pagar $%d0 con:\n\n", d);
	
	switch(d){
		case 1:
			imprimird(d);
			printf("-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n");
		break;
		case 2:
			printf("Un billete de veinte\n");
			imprimird(d);
			printf("-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n");
		break;
		case 3:
			imprimird(d);
			printf("\n O un billete de veinte y\n");
			imprimird(1);
			printf("-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n");
		break;
		case 4:
			imprimird(d);
			printf("\n O dos billetes de veinte\n");
			printf("-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n");
		break;
		case 5:
				imprimird(d);
				printf("\n O un billete de cincuenta\n");
				printf("\n O dos billetes de veinte con: \n");
				imprimird(1);
				printf("-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n");
			break;
			case 6:
				imprimird(d);
				printf("\n O un billete de cincuenta con:\n");
				imprimird(1);
				printf("\n O un billete de veinte con:\n");
				imprimird(4);
				printf("\n O dos billetes de veinte con:\n");
				imprimird(2);
				printf("\n O tres billetes de veinte\n");
				printf("-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n");
			break;	
			case 7:
			  	imprimird(d);
				printf("\n O un billete de cincuenta con:\n");
				printf("\n Un billete de veinte\n O\n");
				imprimird(2);
				printf("....................................\n");
				printf("\n O un billete de veinte con\n");
				imprimird(5);
				printf("....................................\n");
				printf("\n O dos billetes de veinte con\n");
				imprimird(3);
				printf("....................................\n");
				printf("\n O tres billetes de veinte con: \n");
				imprimird(1);
				printf("-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n");
			break;
			case 8:
			  	imprimird(d);
				printf("\n O un billete de cincuenta con:\n\n");
				printf("Un billete de veinte \n y \n");
				imprimird(1);
				printf("\n O \n");
				imprimird(3);
				printf("....................................\n");
				printf("\n O cuatro billetes de veinte\n");
				printf("\n O tres billetes de veinte con:\n");
				imprimird(2);
				printf("\n O dos billetes de veinte con:\n");
				imprimird(4);
				printf("\n O un billete de veinte con:\n");
				imprimird(6);
				printf("-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n");
			break;  
			case 9:
				imprimird(d);
				printf("\n O un billete de cincuenta con:\n\n");
				printf("Dos billetes de veinte\nO\n");
				printf("Un billete de doscientos \n y \n");
				imprimird(2);
				printf("\n O \n");
				imprimird(4);
				printf("....................................\n");
				printf("\n O cuatro billetes de veinte con:\n");
				imprimird(1);
				printf("\n O tres billetes de veinte con:\n");
				imprimird(3);
				printf("\n O dos billetes de veinte con:\n");
				imprimird(5);
				printf("\n O un billete de veinte con:\n");
				imprimird(7);
				printf("-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n");
			break; 
			
				
	}

}

void imprimird(int d){

	int  diez=1, cinco=2, dos=5, uno=1;

		printf("%d monedas de diez\n", diez*d);
		printf("%d monedas de cinco\n", cinco*d);
		printf("%d monedas de dos\n", dos*d);
		printf("%d monedas de un peso\n", uno*d);
}

void pesitos(int p){
	 int cinco=5*p, dos=2*p, uno=1*p;

	if(p){
		printf("%d monedas de cinco\n", cinco);
		printf("%d monedas de dos\n", dos);
		printf("%d monedas de un peso\n", uno);
		printf("-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n");
	}
}

