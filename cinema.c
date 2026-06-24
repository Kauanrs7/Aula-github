//Construir um algoritmo para a validação de censura para a entrada em um cinema
//Com base na classificação e na idade, permitir o acesso ao filme

//Se o usuário for maior de idade, apresentar a mensagem que ele é de maior 
//E permitira entrada no filme

//Se o usuário for de menor de idadedo que a censura, aprsentar a mensagem
//que ele tem x anos e o filme é para + x anos

//Casoo usuário for menor de idade, mas a censura permitir o acesso,
//apresentar a mensagem para ele aproveitar o filme acompanhado dos responssáveis

#include <stdio.h>

int main()
{
    int idade, censura, acompanhante;
   
   printf(" --- CINEMA --- \n");
   printf("Digite a sua idade: ");
   scanf("%i", &idade);
   
   printf("Censura do Filme \n");
   printf(" 10 - Livre \n");
   printf(" 12 - 12 anos \n");
   printf(" 14 - 14 anos \n");
   printf(" 16 - 16 anos \n");
   printf(" 18 - 18 anos \n");
   printf("Digite a censura: ");
   scanf("%i", &censura);
   
   printf("Você está acompanhado do responsável? \n");
   printf(" 1 - SIM \n");
   printf(" 2 - NÃO \n");
   scanf("%i", &acompanhante);
   
   if (idade < censura){
       if (acompanhante == 1){
           printf("ACESSO LIBERADO! Você está acompanhado!");
       }else{
       printf("ACESSO NEGADO! \n");
       printf("Você tem %i anos, mas o filme é para %i anos.", idade, censura);}
   }else {
       printf("ACESSO LIBERADO! \n");
       
       if (idade >= 18){
           printf("Você é MAIOR de idade.");
       }
       else{
           printf("Aproveite o filme acompanhado dos responssáveis!");
       }
   }
   
   

    return 0;
}