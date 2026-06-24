/*
Algoritmo de venda de Milk Shake
O usuário pode selecionar entre os sabores disponíveis
(Morango - R$XX, Chocolate - R$XX, Baunilha - R$XX,)
*/
#include <stdio.h>

int main()
{
  int opcao, tamanho, adicionais;
  float preco = 0, valorPago, troco;
  
    printf(" ===== BEM-VINDO A LOJA DE MILK SHAKE =====\n");
    printf("\nO melhor da cidade!\n");
    printf("Escolha o sabor do milk shake:\n");
    printf(" 1 - Morango - R$ 16,00\n");
    printf(" 2 - Chocolate - R$ 18,00\n");
    printf(" 3 - Limão - R$ 20,00\n");
    printf(" 4 - Avelã - R$ 22,00\n");
    printf(" 5 - Uva - R$ 14,00\n");
    printf(" 6 - Ovomaltine - R$ 22,00\n");
    printf(" 7 - Baunilha - R$ 19,00\n");
    scanf("%i", &opcao);
    
    switch(opcao){
        case 1:
            printf("Você escolheu Morango. \n");
            preco += 16;
            break;
        case 2:
            printf("Você escolheu Chocolate. \n");
            preco += 18;
            break;
        case 3:
            printf("Você escolheu Limão. \n");
            preco += 20;
            break;
        case 4:
            printf("Você escolheu Avelã. \n");
            preco += 22;
            break;
        case 5:
            printf("Você escolheu Uva. \n");
            preco += 14;
            break;
        case 6:
            printf("Você escolheu Ovomaltine. \n");
            preco += 22;
            break;
        case 7:
            printf("Você escolheu Baunilha. \n");
            preco += 19;
            break;
        default:
            printf("Opção Invalida!");
            return 0;
       
    }
    printf("Escolha o Tamanho: \n");
    printf(" 1 - Pequeno (Adicional de R$ 0,00)\n");
    printf(" 2 - Médio (Adicional de R$ 3,00)\n");
    printf(" 3 - Grande (Adicional de R$ 5,00)\n");
    printf("Digite a sua opção de tamanho: ");
    scanf("%i", &tamanho);
    
    switch(tamanho){
        case 1:
            printf("Tamanho Pequeno selecionado.\n");
            break;
        case 2:
            printf("Tamanho Médio selecionado.\n");
            preco += 3;
            break;
        case 3:
            printf("Tamanho Grande selecionado.\n");
            preco += 5;
            break;
            default:
            printf("opção Invalida!");
            return 0;
    }
    
    printf("Gostaria de algum adicional? \n");
    printf(" 1 - Não \n");
    printf(" 2 - Sim \n");
    printf("Digite a sua opção: ");
    scanf("%i", &adicionais);
    
    switch(adicionais){
        case 1:
            printf("Nenhum adicional selecionado. \n");
            break;
        case 2:
            printf("Adicionais selecionados. \n");
            preco +- 3;
            break;
    default:
    printf("Opção Invalida!");
    return 0;
    }
    
    printf("\n--- RESUMO DO PEDIDO ---\n");
    printf("\n Milk-Shake: ");
    
    switch(opcao){
        case 1:
        printf("Morango\n");
        break;
        case 2:
        printf("Chocolate\n");
        break;
        case 3:
        printf("Limão\n");
        break;
        case 4:
        printf("Avelã\n");
        break;
        case 5:
        printf("Uva\n");
        break;
        case 6:
        printf("Ovomaltine\n");
        break;
        case 7:
        printf("Baunilha\n");
        break;
    }
    printf("\n Tamanho: ");
    
    switch(tamanho){
        case 1:
        printf("Pequeno \n");
        break;
        case 2:
        printf("Médio \n");
        break;
        case 3:
        printf("Grande \n");
        break;
    }
    printf("\n Adicionais: ");
        if(adicionais == 2){
            printf("Sim \n");
        } else {
            printf("Não \n");
        }
    printf("\n Total a pagar: %.2f", preco);
    
    printf("\n Digite o valor que o cliente está pagando: ");
    scanf("%f", &valorPago);
    
        if (valorPago >= preco){
            troco = valorPago - preco;
            printf("Troco a ser entregue: R$ %.2f", troco);
        } else {
            printf("Valor insuficiente. Cliente deve pagar pelo menos R% %.2f", preco);
        }
        
    printf("\n\n  Obrigado pela preferência!\n\n");
    
    return 0;
}