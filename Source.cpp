/* 
Laboratorio #1.
Nombre: Diego Alexander Pabon Oquendo
ID: 1000897130
Grupo: 5
*/

#include <iostream>					//---------------------
									
#ifdef _WIN32
									// Librerias a emplear.
	#include <Windows.h>
									
#endif								//---------------------

using namespace std;

int menu(void);						//----------------------------------------------
int menu2(void);
int limpiar_pantalla(void);
int problema1(void);
int problema2(void);
int problema3(void);
int problema4(void);
int problema5(void);
int problema6(void);
int problema7(void);
int problema8(void);
int problema9(void);				// Funcion por aca uno de los problemas planteados
int problema10(void);
int problema11(void);
int problema12(void);
int problema13(void);
int problema14(void);
int problema15(void);
int problema16(void);
int problema17(void);				//------------------------------------------------

int main(void) {

	int opcion = 0, opcion2 = 0;	// Opciones necesarias para elegir el problema y para volver al menu

	do{								// ciclo que hace que el programa se repita hasta que se diga

		opcion = menu();			// Invocacion de la funcion de menu
		limpiar_pantalla();			// Invocacion de la funcion para limpiar pantalla

		switch (opcion){			// Se compara la primera opcion que lleva a los problemas

		case 1:						// Todos los casos tienen la misma estructura que es:

			do{						// Ciclo que repite la funcion de cada problema 

				problema1();		// Invocacion de cada funcion

				opcion2 = menu2();	// Se llama un segundo menu para saber si se desea volver a ejecutar el problema o si se desea volver al menu
				limpiar_pantalla();	// Se limpia la pantalla

			} while (opcion2 == 2); // Y se analisa para saber si repetir o no el punto

			break;

		case 2:

			do {

				problema2();

				opcion2 = menu2();
				limpiar_pantalla();

			} while (opcion2 == 2);

			break;

		case 3:

			do {

				problema3();

				opcion2 = menu2();
				limpiar_pantalla();

			} while (opcion2 == 2);

			break;

		case 4:

			do {

				problema4();

				opcion2 = menu2();
				limpiar_pantalla();

			} while (opcion2 == 2);

			break;

		case 5:

			do {

				problema5();

				opcion2 = menu2();
				limpiar_pantalla();

			} while (opcion2 == 2);

			break;

		case 6:

			do {

				problema6();

				opcion2 = menu2();
				limpiar_pantalla();

			} while (opcion2 == 2);

			break;

		case 7:

			do {

				problema7();

				opcion2 = menu2();
				limpiar_pantalla();

			} while (opcion2 == 2);

			break;

		case 8:

			do {

				problema8();

				opcion2 = menu2();
				limpiar_pantalla();

			} while (opcion2 == 2);

			break;

		case 9:

			do {

				problema9();

				opcion2 = menu2();
				limpiar_pantalla();

			} while (opcion2 == 2);

			break;

		case 10:

			do {

				problema10();

				opcion2 = menu2();
				limpiar_pantalla();

			} while (opcion2 == 2);

			break;

		case 11:

			do {

				problema11();

				opcion2 = menu2();
				limpiar_pantalla();

			} while (opcion2 == 2);

			break;

		case 12:

			do {

				problema12();

				opcion2 = menu2();
				limpiar_pantalla();

			} while (opcion2 == 2);

			break;

		case 13:

			do {

				problema13();

				opcion2 = menu2();
				limpiar_pantalla();

			} while (opcion2 == 2);

			break;

		case 14:

			do {

				problema14();

				opcion2 = menu2();
				limpiar_pantalla();

			} while (opcion2 == 2);

			break;

		case 15:

			do {

				problema15();

				opcion2 = menu2();
				limpiar_pantalla();

			} while (opcion2 == 2);

			break;

		case 16:

			do {

				problema16();

				opcion2 = menu2();
				limpiar_pantalla();

			} while (opcion2 == 2);

			break;

		case 17:

			do {

				problema17();

				opcion2 = menu2();
				limpiar_pantalla();

			} while (opcion2 == 2);

			break;

		default:

			break;

		}

	} while (opcion != 18);

	return 0;

}

int menu() {

	int opcion = 0;

	cout << "Laboratorio 1" << endl << endl;
	
	for (int i = 1; i < 10; i++) {

		cout << " " << i << ". Para ir al punto " << i << "." << endl;

	}

	for (int i = 10; i <= 17; i++) {

		cout << i << ". Para ir al punto " << i << "." << endl;

	}

	cout << "18. Para salir." << endl;
	cout << endl << "Ingrese la opcion: ";
	cin >> opcion;

	return opcion;

}

int menu2(void) {

	int opcion2 = 0;

	cout <<endl<< "1. Para volver al menu." << endl;
	cout << "2. Para volver a ejecuar el programa." << endl;
	cout << endl << "Ingrese la opcion: ";
	cin >> opcion2;

	return opcion2;

}

int limpiar_pantalla(void) {

	#ifdef _WIN32

		system("cls");

	#else

		system("clear");

	#endif

	return 0;

}

int problema1(void) {

	/*
	
Escriba un programa que identifique si un carácter ingresado es una vocal, una consonante
o ninguna de las 2 e imprima un mensaje según el caso.
Nota: el formato de salida debe ser:
no es una letra.
a es una vocal.
C es una consonante.
	
	*/

	int comprobante = 0;
	char letra, vocal[] = "aeiou", consonante[] = "bcdfghjklmnpqrstvwxyz";

	cout << "Ingrese el caracter: ";
	cin >> letra;

	letra = tolower(letra);

	for (int i = 0; i <= 5; i++) {

		if (vocal[i] == letra) {

			comprobante = 1;

		}

	}

	for (int i = 0; i <= 21; i++) {

		if (consonante[i] == letra) {

			comprobante = 2;

		}

	}

	if (comprobante == 1) {

		cout << endl <<"La letra ingresada " << letra << " es una vocal." << endl;

	}else if (comprobante == 2) {

		cout << endl << "La letra ingresada " << letra << " es una consonante." << endl;

	}else {

		cout << endl << "El caracter ingresado " << letra << " no es vocal ni consonante." << endl;

	}


	return 0;

}

int problema2(void) {

	/*

Se necesita un programa que permita determinar la mínima combinación de billetes
y monedas para una cantidad de dinero determinada. Los billetes en circulación son de $50.000,
$20.000, $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50.
Hacer un programa que entregue el número de billetes y monedas de cada denominación para completar
la cantidad deseada. Si por medio de los billetes y monedas disponibles no se puede lograr la
cantidad deseada, el sistema deberá decir lo que resta para lograrla.
Ej: si se ingresa 47810, el programa debe imprimir:
50000 : 0
20000: 2
10000 : 0
5000: 1
2000 : 1
1000: 0
500 : 1
200: 1
100 : 1
50: 0
Faltante: 10

	*/

	float dinero = 0;

	int b50000 = 0, b20000 = 0, b10000 = 0, b5000 = 0, b2000 = 0, b1000 = 0;
	int m500 = 0, m200 = 0, m100 = 0, m50 = 0;

	cout << "Ingrese la cantidad de dinero: ";
	cin >> dinero;

	if (dinero >= 50000){

		b50000 = (dinero / 50000);
		dinero = (dinero - (b50000 * 50000));

	}

	if (dinero >= 20000) {

		b20000 = (dinero / 20000);
		dinero = (dinero - (b20000 * 20000));

	}

	if (dinero >= 10000) {

		b10000 = (dinero / 10000);
		dinero = (dinero - (b10000 * 10000));

	}

	if (dinero >= 5000) {

		b5000 = (dinero / 5000);
		dinero = (dinero - (b5000 * 5000));

	}

	if (dinero >= 2000) {

		b2000 = (dinero / 2000);
		dinero = (dinero - (b2000 * 2000));

	}

	if (dinero >= 1000) {

		b1000 = (dinero / 1000);
		dinero = (dinero - (b1000 * 1000));

	}

	if (dinero >= 500) {

		m500 = (dinero / 500);
		dinero = (dinero - (m500 * 500));

	}

	if (dinero >= 200) {

		m200 = (dinero / 200);
		dinero = (dinero - (m200 * 200));

	}

	if (dinero >= 100) {

		m100 = (dinero / 100);
		dinero = (dinero - (m100 * 100));

	}

	if (dinero >= 50) {

		m50 = (dinero / 50);
		dinero = (dinero - (m50 * 50));

	}

	cout << endl << "La cantidad de billetes de $50.000 son: " << b50000 << endl;
	cout << "La cantidad de billetes de $20.000 son: " << b20000 << endl;
	cout << "La cantidad de billetes de $10.000 son: " << b10000 << endl;
	cout << "La cantidad de billetes de $5.000 son: " << b5000 << endl;
	cout << "La cantidad de billetes de $2.000 son: " << b2000 << endl;
	cout << "La cantidad de billetes de $1.000 son: " << b1000 << endl;
	cout << "La cantidad de monedas de $500 son: " << m500 << endl;
	cout << "La cantidad de monedas de $200 son: " << m200 << endl;
	cout << "La cantidad de monedas de $100 son: " << m100 << endl;
	cout << "La cantidad de monedas de $50 son: " << m50 << endl;
	cout << "La cantidad de dinero restante es de: " << dinero << endl;

	return 0;

}

int problema3(void) {

	/*

Escriba un programa que debe leer un mes y un día de dicho mes para luego decir
si esa combinación de mes y día son válidos. El caso más especial es el 29 de febrero, en dicho caso
imprimir "posiblemente año bisiesto".
Nota: el formato de salida debe ser:
14 es un mes invalido.
31/4 es una fecha invalida.
27/4 es una fecha valida.
29/2 es valida en bisiesto.

	*/

	cout << "Aun no disponible" << endl;

	return 0;

}

int problema4(void) {

	/*

Escriba un programa para leer dos números enteros con el siguiente significado: el
valor del primer número representa una hora del día en un reloj de 24 horas, de modo que 1245
representa las doce y cuarenta y cinco de la tarde. El segundo entero representa un tiempo de duraci
ón de la misma manera, por lo que 345 representa tres horas y 45 minutos. El programa debe
sumar esta duración primer número, y el resultado será impreso en la misma notación, en este caso
1630, que es el tiempo de 3 horas y 45 minutos después de 12:45.
Nota: el formato de salida debe ser: La hora es 1630.
Otra nota: se debe imprimir un mensaje como el siguiente cuando uno de los datos ingresados en
inválido: 1560 es un tiempo invalido.

	*/

	cout << "Aun no disponible" << endl;

	return 0;

}

int problema5(void) {

	/*

Escriba un programa que muestre el siguiente patrón en la pantalla:
   *
  ***
 *****
********
 ******
  ***
   *
El tamaño del patrón estará determinado un número entero impar que ingrese el usuario. En el
ejemplo mostrado, el tamaño de la figura es 7.

	*/
	
	cout << "Aun no disponible" << endl;

	return 0;

}

float factorial(float i);

int problema6(void) {

	/*

Escriba un programa que encuentre el valor aproximado del número de euler en base
a la siguiente suma infinita:

El usuario debe ingresar el número de elementos usados en la aproximación.

	*/

	float num = 0, euler = 0, aux = 0;

	cout << "Ingrese un numero: ";
	cin >> num;

	for (int i = 0; i < num; i++) {

		aux = factorial(i);
		euler += (1 / aux);

	}

	cout << endl << "La suma aproximada de los numeros es: " << euler << endl;

	return 0;

}

float factorial(float i) {

	float fact = i;

	if (fact > 1) {

		fact = i * factorial(i-1);
		return fact;

	}else {

		return 1;

	}

}


int problema7(void) {
	
	/*

En la serie de Fibonacci, cada número es la suma de los 2 anteriores e inicia con 1 y
1. Ej: 1, 1, 2, 3, 5, 8, ....
Escriba un programa que reciba un número n y halle la suma de todos los números pares en la serie
de Fibonacci menores a n.
Ej: si se ingresa 10, sería la suma de 2+8 =10
Nota: el formato de salida debe ser: El resultado de la suma es: 10

	*/

	cout << "Aun no disponible" << endl;

	return 0;

}

int problema8(void) {

	/*
	
	Escriba un programa que reciba 3 números a, b, c, y calcule la suma de todos los
múltiplos de a y b que sean menores a c. Tenga en cuenta no sumar 2 veces los múltiplos comunes.
Ej: para a=3, b=5 y c=10. Se sumarían 3+6+9+5=23
Para a=5, b=7 y c=36. Se sumarían 5+10+15+20+25+30+35+7+14+21+28 = 210.
Nota: el formato de salida debe ser:
m11 + m12 + m13 + . . . + m21 + m22 + m23. . . = sumatoria.
m11 representa el primer múltiplo de a y así sucesivamente. m21 representa el primer múltiplo de b
y así sucesivamente.
	
	*/
	
	int a = 0, b = 0, c = 0, suma = 0, aux = 0;
	int arreglo[100];


	cout << "Ingresa el numero A: ";
	cin >> a;

	cout << endl << "Ingresa el numero B: ";
	cin >> b;

	cout << endl << "Ingresa el numero C: ";
	cin >> c;

	for (int i = 2; i <= c; i++) {

		if ((i != a) || (i != b)) {

			if ((i % a == 0) || (i % b == 0)) {

				arreglo[aux] = i;
				aux++;
				suma += i;

			}

		}

	}

	cout << endl;

	for (int i = 0; i < aux-1; i++) {

		cout << arreglo[i] << " + ";

	}

	cout << arreglo[aux - 1] << " = " << suma << endl;

	return 0;

}

int problema9(void) {
		
	/*

Escriba un programa que pida un número entero N e imprima el resultado de la suma
de todos sus dígitos elevados a sí mismos.
Ej: si se ingresa 1223 el resultado sería 11 + 22 + 22 + 33 = 36
Nota: la salida del programa debe ser: El resultado de la suma es: 36.

	*/

	cout << "Aun no disponible" << endl;

	return 0;

}

int problema10(void) {
	
	/*

Escriba un programa que reciba un número n e imprima el enésimo número primo.
Ej: Si recibe 4 el programa debe imprimir 7.
Nota: la salida del programa debe ser: El primo numero 4 es: 7.

	*/

	int num = 0, aux = 0, cont = 0, primo = 0;

	cout << "Ingrese un numero: ";
	cin >> num;

	for (int i = 2; aux < num; i++) {

		cont = 0;

		for (int j = 1; j <= i; j++) {

			if (i % j == 0) {

				cont++;

			}

		}

		if (cont == 2) {

			aux++;
			primo = i;

		}

	}

	cout << endl << "El numero primo que corresponde al numero " << num << " es: " << primo << endl;

	return 0;

}

int problema11(void) {
	
	/*

Escriba un programa que reciba un número y calcule el mínimo común múltiplo de
todos los números enteros entre 1 y el número ingresado.
Ej: Si se recibe 4 el programa debe imprimir 12.
Nota: la salida del programa debe ser: El minimo comun multiplo es: 12.

	*/

	cout << "Aun no disponible" << endl;

	return 0;

}

int problema12(void) {
	
	/*

Escriba un programa que calcula el máximo factor primo de un número.
Ej: Si se recibe 33 el programa debe imprimir 11.
Nota: la salida del programa debe ser: El mayor factor primo de 33 es: 11.

	*/

	int num = 0, primo = 0;

	cout << "Ingrese un numero: ";
	cin >> num;

	for (int i = 1; i <= num; i++) {

		if (num % i == 0) {

			int cont = 0;

			for (int j = 1; j <= i; j++) {

				if (i % j == 0) {

					cont++;

				}

			}

			if (cont == 2) {

				primo = i;

			}

		}

	}

	cout << "El factor maximo del numero " << num << " es: " << primo << endl;

	return 0;

}

int problema13(void) {
	
	/*

Escriba un programa que reciba un número y calcule la suma de todos los primos
menores que el número ingresado.
Ej: Si se recibe 10 el programa debe imprimir 17.
Nota: la salida del programa debe ser: El resultado de la suma es: 17.

	*/

	cout << "Aun no disponible" << endl;

	return 0;

}

int palindromo(int num);

int problema14(void) {
	
	/*

Un número palíndromo es igual de derecha a izquierda y de izquierda a derecha,
Ej: 969. escriba un programa que calcule el número palíndromo más grande que se puede obtener
como una multiplicación de números de 3 dígitos.
Ej: una de las posibles respuestas es: 143*777=111111.
Nota: la salida del programa debe ser: 143*777=111111

	*/

	int a = 0, b = 0, c = 0, palin = 0, mul = 0, aux = 0, mul1 = 0;

	cout << "Ingresa el numero A: ";
	cin >> a;

	cout << endl << "Ingresa el numero B: ";
	cin >> b;

	cout << endl << "Ingresa el numero C: ";
	cin >> c;

	mul = (a * b * c);
	mul1 = a * b;

	for (int i = 1; i <= mul; i++) {

		aux = palindromo(i);

		if (aux == 1) {

			palin = i;

		}


	}

	cout << endl << "El palindromo mas grande que se puede obtener de la multiplicacion de los numeros " << a << ", " << b << " y " << c << " es: " << palin << endl;
	cout << mul1 << " * " << c << " = " << palin << endl;

	return 0;

}

 int palindromo(int num) {

	 int palindromo = 0, c = num, b = 0, d = 0;

	 if (num < 10) {

		 palindromo = 1;

	 }else {

		 while (c > 10) {

			 b = c % 10;
			 c = c / 10;
			 d = (d + b) * 10;

		 }

		 d = d + c;

		 if (d == num) {

			 palindromo = 1;

		 } else {

			 palindromo = 0;

		 }

	 }

	 return palindromo;

}

int problema15(void) {
	
	/*

Empezando con el número 1 y moviéndose hacia la izquierda y en sentido horario
se genera una espiral de números como la siguiente:
21 22 23 24 25
20 7 8 9 10
19 6 1 2 11
18 5 4 3 12
17 16 15 14 13
En el caso de esta espiral de 5x5, la suma de los números en la diagonal es 101.
Escriba un programa que reciba un número impar n y calcule la suma de los números en la diagonal
de una espiral de nxn.
Nota: la salida del programa debe ser:
En una espiral de 5x5, la suma es: 101.
Otra nota: se le dará una bonificación si imprime la espiral.

	*/

	cout << "Aun no disponible" << endl;

	return 0;

}

int problema16(void) {
	
	/*

La serie de Collatz se conforma con la siguiente regla: sea n un elemento de la serie,
si n es par, el siguiente elemento es n/2, y si n es impar, el siguiente elemento es 3n+1.
Escriba un programa que reciba un número k y calcule cual es el elemento inicial j (semilla), menor
que k, que produce la serie más larga y diga cuantos términos m tiene la serie.
Tip: la serie termina al llegar a un elemento cuyo valor sea 1.
Ej: para la semilla 13: 13, 40, 20, 10, 5, 16, 8, 4, 2, 1
Nota: la salida del programa debe ser:
La serie mas larga es con la semilla: j, teniendo m terminos.
Otra nota: se le dará una bonificación si imprime la serie.

	*/

	cout << "Aun no disponible" << endl;

	return 0;

}

int problema17(void) {
	
	/*

La secuencia de números triangulares se forma al sumar su posición en el arreglo
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
El numero es: 28 que tiene 6 divisores.

	*/

	cout << "Aun no disponible" << endl;

	return 0;

}
