#include <iostream>

#ifdef _win32

	#include <windows.h>

#endif

using namespace std;

int limpiar_pantalla(void);

int menu(void);
int menu2(void);

int problema2(void);
int problema4(void);
int problema6(void);
int problema8(void);
int problema10(void);

int main() {

	int opcion = 0, opcion2 = 0;

	do {

		opcion = menu();
		limpiar_pantalla();

		switch (opcion) {

		case 2:

			do{

				problema2();
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

		case 6:

			do {

				problema6();
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

		case 10:

			do {

				problema10();
				opcion2 = menu2();
				limpiar_pantalla();

			} while (opcion2 == 2);

			break;

		default:

			break;

		}

	} while (opcion != 19);

	return 0;
	
}

int limpiar_pantalla(void) {

	#ifdef _WIN32

		system("cls");

	#else

		system("clear");

	#endif

		return 0;

}

int menu(void) {

	int opcion = 0;

	cout << "Laboratorio #2" << endl << endl;

	for (int i = 2; i < 10; i = (i + 2)) {

		cout << i << ".  Para ir al punto " << i << "." << endl;

	}

	for (int i = 10; i <= 18; i = (i + 2)) {

		cout << i << ". Para ir al punto " << i << "." << endl;

	}

	cout << "19. Para salir." << endl;
	cout << endl << "Ingrese la opcio: ";
	cin >> opcion;

	return opcion;

}

int menu2(void) {

	int opcion2 = 0;

	cout << endl << "1. Para volver al menu." << endl;
	cout << "2. Para volver a ejecutar el programa." << endl;
	cout << endl << "Ingrese la opcion: ";
	cin >> opcion2;

	return opcion2;

}

int problema2(void) {

	char arreglo[200];

	for (int i = 0; i < 200; i++) {

		arreglo[i] = char(65 + rand() % 26);
		cout << arreglo[i];

	}

	int contador = 0;
	cout << endl;

	for (int i = 65; i <= 90; i++) {

		contador = 0;

		for (int j = 0; j < 200; j++) {

			if (char(i) == arreglo[j]) {

				contador++;

			}

		}

		cout << char(i) << " = " << contador << endl;

	}

	return 0;

}

int char_int(char[]);

int problema4(void) {

	char cadena[50];

	cout << "Ingrese un numero: ";
	cin >> cadena;

	cout << "Numero como caracter: " << cadena << endl;
	cout << "Numero como entero: " << char_int(cadena) << endl;

	return 0;

}

int char_int(char cadena[]) {

	int numero_int = 0;

	for (int i = 0; cadena[i] != '\0'; i++) {

		numero_int = numero_int * 10 + (cadena[i] - 48);

	}

	return numero_int;

}

int problema6(void) {

	char cadena[50];

	cout << "Ingrese la cadena de caracteres: ";
	cin >> cadena;

	cout << endl << "Original: " << cadena << endl;

	for (int i = 0; cadena[i] != '\0'; i++) {

		if (cadena[i] >= 97 && cadena[i] <= 122) {

			cadena[i] -= 32;

		}

	}

	cout << endl << "Mayuscula: " << cadena << endl;

	return 0;

}

int problema8(void) {

	char caracteres[50] = "", texto[50] = "", numero[50] = "";
	int indiceText = 0, indiceNum = 0;

	cout << "Ingrese la cadena de caracteres: ";
	cin >> caracteres;

	for (int i = 0; caracteres[i] != '\0'; i++) {

		if (caracteres[i] >= 48 && caracteres[i] <= 57) {

			numero[indiceNum] = caracteres[i];
			indiceNum++;

		}
		else{

			texto[indiceText] = caracteres[i];
			indiceText++;

		}

	}

	cout << endl << "Original: " << caracteres << endl;
	cout << "Texto: " << texto << endl;
	cout << "Numero: " << numero << endl;

	return 0;

}

int problema10(void) {

	int Numeros_Arabes[7] = { 1000,500,100,50,10,5,1 }, numero = 0;
	char Numeros_Romanos[7] = { 'M','D','C','L','X','V','I' }, Numero_Romano[50] = "";

	cout << "Ingrese el numero en romano: ";
	cin >> Numero_Romano;

	for (int i = 0; Numero_Romano[i] != '\0'; i++) {

		for (int j = 0; j < 7; j++) {

			if (Numero_Romano[i] == Numeros_Romanos[j]) {

				numero += Numeros_Arabes[j];

				if (i != 0) {

					for (int k = 6; k >= 0; k--) {

						if (Numeros_Romanos[k] == Numero_Romano[i - 1]) {

							numero -= (Numeros_Arabes[k] * 2);

						}

					}

				}

			}

		}

	}

	cout << numero;

	return 0;
	
}
