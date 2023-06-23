# 5.-Connecting-towns
DESCRIPCIÓN DEL PROBLEMA Y SOLUCIÓN

Las ciudades en un mapa están conectadas por varias carreteras. El número de carreteras entre cada ciudad está en una matriz y la ciudades 0 es la ubicación de partida. El número de caminos desde la ciudad 0 a la ciudad 1 es el primer valor de la matriz, de la ciudad 1 a la ciudad 2 es el segundo, y así sucesivamente.

¿Cuántos caminos hay desde la ciudad?hasta la última ciudad 0 de la lista, módulo 1234567?

Ejemplo:
n = 4
rutas = {3,4,5}
Hay 3 caminos a la ciudad 1 , 4 caminos a la ciudad 2 y 5 caminos a la ciudad 3 .
El número total de caminos es 3 x 4 x 5  mod 1234567 = 60

Funcion descriptiva.
Complete la función de conexión de ciudades en el editor a continuación.
connectTowns tiene los siguientes parámetros:

int n: el número de pueblos
int rutas[n-1]: el número de rutas entre pueblos

Restricciones
Restricciones
1 <= T<=1000
2< N <=100
1 <= rutas[i] <=1000

Entrada de muestra
Entrada de muestra

2
3
1 3
4
2 2 2
Salida de muestra

3
8
Explicación
Caso 1: 1 ruta de T 1 a T 2 , 3 rutas de T 2 a T 3 , por lo tanto, solo 3 rutas.
Caso 2: Hay 2 rutas de cada ciudad a la siguiente, por lo tanto, 2 * 2 * 2 = 8.
