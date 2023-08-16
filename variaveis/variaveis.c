#include<stdio.h>

main(){

   //Ana Beatriz Cavalcante Amorim 2010024024

    //definir dados de entrada 
    char nome [50];
    int idade;
    char matricula[10];
    char endereco[50];
    char curso [30];
    int periodo;
    char disciplinas[255];

    //receber e armazenar os dados nas variantes
    printf("\nDigite o nome: ");
    fgets(nome,50,stdin);

    printf("\nDigite a idade:");
    scanf("%d" ,&idade);
    fflush(stdin);

    printf("\nDigite o matricula: ");
    fgets(matricula,10,stdin);

    printf("\nDigite o curso: ");
    fgets(nome,30,stdin);

    printf("\nDigite a periodo:");
    scanf("%d" ,&periodo);
     fflush(stdin);

    printf("\nDigite o disciplinas: ");
    fgets(disciplinas,30,stdin);

    //apresentação dos dados 
    printf("\nNome: %s", nome);
    printf("\nIdade: %d", idade);
    printf("\nMatricula: %s", matricula);
    printf("\nEnderoco: %s", endereco);
    printf("\nCurso: %s", curso);
    printf("\nPeriodo: %d", periodo);
    printf("\nDisciplinas: %s", disciplinas);



}