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



	*/

	cout << "Aun no disponible" << endl;

	return 0;

}

int problema4(void) {

	/*



	*/

	cout << "Aun no disponible" << endl;

	return 0;

}

int problema5(void) {

	cout << "Aun no disponible" << endl;

	return 0;

}

float factorial(float i);

int problema6(void) {

	/*



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

	cout << "Aun no disponible" << endl;

	return 0;

}

int problema8(void) {

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

	cout << "Aun no disponible" << endl;

	return 0;

}

int problema10(void) {

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

	cout << "Aun no disponible" << endl;

	return 0;

}

int problema12(void) {

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

	cout << "Aun no disponible" << endl;

	return 0;

}

int palindromo(int num);

int problema14(void) {

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

	cout << "Aun no disponible" << endl;

	return 0;

}

int problema16(void) {

	cout << "Aun no disponible" << endl;

	return 0;

}

int problema17(void) {

	cout << "Aun no disponible" << endl;

	return 0;

}
