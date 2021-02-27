#include<stdio.h>
#include<stdlib.h>

typedef struct agendaSemanal
{
	char nome[50];
	char sobrenome[50];
	int dia;
	int hora, minuto;
}agenda;

int main()
{
	
	int n, i;
	agenda *p;
	
	printf("---PROGRAMA PARA AGENDAMENTO DE CLIENTE---\n");
	printf("\n");
	printf("DIGITE QUANTOS AGEDAMENTOS SERAO FEITOS: ");
	scanf("%d", &n);
	if(n<=0)
	{
		printf("NUMERO INVALIDO, FAVOR DIGITAR NOVAMENTE.\n\n");
		main();
	}
	p = (agendaSemanal*)malloc(n*sizeof(agendaSemanal)); //Aqui criei um ponteiro para alocar a memoria do vetor
	if(p==NULL)
	{
		return 0;
	}
	for(i=0;i<n;i++)
	{
		printf("DIGITE O NOME DO PACIENTE %d: ", i+1);
		scanf("%s", &p[i].nome);
		printf("DIGITE O SOBRENOME: ");
		scanf("%s", &p[i].sobrenome);
		do{
		printf("DIGITE QUAL DIA DESEJA REALIZAR A CONSULTA: \n1-SEGUNDA-FEIRA\n2-TERCA-FEIRA\n3-QUARTA-FEIRA\n4-QUINTA-FEIRA\n5-SEXTA-FEIRA\n6-SABADO\n7-DOMINGO\n");
		scanf("%d", &p[i].dia);
		if(p[i].dia==6 || p[i].dia==7 || p[i].dia<=0){ //Como não sei trabalhar muito bem com strings preferi colocar os dias como int memso, para o usuario definir o dia com um numero
			printf("---NAO E POSSIVEL AGENDAR PARA FINAL DE SEMANA, ESCOLHA NOVAMENTE.---\n");
		}
		}while(p[i].dia==6||p[i].dia==7 || p[i].dia<=0);
		
		do{ //Coloquei um tratamento de erro para caso digite uma hora invalida ou caso digite um dia que não esteja na lista, para ficar repetindo.
		
		printf("DIGITE A HORA DO AGENDAMENTO: ");
		scanf("%d", &p[i].hora);
		if(p[i].hora<9 || p[i].hora>18)
		{
			printf("---NAO E POSSIVEL AGENDAR PARA ESSE HORARIO.---\n       ---ESCOLHA UM NOVO HORARIO.---\n");
		}
		}while(p[i].hora<9 || p[i].hora>18);
		
		do{
	
		printf("DIGITE A QUE MINUTO: ");
		scanf("%d", &p[i].minuto);
		printf("\n");
		if(p[i].minuto>=60 || p[i].hora<0)
		{
			printf("---MINUTO INVALIDO, DIGITE NOVAMENTE.---\n");
		}
		}while(p[i].minuto>=60 || p[i].hora<0);
		
		system("cls");  //Pesquisei como limpar a tela para printar apenas o resultado, achei mais bonito esteticamente.
		
	}
	for(i=0;i<n;i++)
	{
		printf("\n");
		printf("---AGENDAMENTO MARCADO COM SUCESSO---\n");
		printf("NOME DO PACIENTE: %s %s\n", p[i].nome, p[i].sobrenome);
		if(p[i].dia==1)
		{
			printf("DIA: SEGUNDA-FEIRA\n");
		}else if(p[i].dia==2){
			printf("DIA: TERCA-FEIRA\n");
		}else if(p[i].dia==3){
			printf("DIA: QUARTA-FEIRA\n");
		}else if(p[i].dia==4){
			printf("DIA: QUINTA-FEIRA\n");
		}else if(p[i].dia==5){
			printf("DIA: SEXTA-FEIRA\n");
		}
		
		printf("HORA: %d:%dhr\n", p[i].hora, p[i].minuto);
	}
	free(p);
	
	
	
	return 0;
}
