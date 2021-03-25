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

 	printf("PROGRAMA PARA REGISTRO DE SERVIÇOS OU PRODUTOS\n\n");
 	printf("----------------------Regras do programa-------------------------\n\n");
 	printf("1-O primeiro passo é fazer os cadastros dos produtos/serviços ou produtos.\n");
 	printf("2-O usúario irá definir quantos produtos/serviços serão cadastrados.\n");
 	printf("3-Após fazer o cadastro dos produtos/serviços, o usúario poderá pesquisar os dados cadastrados.\n");
 	printf("\n");
 	printf("Digite qualquer número para iniciar o programa, em seguida pressione 'Enter'");
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
            printf("Digite o codigo do produto/serviço: ");
            scanf(" %d", &p[i].cod);
            printf("Digite o preço do %d° produto/serviço R$ ", j++);
            scanf(" %f", &p[i].preco);
            system("cls");
        }

    system("cls");
    do{

	
	do {
	printf("\nDigite o codigo do serviço que deseja encontrar: ");
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
        printf("\nServiço não encontrado!!!!\nTente novamente.\n");
    }
	}while(position == -1);
    
    	if(re==1){
		system("cls");
		
		printf("\nDescrição-------------%s", p[position].nome);
        printf("\nCódigo------------- %d", p[position].cod);
        printf("\nPreço-------------- R$ %.2f", p[position].preco);
        printf("\n\n");
        }
        do{
		
		printf("Deseja encontrar outro serviço?\n1-SIM\t\t2-NÃO\n");
        scanf("%d", &re);
        if(re>3 || re<1){
        	printf("Opção invalida, favor digitar novamente.\n");
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
