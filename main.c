#include  <time.h>
#include <stdio.h>

int main()
{
    clock_t Ticks[2];
    char nomeAluno [50];
    char nomeCurso [50];
    int matricula;
    Ticks[0] = clock();
   
    Ticks[1] = clock();
    double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
  
    printf("Digite seu Nome: " );
    scanf("%s" ,nomeAluno);

    printf("Digite sua Matrícula: " );
    scanf("%d" ,&matricula);
    
    printf("Digite o nome do seu Curso: " );
    scanf("%s" ,nomeCurso);
    
    printf("Seu Nome é: %s \n" ,nomeAluno);
    printf("Sua Matrícula é: %d \n" ,matricula);
    printf("Seu Curso é: %s \n"  ,nomeCurso);



    printf("Tempo gasto: %g ms.", Tempo);
    getchar();
    return 0;
}