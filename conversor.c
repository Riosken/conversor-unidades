#include <stdio.h>

// Conversor de unidades - version final (ramas fusionadas)
float celsiusAFahrenheit(float c){
    return c * 9.0 / 5.0 + 32.0;
}

float fahrenheitACelsius(float f){
    return (f - 32.0) * 5.0 / 9.0;
}

float metrosAPies(float m){
    return m * 3.28084;
}

float piesAMetros(float p){
    return p / 3.28084;
}

void menu(){
    printf("\n==== CONVERSOR DE UNIDADES ====\n");
    printf("1. Celsius a Fahrenheit\n");
    printf("2. Fahrenheit a Celsius\n");
    printf("3. Metros a Pies\n");
    printf("4. Pies a Metros\n");
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
            case 2:
                printf("Grados Fahrenheit: ");
                scanf("%f", &val);
                printf("%.2f F = %.2f C\n", val, fahrenheitACelsius(val));
                break;
            case 3:
                printf("Metros: ");
                scanf("%f", &val);
                printf("%.2f m = %.2f pies\n", val, metrosAPies(val));
                break;
            case 4:
                printf("Pies: ");
                scanf("%f", &val);
                printf("%.2f pies = %.2f m\n", val, piesAMetros(val));
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
