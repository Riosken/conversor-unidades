#include <stdio.h>

// Conversor de unidades - version inicial
float metrosAPies(float m){
    return m * 3.28084;
}

void menu(){
    printf("\n==== CONVERSOR DE UNIDADES ====\n");
    printf("1. Metros a Pies\n");
    printf("0. Salir\n");
    printf("Opcion: ");
}

int main(){
    int op;
    float val;
    do{
        menu();
        scanf("%d", &op);
        switch(op){
            case 1:
                printf("Metros: ");
                scanf("%f", &val);
                printf("%.2f m = %.2f pies\n", val, metrosAPies(val));
                break;
            case 0:
                printf("Hasta luego!\n");
                break;
            default:
                printf("Opcion no valida\n");
        }
    }while(op != 0);
    return 0;
}
