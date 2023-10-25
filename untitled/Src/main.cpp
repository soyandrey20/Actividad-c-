#include <cstdio>
#include <conio.h>
#include "kb.cpp"

int main() {
    int sabor = 0, acumuladorMora = 0, acumuladorManzana = 0, primerTienda = 0, segundaTienda = 0, paquete = 0;

    for (int i = 0; i < 10; i++) {

        sabor = kb::leerEntero("ingrese el sabor del paquete \n"
                               "1. Manzana \n"
                               "2. Mora");

        if (sabor == 1) {

            acumuladorManzana += sabor; //acumuladores

            paquete = kb::leerEntero("tienda donde envia el paquete \n"
                                     "1. tienda 1 \n"
                                     "2. tienda 2");
            if (paquete == 1) {

                primerTienda++; //contadores

            } else if (paquete == 2) {

                segundaTienda++; //contador

            } else {

                printf("\nNumero no valido");

            }

        } else if (sabor == 2) {

            acumuladorMora++; //acumuladores
            paquete = kb::leerEntero("tienda donde envia el paquete\n"
                                     "1. tienda 1\n"
                                     "2. tienda 2");

            if (paquete == 1) {

                primerTienda++;

            } else if (paquete == 2) {

                segundaTienda++;

            } else {

                printf("\nNumero no valido");

            }
        }

    }
    printf("\nPaquetes de sabor a acumuladorManzana: %.i", acumuladorManzana);
    printf("\nPaquetes de sabor a acumuladorMora: %.i", acumuladorMora);
    printf("\nPaquetes total de la tienda 1: %.i", primerTienda);
    printf("\nPaquetes total de la tienda 2: %.i", segundaTienda);
    printf("\nPromedio de los paquetes de manzanas: %.1f", (float) acumuladorManzana / 10);


    getch();

    return 0;

}