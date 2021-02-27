#include<stdio.h>
#include<string>
#include<iostream>
#include<cmath>
using namespace std;

main()
{
	int aluno=1, cont=1, cont1=0, cont2=0, cont3=0;
	float nota, media, maiorn, menorn=999, atotal, median, mediam;
	cout<<"---PROGRAMA DE AFERICAO DE NOTAS---\n"<<endl;
	cout<<"Digite a quantidade de alunos: ";
	cin>>aluno;
	cout<<"\n";
	
	while (cont<=aluno)
	{
		cont++;
		cout<<"Digite a nota do aluno: ";
		cin>>nota;
		
		atotal=atotal+nota;
		media=atotal/aluno;
	 if(nota<menorn)
	 {
	 	menorn=nota;
	 }
	 if(nota>maiorn)
	 {
	 	maiorn=nota;
	 }
	 if(nota>60)
	 {
	 	cont1++;
	 	mediam=mediam+nota;
	 }
	 if(nota<60)
	 {
	 	cont2++;
	 	median=median+nota;
	 }
	 if(nota==60)
	 {
	 	cont3++;
	 }
		}
		
	
	

	cout<<"\n";
	cout<<"A maior nota foi: "<< maiorn<<endl;
	cout<<"A menor nota foi:"<<menorn<<endl;
	cout<<"A media geral foi: "<<media<<endl;
	cout<<"Tivemos "<<cont1<< " notas maiores que 60"<<endl;
	cout<<"Tivemos "<<cont2<< " notas menores que 60"<<endl;
	cout<<"Tivemos "<<cont3<< " notas iguais a 60"<<endl;
	cout<<"A media maior que 60 e: "<<mediam/cont1<<endl;
	cout<<"A media menor que 60 e: "<<median/cont2<<endl;
	
	}
