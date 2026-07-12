#include <stdio.h>

// Conversor de unidades - version inicial
void menu(){
    printf("\n==== CONVERSOR DE UNIDADES ====\n");
    printf("0. Salir\n");
    printf("Opcion: ");
}

int main(){
    int op;
    do{
        menu();
        scanf("%d", &op);
        switch(op){
            case 0:
                printf("Hasta luego!\n");
                break;
            default:
                printf("Opcion no valida\n");
        }
    }while(op != 0);
    return 0;
}
