/*
Construir um algoritmo responsálvel por calcular 
o salario do funcionario com base nas horas
trabalhadas e na taxa por hora 
*/
#include <stdio.h>

int main()
{
    //Definição das variaveis
    float horasTrabalhadas, taxaHora, salario;
    
    //Solicitar os valores para o usuário
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);
    
    printf("Digite a taxa hora: ");
    scanf("%f", &taxaHora);
    
    //Realizar os cálculos 
    
    salario = taxaHora * horasTrabalhadas;
    
    //Exibir as informações ao usuário 
    
    printf("O salario é de: %.2f", salario);

    
    return 0;
}