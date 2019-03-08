#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

typedef struct Agenda
{
        char nome[50];
        char fone[17];
        
}T_agenda;

void Listar(void);
void qs_struct(int,int);

static int qtd = 0;

T_agenda Tab[11];
FILE *fp;

void inclusao(void){
     int total = 0, retorno;
     char op = 's';
if ((fp = fopen("agenda.db", "a")) == NULL){
     printf ("O arquivo da lista não pode ser aberto!\n");
     printf ("Insira dados!\n");
     getch();
     exit(1);
     {
        printf ("O arquivo da lista não pode ser aberto!\n");
        printf ("Insira dados!\n");
        getch();
        exit(1);
     }
     while ((total < 100) && (op == 's'))
     {
     	printf ("Digite o numero: ");
           gets(Tab[total].fone);
           printf ("Digite o numero: ");
         
  	 }
  	 
  }
  	 
  		getch();
  	 
