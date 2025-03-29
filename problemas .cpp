#include <iostream>

using namespace std;

int check_vocal_consonant(){
    char letra;
    cout << "Ingrese una letra: ";
    cin >> letra;

    //primero verificamos si es una letra
    if ((letra < 65 || letra > 90) && (letra < 97 || letra > 122)){
        cout << "No es una letra" << endl;
        return 0;
    }
    //basados en el codigo ascii las letras de la a la A la Z y la z estan entre 65 y 90 y 97 y 122
    //hacemos una operacion aritmetica para convetir las letras mayusculas a minusculas
    if (letra >= 65 && letra <= 90){
        letra += 32;
    }
    //ahora verificamos si es una vocal o consonante
    if (letra == 97 || letra == 101 || letra == 105 || letra == 111 || letra == 117){
        cout << "Es una vocal" << endl;
    }
    else{
        cout << "Es una consonante" << endl;
    }  
    return 0;

}

int cash_register(){
    int cantidad;
    cout << "Ingrese la cantidad de dinero: ";
    cin >> cantidad;

    int billetes_50k = cantidad / 50000;
    cantidad = cantidad % 50000;
    int billetes_20k = cantidad / 20000;
    cantidad = cantidad % 20000;
    int billetes_10k = cantidad / 10000;
    cantidad = cantidad % 10000;
    int billetes_5k = cantidad / 5000;
    cantidad = cantidad % 5000;
    int billetes_2k = cantidad / 2000;
    cantidad = cantidad % 2000;
    int billetes_1k = cantidad / 1000;
    cantidad = cantidad % 1000;
    int monedas_500 = cantidad / 500;
    cantidad = cantidad % 500;
    int monedas_200 = cantidad / 200;
    cantidad = cantidad % 200;
    int monedas_100 = cantidad / 100;
    cantidad = cantidad % 100;
    int monedas_50 = cantidad / 50;
    cantidad = cantidad % 50;

    cout << "Billetes de 50k: " << billetes_50k << endl;
    cout << "Billetes de 20k: " << billetes_20k << endl;
    cout << "Billetes de 10k: " << billetes_10k << endl;
    cout << "Billetes de 5k: " << billetes_5k << endl;
    cout << "Billetes de 2k: " << billetes_2k << endl;
    cout << "Billetes de 1k: " << billetes_1k << endl;
    cout << "Monedas de 500: " << monedas_500 << endl;
    cout << "Monedas de 200: " << monedas_200 << endl;
    cout << "Monedas de 100: " << monedas_100 << endl;
    cout << "Monedas de 50: " << monedas_50 << endl;
    cout << "Falta: " << cantidad << endl;

    return 0;
}

int check_date(){
    int mes, dia;
    cout << "Ingrese el mes: ";
    cin >> mes;
    cout << "Ingrese el dia: ";
    cin >> dia;

    if (mes < 1 || mes > 12){
        cout << mes << " es un mes invalido." << endl;
        return 0;
    }

    if (dia < 1 || dia > 31){
        cout << dia << "/" << mes << " es una fecha invalida." << endl;
        return 0;
    }

    if (mes == 2 && dia == 29){
        cout << dia << "/" << mes << " es valida en bisiesto." << endl;
        return 0;
    }

    if (mes == 4 && dia == 31){
        cout << dia << "/" << mes << " es una fecha invalida." << endl;
        return 0;
    }

    if (mes == 6 && dia == 31){
        cout << dia << "/" << mes << " es una fecha invalida." << endl;
        return 0;
    }

    if (mes == 9 && dia == 31){
        cout << dia << "/" << mes << " es una fecha invalida." << endl;
        return 0;
    }

    if (mes == 11 && dia == 31){
        cout << dia << "/" << mes << " es una fecha invalida." << endl;
        return 0;
    }

    cout << dia << "/" << mes << " es una fecha valida." << endl;
    return 0;

}

int set_clock(){
    int hora, duracion;
    cout << "Ingrese la hora: ";
    cin >> hora;
    cout << "Ingrese la duracion: ";
    cin >> duracion;

    if (hora < 0 || hora > 2359){
        cout << hora << " es un tiempo invalido." << endl;
        return 0;
    }

    if (duracion < 0 || duracion > 2359){
        cout << duracion << " es un tiempo invalido." << endl;
        return 0;
    }

    int horas = duracion / 100;
    int minutos = duracion % 100;

    int horas_nuevas = horas + hora / 100;
    int minutos_nuevos = minutos + hora % 100;

    if (minutos_nuevos >= 60){
        horas_nuevas++;
        minutos_nuevos -= 60;
    }

    cout << "La hora es " << horas_nuevas * 100 + minutos_nuevos << endl;
    return 0;
}

int print_rhombus(){
    int n;
    cout << "Ingrese un numero impar para el tamaño del patron: ";
    cin >> n;
    
    // Validar que el número sea impar
    if (n % 2 == 0) {
        cout << "El numero ingresado no es impar." << endl;
        return 1;
    }
    
    int mitad = n / 2;
    
    // Parte superior (incluye la línea central)
    for (int i = 0; i <= mitad; i++) {
        // Imprime espacios: disminuyen a medida que i aumenta
        for (int j = 0; j < mitad - i; j++) {
            cout << " ";
        }
        // Imprime asteriscos: 2*i + 1
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    // Parte inferior
    for (int i = mitad - 1; i >= 0; i--) {
        // Imprime espacios: se incrementan a medida que i disminuye
        for (int j = 0; j < mitad - i; j++) {
            cout << " ";
        }
        // Imprime asteriscos: 2*i + 1
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}
int calculate_euler_approx(){
    int n;
    cout << "Ingrese el numero de elementos: ";
    cin >> n;

    double e = 0;
    double factorial = 1;
    for (int i = 0; i < n; i++){
        e += 1 / factorial;
        factorial *= i + 1;
    }

    cout << "e es aproximadamente: " << e << endl;
    return 0;
}
int sum_nth_even_fibonacci(){
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    int a = 1;
    int b = 1;
    int suma = 0;
    while (b < n){
        if (b % 2 == 0){
            suma += b;
        }
        int temp = a;
        a = b;
        b += temp;
    }

    cout << "El resultado de la suma es: " << suma << endl;
    return 0;
}
int sum_multiples(){
    int a, b, c;
    cout << "Ingrese 3 numeros: ";
    cin >> a >> b >> c;

    int suma = 0;
    for (int i = 1; i < c; i++){
        if (i % a == 0 || i % b == 0){
            suma += i;
        }
    }

    cout << "La suma de los multiplos de " << a << " y " << b << " menores a " << c << " es: " << suma << endl;
    return 0;
}
int sum_power_self(){
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    int suma = 0;
    int temp = n;
    while (temp > 0){
        int digito = temp % 10; //obtenemos el ultimo digito
        int potencia = 1;
        for (int i = 0; i < digito; i++){
            potencia *= digito;
        }
        suma += potencia;
        temp /= 10;
    }

    cout << "El resultado de la suma es: " << suma << endl;
    return 0;
}
int nth_prime(){
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    int contador = 0;
    int i = 2; //numero primo
    while (contador < n){
        bool es_primo = true;
        for (int j = 2; j < i; j++){ 
            if (i % j == 0){ //si es divisible por otro numero
                es_primo = false;
                break;
            }
        }
        if (es_primo){
            contador++;
        }
        i++;
    }

    cout << "El primo numero " << n << " es: " << i - 1 << endl;
    return 0;
}
int minimum_common_multiple(){
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    //El proceso descompone cada número en sus factores primos
//Va multiplicando los factores para obtener el MCM más pequeño que sea divisible por todos los números hasta n
    int mcm = 1;
    for (int i = 2; i <= n; i++){ //para cada numero entre 1 y n 
        int temp = i;
        for (int j = 2; j <= n; j++){ //para cada divisor entre 1 y n 
            int contador = 0;
            while (temp % j == 0){ //mientras sea divisible
                temp /= j;         
                contador++;
            }
            if (contador > 0){
                mcm *= j;        //multiplicamos el mcm por el divisor
            }
        }

    }

    cout << "El minimo comun multiplo es: " << mcm << endl;
    return 0;
}

int max_prime_factor(){
    long long n;
    cout << "Ingrese un numero: ";
    cin >> n;
    //se realiza la descomposicion en factores primos
    int tempNumber = n; // Guardamos el valor original de n para imprimirlo al final

    long long max_factor = 0;
    for (long long i = 2; i <= n; i++){
        while (n % i == 0){
            n /= i;
            max_factor = i;
        }
    }

    cout << "El mayor factor primo de " << tempNumber << " es: " << max_factor << endl;
    return 0;
}

int sum_primes_less_than(){
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    // se suman los numeros primos menores que n
    int suma = 0;
    
    for (int i = 2; i < n; i++){
        bool es_primo = true;
        for (int j = 2; j < i; j++){
            if (i % j == 0){     //si es divisible por otro numero no es primo
                es_primo = false;
                break;
            }
        }
        if (es_primo){
            suma += i;
        }
    }

    cout << "El resultado de la suma es: " << suma << endl;
    return 0;
}
int palindromic_number(){
    int max = 0;
    int a, b;
    for (int i = 100; i < 1000; i++){
        for (int j = 100; j < 1000; j++){
            int producto = i * j;
            int temp = producto;
            int invertido = 0;
            while (temp > 0){
                invertido = invertido * 10 + temp % 10; //invertimos el numero para comparar si es palindromo
                temp /= 10;
            }
            if (producto == invertido && producto > max){ //si es palindromo y es mayor que el maximo actual lo guardamos
                max = producto;
                a = i;
                b = j;
            }
        }
    }

    cout << a << "*" << b << "=" << max << endl;
    return 0;
}

int sum_print_spiral_diagonal(){
    int n;
    cout << "Ingrese un numero impar: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "El numero no es impar" << endl;
        return 0;
    }
      // La suma empieza en 1, que es el centro de la espiral.
      int suma = 1;

      // Para cada capa de la espiral, k representa el tamaño de la subespiral (siendo k impar)
      for (int k = 3; k <= n; k += 2) {
          suma += 4 * k * k - 6 * (k - 1);
      }
  
      cout << "En una espiral de " << n << "x" << n << ", la suma de los numeros en la diagonal es: " << suma << endl;

    // Declaramos un arreglo 2D estático de tamaño máximo
    const int MAX = 101; // Tamaño máximo de la matriz
    int espiral[MAX][MAX] = {0}; // Inicializar todo a 0
    
    int valor = 1;
    int fila = n / 2;
    int columna = n / 2;
    
    // Direcciones de movimiento: derecha, abajo, izquierda, arriba
    int dx[4] = {1, 0, -1, 0}; 
    int dy[4] = {0, 1, 0, -1};
    
    int direccion = 0;
    int pasos = 0;
    int longitud_paso = 1;

    // Generar la espiral
    while (valor <= n * n) {
        // Colocar el valor en la posición actual
        espiral[fila][columna] = valor++;
        
        // Mover en la dirección actual
        fila += dy[direccion]; // Mover en la dirección y
        columna += dx[direccion];// Mover en la dirección x
        
        pasos++;
        
        // Cambiar dirección cuando se completa un paso
        if (pasos == longitud_paso) {
            direccion = (direccion + 1) % 4; // Cambiar dirección (ciclo entre 0-3)
            pasos = 0;
            
            // Aumentar longitud de paso cada dos direcciones
            if (direccion % 2 == 0) {
                longitud_paso++;
            }
        }
    }

    // Imprimir la espiral
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Imprimir con ancho fijo para alineación
            if (espiral[i][j] < 10) {                   //un digito
                cout << "  " << espiral[i][j] << " ";
            } else if (espiral[i][j] < 100) {          //dos digitos    
                cout << " " << espiral[i][j] << " ";
            } else {
                cout << espiral[i][j] << " ";          
            }
        }
        cout << endl;
    }

    return 0;
}
int collatz_series(){
    long long k;
    cout << "Ingrese un numero k: ";
    cin >> k;
    
    // Variables para almacenar la semilla con la serie más larga y su longitud.
    long long bestSeed = 0;
    long long bestLength = 0;
    
    // Recorrer todas las semillas de 1 hasta k-1.
    for (long long seed = 1; seed < k; seed++) {
        long long n = seed; // n es el número actual en la serie
        long long length = 1; // Contamos el primer término (la semilla)
        
        // Calcular la longitud de la serie de Collatz para la semilla actual.
        while (n != 1) {
            if (n % 2 == 0)
                n = n / 2;
            else
                n = 3 * n + 1;
            length++;
        }
        
        // Actualizar la semilla con la serie más larga.
        if (length > bestLength) {
            bestLength = length;
            bestSeed = seed;
        }
    }
    
    cout << "La serie mas larga es con la semilla: " << bestSeed
         << ", teniendo " << bestLength << " terminos." << endl;
    
    // Imprimir la serie de Collatz para la semilla ganadora.
    cout << "La serie es: ";
    long long n = bestSeed;
    cout << n;
    while (n != 1) {
        if (n % 2 == 0)
            n = n / 2;
        else
            n = 3 * n + 1;
        cout << ", " << n;
    }
    cout << endl;
    

    return 0;

}
int contarDivisores(long long num) {
    int contador = 0;
    // Iteramos desde 1 hasta que i*i sea mayor que num
    for (long long i = 1; i * i <= num; i++) {
        if (num % i == 0) {
            // Si i es divisor, entonces num/i también lo es
            if (i * i == num)
                contador++;      // Si es cuadrado perfecto, se cuenta solo una vez
            else
                contador += 2;   // En otro caso, se cuentan ambos divisores
        }
    }
    return contador;
}

int triangular_number(){

    int k;
    cout << "Ingrese un numero k: ";
    cin >> k;
    
    long long n = 1;
    long long triangular = 0;
    int divisores = 0;
    
    // Iterar hasta encontrar el primer número triangular con más de k divisores
    while (true) {
        // Calcular el n-ésimo número triangular: n*(n+1)/2
        triangular = n * (n + 1) / 2;
        divisores = contarDivisores(triangular);
        
        if (divisores > k) {
            cout << "El numero es: " << triangular 
                 << " que tiene " << divisores << " divisores." << endl;
            break;
        }
        n++;
    }
    
    return 0;
}
int main() {
    cout << "Ingrese una opcion del menu"<< endl
         << "1. Vocal o consonante" << endl
         << "2. Caja registradora" << endl
         << "3. Fecha valida" << endl
         << "4. Reloj" << endl
         << "5. Rombo" << endl
         << "6. Euler" << endl
         << "7. Fibonacci" << endl
         << "8. Multiplos" << endl
         << "9. Potencia" << endl
         << "10. Primo" << endl
         << "11. Minimo comun multiplo" << endl
         << "12. Factor primo" << endl
         << "13. Suma de primos" << endl
         << "14. Palindromo" << endl
         << "15. Espiral" << endl
         << "16. Collatz" << endl
         << "17. Triangular" << endl;


    int opcion;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        check_vocal_consonant();
        /* Escriba un programa que identifique 
        si un carácter ingresado es una vocal, 
        una consonante o ninguna de las 2 e imprima 
        un mensaje según el caso. */
        break;
    case 2:
        cash_register();
        /* Se necesita un programa que permita determinar la mínima combinación de billetes
y monedas para una cantidad de dinero determinada. Los billetes en circulación son de $50.000,
$20.000, $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50.
Hacer un programa que entregue el número de billetes y monedas de cada denominación para completar 
la cantidad deseada. Si por medio de los billetes y monedas disponibles no se puede lograr la
cantidad deseada, el sistema deberá decir lo que resta para lograrla. */
        break;
    case 3:
        check_date();
        /* Escriba un programa que debe leer un mes y un día de dicho mes para luego decir
si esa combinación de mes y día son válidos. El caso más especial es el 29 de febrero, en dicho caso
imprimir "posiblemente año bisiesto"
Nota: el formato de salida debe ser:
14 es un mes invalido.
31/4 es una fecha invalida.
27/4 es una fecha valida.
29/2 es valida en bisiesto. */
        break;
    case 4:
        set_clock();
        /* . Escriba un programa para leer dos números enteros con el siguiente significado: el
valor del primer número representa una hora del día en un reloj de 24 horas, de modo que 1245
representa las doce y cuarenta y cinco de la tarde. El segundo entero representa un tiempo de duración 
de la misma manera, por lo que 345 representa tres horas y 45 minutos. El programa debe
sumar esta duración primer número, y el resultado será impreso en la misma notación, en este caso
1630, que es el tiempo de 3 horas y 45 minutos después de 12:45.
Nota: el formato de salida debe ser: La hora es 1630.
Otra nota: se debe imprimir un mensaje como el siguiente cuando uno de los datos ingresados en
inválido: 1560 es un tiempo invalido. */
        break;
    case 5:
        print_rhombus();
        /*Escriba un programa que muestre el siguiente patrón en la pantalla:
                           *
                          ***
                         *****
                        *******
                         *****
                          ***
                           *
        El tamaño del patrón estará determinado un número entero impar que ingrese el usuario. En el
        ejemplo mostrado, el tamaño de la figura es 7.*/
        break;
    case 6:
        calculate_euler_approx();
        /* Escriba un programa que encuentre el valor aproximado del número de euler en base
a la siguiente suma infinita:
e = 1/0! + 1/1! + 1/2! + 1/3! + 1/4! + 1/5! + ... 
El usuario debe ingresar el número de elementos usados en la aproximación.
Ej: si se ingresa 3 e = 1/0! + 1/1! + 1/2! = 2,5
Nota: el formato de salida debe ser: e es aproximadamente: 2.5*/
        break;
    case 7:
    sum_nth_even_fibonacci();

        /* En la serie de Fibonacci, cada número es la suma de los 2 anteriores e inicia con 1 y
1. Ej: 1, 1, 2, 3, 5, 8, ....
Escriba un programa que reciba un número n y halle la suma de todos los números pares en la serie
de Fibonacci menores a n.
Ej: si se ingresa 10, sería la suma de 2+8 =10
Nota: el formato de salida debe ser: El resultado de la suma es: 10*/
        break;
    case 8:
    sum_multiples();
        /* . Escriba un programa que reciba 3 números a, b, c, y calcule la suma de todos los
múltiplos de a y b que sean menores a c. Tenga en cuenta no sumar 2 veces los múltiplos comunes.
Ej: para a=3, b=5 y c=10. Se sumarían 3+6+9+5=23
Para a=5, b=7 y c=36. Se sumarían 5+10+15+20+25+30+35+7+14+21+28 = 210.
Nota: el formato de salida debe ser:
m11 + m12 + m13 + . . . + m21 + m22 + m23. . . = sumatoria.
m11 representa el primer múltiplo de a y así sucesivamente. m21 representa el primer múltiplo de b
y así sucesivamente.*/
        break;
    case 9:
    sum_power_self();
        /* Escriba un programa que pida un número entero N e imprima el resultado de la suma
de todos sus dígitos elevados a sí mismos.
Ej: si se ingresa 1223 el resultado sería 1
1 + 22 + 22 + 33 = 36
Nota: la salida del programa debe ser: El resultado de la suma es: 36.*/
        break;

    case 10:
    nth_prime();
        /* Escriba un programa que reciba un número n e imprima el enésimo número primo.
Ej: Si recibe 4 el programa debe imprimir 7.
Nota: la salida del programa debe ser: El primo numero 4 es: 7.*/

        break;
    case 11:
    minimum_common_multiple();
        /* Escriba un programa que reciba un número y calcule el mínimo común múltiplo de
todos los números enteros entre 1 y el número ingresado.
Ej: Si se recibe 4 el programa debe imprimir 12.
Nota: la salida del programa debe ser: El minimo comun multiplo es: 12. */
        break;  
    case 12:
    max_prime_factor();
        /*Escriba un programa que calcula el máximo factor primo de un número.
Ej: Si se recibe 33 el programa debe imprimir 11.
Nota: la salida del programa debe ser: El mayor factor primo de 33 es: 11.*/
        break;
    case 13:
    sum_primes_less_than();
        /* Escriba un programa que reciba un número y calcule la suma de todos los primos
menores que el número ingresado.
Ej: Si se recibe 10 el programa debe imprimir 17.
Nota: la salida del programa debe ser: El resultado de la suma es: 17.*/
        break; 

    case  14:
    palindromic_number();
        /*Un número palíndromo es igual de derecha a izquierda y de izquierda a derecha,
Ej: 969. escriba un programa que calcule el número palíndromo más grande que se puede obtener
como una multiplicación de números de 3 dígitos.
Ej: una de las posibles respuestas es: 143*777=111111.
Nota: la salida del programa debe ser: 143*777=111111*/
    break;
    case 15:
    sum_print_spiral_diagonal();
        
    /*. 
    Escriba un programa que reciba un número impar n y calcule la suma de los números en la diagonal
de una espiral de nxn y que imprima en pantalla la matriz con la espiral generada.
Ej: para n=5
    Empezando con el número 1 y moviéndose hacia la izquierda y en sentido horario
se genera una espiral de números como la siguiente:
21 22 23 24 25
20 7  8  9  10
19 6  1  2  11
18 5  4  3  12
17 16 15 14 13
En el caso de esta espiral de 5x5, la suma de los números en la diagonal es 101.
Nota: la salida del programa debe ser:
En una espiral de 5x5, la suma es: 101.*/

        break;
    case 16:
    collatz_series();
        /* La serie de Collatz se conforma con la siguiente regla: sea n un elemento de la serie,
si n es par, el siguiente elemento es n/2, y si n es impar, el siguiente elemento es 3n+1.
Escriba un programa que reciba un número k y calcule cual es el elemento inicial j (semilla), menor
que k, que produce la serie más larga y diga cuantos términos m tiene la serie.
Tip: la serie termina al llegar a un elemento cuyo valor sea 1.
Ej: para la semilla 13: 13, 40, 20, 10, 5, 16, 8, 4, 2, 1
Nota: la salida del programa debe ser:
La serie mas larga es con la semilla: j, teniendo m terminos.
Otra nota: se le dará una bonificación si imprime la serie.
*/
        break;
    case 17:
    triangular_number();
        /*  La secuencia de números triangulares se forma al sumar su posición en el arreglo
con el valor del número anterior: 1, 1+2=3, 3+3=6, 6+4=10, 10+5=15, 15+6=21, 21+7=28...
Si listamos los números triangulares y sus divisores tenemos:
1: 1
3: 1,3
6: 1,2,3,6
10: 1,2,5,10
15: 1,3,5,15
21: 1,3,7,21
28: 1,2,4,7,14,28
Se observa que 28 es el primer número triangular que tiene más de 5 divisores. Escriba un programa
que reciba un número k y calcule cual es el primer número triangular que tiene más de k divisores.
Tip: el enésimo número triangular se puede representar como n*(n+1)/2.
Nota: la salida del programa debe ser:
El numero es: 28 que tiene 6 divisores.*/
        break;


    
    default:
        break;
    }
    return 0;
}