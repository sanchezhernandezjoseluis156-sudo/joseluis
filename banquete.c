#include <stdio.h>

int main(void){

    int personas;
    float costopersona, total;

    printf("Banquete la langosta ahumada\n");
    printf("cuantas personas son?");
    scanf("%d",&personas);

    if(personas <= 200){
        costopersona = 95;
    } else if(personas > 200 && personas <= 300){
        costopersona = 85;
    } else {
        costopersona = 75;
    }

    total = personas * costopersona;

    printf("\npersonas: %d\n", personas);
    printf("costo por platillo: $%.2f\n",costopersona);
    printf("total a pagar: $%.2f\n",total);





    return 0;
}