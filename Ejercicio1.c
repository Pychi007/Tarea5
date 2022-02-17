#include<stdio.h>

int main(){

    int hora, min;
    printf("Escriba la hora:");
    scanf("%i", &hora);
    printf("Escriba los minutos:");
    scanf("%i", &min);


        if (hora>=0 & hora<=11 & min<59){
            printf("Buenos dias");
        }
        if (hora>=12 & hora<=17 & min<59){
        printf("Buenos tardes");
        }
        if (hora>=18 & hora<=23 & min<59){
        printf("Buenos noches");
        }
    if (hora>= 24){
        printf("No es valido");
        }
    if (min>59){
        printf("No es valido");
    }

    return 0;
}