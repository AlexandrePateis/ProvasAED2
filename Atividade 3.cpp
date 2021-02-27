#include<stdio.h>
main()
{
	int mt, cont=0, mtmaior, mtmenor, cont1=0, cont2=0;
	float nota, maiornota=0, menornota=999, atotal, mediamaior, mediamenor;
	
	printf("PROGRAMA PARA AFERICAO DE NOTAS.\n");
	
	while (cont<3) 
	{
		cont++;
		printf("Digite a matricula do aluno: ");
		scanf("%d", &mt);
		printf("Digite a nota do aluno: ");
		scanf("%f", &nota);
		printf("\n");
		
		if (nota>maiornota)
		{
			maiornota=nota;
			mtmaior=mt;
		}
		if (nota<menornota)
		{
			menornota=nota;
			mtmenor=mt;
		}
		if(nota<60)
		{
			mediamenor=mediamenor+nota;
			cont1++;
		}
		if(nota>60)
		{
			mediamaior=mediamaior+nota;
			cont2++;
		}
		atotal=atotal+nota;
	}
			
			printf("A maior nota foi: %.2f\n", maiornota);
			printf("A menor nota foi: %.2f\n", menornota);
			printf("A media dos menores que 60 foi: %.2f\n", mediamenor/cont1);
			printf("A media dos maiores que 60 foi: %.2f\n", mediamaior/cont2);
			printf("A media geral da turma foi: %.2f\n", atotal/cont);
			
}
