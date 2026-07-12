#include <stdio.h>

// Conversor de unidades - version inicial
float celsiusAFahrenheit(float c){
    return c * 9.0 / 5.0 + 32.0;
}

void menu(){
    printf("\n==== CONVERSOR DE UNIDADES ====\n");
    printf("1. Celsius a Fahrenheit\n");
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
                printf("Grados Celsius: ");
                scanf("%f", &val);
                printf("%.2f C = %.2f F\n", val, celsiusAFahrenheit(val));
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
