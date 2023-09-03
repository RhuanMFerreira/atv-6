#include <stdio.h>

main(){
    int codigodaComida, quantidade;
    float precoUnitario, Total;

    printf("Digite o seu Pedido (100, 102, 103, 104 ):");
    scanf("%d", &codigodaComida);


    switch (codigodaComida) {

        case 100:
         precoUnitario= 10.10;
         break;
        case 101:
         precoUnitario= 8.30;
         break;
        case 102:
         precoUnitario= 8.50;
         break;
        case 103:
         precoUnitario= 12.50;
         break;
        case 104:
         precoUnitario= 13.25;
         break;
        default:
         printf("Codigo do item invalido.\n");
         return 1;
         
    }

    printf("\n---------Seu Pedido----------\n");

    printf("Digite a quantidade que Deseja:\n");
    scanf("%d", &quantidade);

    if (quantidade <=0){
        printf("Quantidade invalida. A quantidade tem que ser  igual ou  maior que zero\n");
        return 1 ;
    }

    Total = precoUnitario * quantidade;

    printf("Valor a ser pago: $%.2f\n", Total);
}