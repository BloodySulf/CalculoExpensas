#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

float calculoexpensas (char, int, char );
void mostrar ( int );

int main(){
	int numdep, usoprof;
	int contadordep = 0;
	char cat, cochera, resp;
	float monto, multa;
	char continuar [3] = {"si"};
	
	while (!strcmp("si",continuar)){
		printf("Ingrese numero del departamento: \n");
		fflush(stdin);
		scanf("%d",&numdep);
		printf("Categoria del departamento: \n");
		fflush(stdin);
		scanf(" %c",&cat);
		printf("Es de uso profesional? 1=Si 0=No: \n");
		fflush(stdin);
		scanf("%d",&usoprof);
		printf("Tiene cochera? S/N: \n");
		fflush(stdin);
		scanf(" %c",&cochera);
		printf("Tiene multas? S/N: \n");
		fflush(stdin);
		scanf(" %c",&resp);
		
		if (resp=='s'){
			printf("Ingrese cantidad de la multa: \n");
			fflush(stdin);
			scanf("%f",&multa);
		}
		else{multa = 0;}
		
		monto=calculoexpensas(cat, usoprof, cochera) + multa;
		
		printf("El monto total es de: %f \n", monto);
		
		if (cat=='d' && usoprof==1){contadordep=contadordep+1;}

	system("pause");
	system("cls");
	printf("Desea seguir ingresando datos?:\n");
	fflush(stdin);
	gets(continuar);
	system("cls");
	}
	mostrar (contadordep);
	system("pause");
}

float calculoexpensas(char a, int b, char c){
	float resul;
	switch (a){
		case 'p': resul = 4000;
		break;
		case 's': resul = 3000;
		break;
		case 'd': resul = 2000;
		break;
		case 'm': resul = 1000;
	}
	if (b==1){resul=resul + 2500;}
	if (c=='s'){resul=resul + 1500;}
	return resul;
}
void mostrar (int a){
	printf("La cantidad de departamentos dos ambientes de uso profesional: %d \n", a);
}
