#include<stdlib.h>
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<string>
#include<conio.h>




// Declaração da função gotoxy

#include <windows.h>
void gotoxy(int col, int lin)
	{
     	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){col-1,lin-1});
	}

// Procedimento para limpar uma linha a partir do cursor, até a coluna 80

void clreol(int col,int lin)
	{
		int col1;
		if ((lin > 0 && lin < 25) && (col > 0 && col < 81))
			for (col1 = col; col1 <= 80; ++ col1)
				{
					gotoxy(col1,lin); 	puts(" ");
				}
	}

void quadrado();
void meio();
void meio1();
void meio2();


int main()

{
	//setlocale (LC_ALL, "Portuguese");
	
	const float taxa_diaria=0.33, multa=0.1;
	float valor_aluguel,valor1, valor2,valor3, valor_final, total;
	char devolvido, sair;
	int dias_atraso;
	int opcao;
	
do{
	
	system("cls");
	quadrado();
	meio();
	gotoxy(8,2);
	printf("Calculadora de juros",181);
	gotoxy(8,4);
	printf("Digite opcao desejada");
	gotoxy(9,6);
	printf("1 - Calcular juros");
	gotoxy(9,7);
	printf("2 - Sair");
		gotoxy(12,8);
		printf("%c%c%c%c%c",196,196,196,196,180);
		gotoxy(18,8);
		printf("%c%c%c%c%c",195,196,196,196,196);
		gotoxy(17,8);
		printf("");
	fflush(stdin);
	scanf("%d",&opcao);
	

switch(opcao){

case 1:{
	
//do{

	system("cls");
	quadrado();
	meio();
	gotoxy(7,2);
	printf("C%cLCULO VALOR ALUGUEL",181);
	gotoxy(5,4);
	printf("Digite o valor do aluguel");
	gotoxy(10,6);
	printf("Valor do aluguel");
	gotoxy(7,7);
		printf("%c%c%c%c%c",196,196,196,196,180);
		gotoxy(23,7);
		printf("%c%c%c%c%c",195,196,196,196,196);
		gotoxy(13,7);
		printf("R$ ");
	fflush(stdin);
	scanf("%f",&valor_aluguel);
	
//do{
	system("cls");
	quadrado();
	meio();
	gotoxy(7,2);
	printf("C%cLCULO VALOR ALUGUEL",181);
	gotoxy(5,4);
	printf("Digite os dias de atraso");
	gotoxy(5,5);
	printf("Dias de atraso");
	gotoxy(11,7);
		printf("%c%c%c%c%c",196,196,196,196,180);
		gotoxy(19,7);
		printf("%c%c%c%c%c",195,196,196,196,196);
		gotoxy(17,7);
	fflush(stdin);
	scanf("%d",&dias_atraso);

	if(dias_atraso >= 11){
		
		
		system("cls");
		system("color 4F");
		quadrado();
		meio1();
		gotoxy(4,3);
		printf("DIAS DE ATRASO ULTRAPASSADO",233);
		gotoxy(5,5);
		printf("VERIFICAR VALOR NO HIPER");
		gotoxy(4,7);
		printf("Dias de atraso digitado: %d", dias_atraso);
		gotoxy(4,9);	
		printf("Valor do aluguel: R$ %.2f", valor_aluguel);
		
		system("color 4F");
		gotoxy(1,11);
						system("pause");
			system("color 7");
	system("cls");	
		
			//tipo_login();		
				
						}
	
	system("cls");
	
	
//	}while(dias_atraso >=11);

	do{
	
		system("cls");
		quadrado();
		meio();
		gotoxy(7,2);
		printf("C%cLCULO VALOR ALUGUEL",181);
		gotoxy(6,4);
		printf("O produto foi devolvido?");
		gotoxy(6,6);
		printf("SIM -> S <===> N%cO -> N",199);
		gotoxy(11,9);
		printf("%c%c%c%c%c",196,196,196,196,180);
		gotoxy(19,9);
		printf("%c%c%c%c%c",195,196,196,196,196);
		gotoxy(17,9);
		
		fflush(stdin);
		scanf("%c", &devolvido);
	
		devolvido = toupper(devolvido);
		
	
	if( devolvido == 'S'){
	
	
	valor1 = (valor_aluguel/30)*dias_atraso;
	valor2 = ((taxa_diaria*dias_atraso)*valor_aluguel)/100;
	valor3 = valor_aluguel*multa;
	
	valor_final = valor2+valor3;
	
	total = valor1+valor_final;
	
	system("cls");
		quadrado();
		meio();
		gotoxy(7,2);
		printf("C%cLCULO VALOR ALUGUEL",181);
		gotoxy(7,5);
		printf("JUROS E MULTA POR DIA");
		gotoxy(10,6);
		printf("Valor: R$ %.2f", valor_final);
		gotoxy(8,8);
		printf("TOTAL %c SER COBRADO",183);
		gotoxy(10,9);
		printf("Valor: R$ %.2f", total);
	gotoxy(1,11);
		system("pause");
	}
	else if(devolvido == 'N'){
		
	valor2=((taxa_diaria*dias_atraso)*valor_aluguel)/100;
	valor3 = valor_aluguel*multa;
	
	valor_final = valor2+valor3;
	
	total = valor_final+valor_aluguel;
	
	system("cls");
	
	quadrado();
		meio();
		gotoxy(7,2);
		printf("C%cLCULO VALOR ALUGUEL",181);
		gotoxy(7,5);
		printf("JUROS E MULTA POR DIA");
		gotoxy(10,6);
		printf("Valor: R$ %.2f", valor_final);
		gotoxy(8,8);
		printf("TOTAL %c SER COBRADO",183);
		gotoxy(10,9);
		printf("Valor: R$ %.2f", total);
		gotoxy(1,11);
		system("pause");
	
	}
	/*
	gotoxy(1,11);
	
	system("pause");
	system("cls");
	
	quadrado();
		meio1();
		
		gotoxy(7,2);
		printf("Deseja calcular novamente?");
		gotoxy(6,6);
		printf("SIM -> S <===> N%cO -> N",199);
		gotoxy(11,8);
		printf("%c%c%c%c%c",196,196,196,196,180);
		gotoxy(19,8);
		printf("%c%c%c%c%c",195,196,196,196,196);
		gotoxy(17,8);
	fflush(stdin);
	scanf("%c", &sair);
	sair=toupper(sair);

	}while(sair != 'N');
*/	
	
}while(devolvido != 'S' && devolvido != 'N');
	break;
}
	
	case 2:{
		
		system("cls");
	
	quadrado();
		meio2();
		gotoxy(6,4);
		printf("PROGRAMA FOI ENCERRADO!");
		gotoxy(1,11);
		break;
	}
	default:{
		
		system("cls");
	
	quadrado();
		meio2();
		gotoxy(10,4);
		printf("OP%c%cO INV%cLIDA",128, 199, 181);
		gotoxy(1,11);
		break;
	}

}
	
}while(opcao != 2);
return 0;

}


void quadrado(){

system("mode con:cols=45 lines=20");
system("color 71");

		
	//parte de cima
gotoxy(1,1);
	printf("%c",201);
	for(int i=0 ; i <= 30 ; i++)
		{
		printf("%c",205);
		}
	printf("%c",187);
	
	//parte de baixo
gotoxy(1,10);
	printf("%c",200);
	for(int i=0 ; i <= 30 ; i++)
		{
		printf("%c",205);
		}
	printf("%c",188);
	
	// lado esquerdo
gotoxy(1,2);
	for(int i=2 ; i <= 9 ;i++)
		{
		printf("%c\n",186);
		}
		
	// lado direito
gotoxy(33,2);
			printf("%c\n",186);
gotoxy(33,3);
			printf("%c\n",186);
gotoxy(33,4);
			printf("%c\n",186);
gotoxy(33,5);
			printf("%c\n",186);
gotoxy(33,6);
			printf("%c\n",186);
gotoxy(33,7);
			printf("%c\n",186);
gotoxy(33,8);
			printf("%c\n",186);
gotoxy(33,9);
			printf("%c\n",186);
}

void meio(){
	
	gotoxy(7,2);
	for(int i=0; i<=21; i++){
		printf(" ");
	}
	gotoxy(4,3);
	printf("%c",195);
	gotoxy(30,3);
	printf("%c",180);
	gotoxy(5,3);
	for(int i=5; i<=29; i++){
		printf("%c",196);
	}
	gotoxy(5,4);
	for(int i=0; i<=25; i++){
		printf(" ");
	}
	gotoxy(5,5);
	printf("                     ");
	
}

void meio1(){
	
	gotoxy(7,2);
	for(int i=0; i<=21; i++){
		printf(" ");
	}
	gotoxy(4,3);
	gotoxy(5,4);
	for(int i=0; i<=25; i++){
		printf(" ");
	}
	gotoxy(5,5);
	printf("                     ");
	
}
void meio2(){
	
	gotoxy(4,5);
	printf("%c",195);
	gotoxy(30,5);
	printf("%c",180);
	gotoxy(5,5);
	for(int i=5; i<=29; i++){
		printf("%c",196);
	}
	
	
}
