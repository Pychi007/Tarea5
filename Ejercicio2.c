#include<stdio.h>
    int main(){

    float kilo, precio, des;
    printf("El kilo de manzana esta en 42$ pesos?\n");
    printf("¿Cuantos kilos compro?:");
    scanf("%f", &kilo);

    if (kilo>=0 & kilo<=2){
        precio=kilo*42;
        printf("Usted pagara: %.1f",precio);
    }
    if (kilo>2 & kilo<=5) {
        des = (kilo * 42)*.10;
        precio=(kilo*42)-des;
        printf("Usted pagara: %.1f", precio);
    }
    if (kilo>5 & kilo<=10) {
        des = (kilo * 42)*.15;
        precio=(kilo*42)-des;
        printf("Usted pagara: %.1f", precio);
    }
    if (kilo>10) {
        des = (kilo * 42)*.20;
        precio=(kilo*42)-des;
        printf("Usted pagara: %.1f", precio);
    }
        return 0;
}
