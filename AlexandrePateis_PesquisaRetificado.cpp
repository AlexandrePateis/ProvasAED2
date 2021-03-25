#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct servicos
{
    char nome[128];
    int cod;
    float preco;
    
}prestacoes;


int main()
{
	
	setlocale(LC_ALL, "Portuguese");
    int qtd, i=0, opc=0, j, key, position, re=1, q;
    prestacoes *p;

 	printf("PROGRAMA PARA REGISTRO DE SERVI�OS OU PRODUTOS\n\n");
 	printf("----------------------Regras do programa-------------------------\n\n");
 	printf("1-O primeiro passo � fazer os cadastros dos produtos/servi�os ou produtos.\n");
 	printf("2-O us�ario ir� definir quantos produtos/servi�os ser�o cadastrados.\n");
 	printf("3-Ap�s fazer o cadastro dos produtos/servi�os, o us�ario poder� pesquisar os dados cadastrados.\n");
 	printf("\n");
 	printf("Digite qualquer n�mero para iniciar o programa, em seguida pressione 'Enter'");
 	scanf("%d", &q);
 	system("cls");
 	if(q!=6516165165){
	
  
   
   
    printf("\nDigite quantos servicos serao cadastrados: ");
    scanf(" %d", &qtd);
    system("cls");
    p = (prestacoes*) malloc(qtd*sizeof(prestacoes));

    
    
        for(i=0;i<qtd;i++)
        {    
            printf("Digite o nome do produto/servico: ");
            getchar();
            gets(p[i].nome);
            printf("Digite o codigo do produto/servi�o: ");
            scanf(" %d", &p[i].cod);
            printf("Digite o pre�o do %d� produto/servi�o R$ ", j++);
            scanf(" %f", &p[i].preco);
            system("cls");
        }

    system("cls");
    do{

	
	do {
	printf("\nDigite o codigo do servi�o que deseja encontrar: ");
    scanf(" %d", &key);
    position = -1;
     
	for(i=0; i < qtd; i++)
    {
        if(p[i].cod == key)
        {
            position = i;
        }
    }
    
	if(position == -1)
    {
        printf("\nServi�o n�o encontrado!!!!\nTente novamente.\n");
    }
	}while(position == -1);
    
    	if(re==1){
		system("cls");
		
		printf("\nDescri��o-------------%s", p[position].nome);
        printf("\nC�digo------------- %d", p[position].cod);
        printf("\nPre�o-------------- R$ %.2f", p[position].preco);
        printf("\n\n");
        }
        do{
		
		printf("Deseja encontrar outro servi�o?\n1-SIM\t\t2-N�O\n");
        scanf("%d", &re);
        if(re>3 || re<1){
        	printf("Op��o invalida, favor digitar novamente.\n");
		}
		else if(re==2){
			system("cls");
			printf("Obrigado por utilizar esse programa :) \n");
			return 0;
		}
        }while(re>3 || re<1);
        system("cls");
    
        
	}while(position == -1 || re==1);
	}
    return 0;
}
