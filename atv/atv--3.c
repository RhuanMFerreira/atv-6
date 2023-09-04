#include <Stdio.h>

main() {
    int prato, sobremesa, bebida;
    float totalCalorias = 0;

    printf("Escolha o Prato(1 - Vegetariano, 2 - Peixe, 3 - Frango, 4 - Carne):");
    scanf("%d", &prato);

    printf("Escolha a Sobremesa(1 - Abacaxi, 2 - Sorvete Diet, 3 - Mouse diet, 4 - Mouse chocolate):");
    scanf("%d", &sobremesa);

    printf("Escolha a bebida(1 - Cha, 2 - Suco de Laranja, 3 - Suco de Melao, 4 - Refrigerante Diet):");
    scanf("%d", &bebida);

    switch (prato){
        case 1:
         totalCalorias += 180;
         break;

        case 2:
         totalCalorias += 230;
         break;

        case 3:
         totalCalorias += 250;
         break;

        case 4:
         totalCalorias += 350;
         break;

        default:
         printf("prato Invalido.\n");
         return 1;
    }

    switch (sobremesa){
        case 1:
         totalCalorias += 75;
         break;

        case 2:
         totalCalorias += 110;
         break;

        case 3:
         totalCalorias += 170;
         break;

        case 4:
         totalCalorias += 200;
         break;

        default:
         printf("sobremesa Invalida.\n");
         return 1;

    }

    switch (bebida){
        case 1:
         TotalCalorias += 20;
         break;

        case 2:
         TotalCalorias += 70;
         break;
        case 3:
        
         TotalCalorias += 100;
         break;

        case 4:
         TotalCalorias += 65;
         break;

        default:
         printf("Bebida Invalida.\n");
         return 1;

    }

    printf("\n---------Suas Calorias----------\n");

    printf("Total de Calorias da Refeicao e: %.2f calorias\n", totalCalorias);
}
