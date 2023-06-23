#include <stdio.h>

// Funcion para calcular el numero total de rutas entre pueblos conectados
int calcularRutas(int cantidadPueblos, int rutas[]) {
    int totalRutas = 1;
    for (int i = 0; i < cantidadPueblos - 1; i++) {
        totalRutas = (totalRutas * rutas[i]) % 1234567;
    }
    return totalRutas;
}

int main() {
    int casosPrueba;
    scanf("%d", &casosPrueba); // Lee el numero de casos de prueba

    for (int i = 0; i < casosPrueba; i++) {
        int cantidadPueblos;
        scanf("%d", &cantidadPueblos); // Lee el numero de pueblos

        int rutas[cantidadPueblos - 1];
        for (int j = 0; j < cantidadPueblos - 1; j++) {
            scanf("%d", &rutas[j]); // Lee las rutas entre los pueblos
        }

        int resultado = calcularRutas(cantidadPueblos, rutas);
        printf("%d\n", resultado);
    }

    return 0;
}

