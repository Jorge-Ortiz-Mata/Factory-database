
// Jorge Ortiz Mata. 
// 444 576 3034.
// San Luis Potosí S.L.P. México.

// ----------- Factory database .--------------

#include <iostream>
#include <stdlib.h>
using namespace std;

int CantOperariosDestacados (int num1)
{
	num1++;
	return num1;
}

int imprimirOperarios (char operarioNombre[], int num1)
{
	cout << endl;
	cout << "   El operario fue: " << operarioNombre << endl;
	num1++;
	return num1;
}

int main ()
{
	//Preguntar cuantos operarios son.
	
	int totalOperarios;
	
	cout << endl;
	cout << "\t			Examen   16-12-2021." << endl;
	cout << endl;
	cout << "	Por favor, introduce la cantidad total de operarios: ";
	cin >> totalOperarios;
	
	// Nombre de cada operario.
	
	cout << endl;
	cout << "	Ahora introduciras el nombre de cada operario." << endl;
	cout << endl;
	
	char nombreOperario[totalOperarios][50];
	
	for (int i = 0; i < totalOperarios; i++)
	{
		cout << " Ingresa el nombre del operario: " << i <<" por favor: ";
		cin >> nombreOperario[i];
	}
	
	//Total de rechazos de cada uno.
	
	cout << endl;
	cout << "	Ahora introduciras el total de rechazos de cada uno." << endl;
	cout << endl;
	
	int operarioRechazo[totalOperarios];
	
	for (int i = 0; i < totalOperarios; i++)
	{
		cout << " Ingresa el total de rechazos que tuvo el operario: " << nombreOperario[i] << " durante la jornada: ";
		cin >> operarioRechazo[i];
	}
	
	//En base a un número de defectos, de quienes se desea ver.
	
	int num2, num3;
	
	cout << endl;
	cout << "	Por ultimo, dime por favor que operarios deseas ver en base a un numero de rechazos determinado: ";
	cin >> num2;
	cout << endl;
	cout << "	Deseaste ver los operarios que sacaron: " << num2 << " rechazos." << endl;
	
	for (int i = 0; i < totalOperarios; i++)
	{
		if (operarioRechazo[i] == num2)
		{
			num3 = imprimirOperarios (nombreOperario[i], num3);
		}		
	}
	
	cout << endl;
	cout << "	Por lo que en total fueron: " << num3 << " operario(s)." << endl;
	
	//Cuantos operarios tuvieron un total de 0 defectos.
	
	int num1 = 0;
		
	for (int i = 0; i < totalOperarios; i++)
	{
		if (operarioRechazo[i] == 0)
		{
			num1 = CantOperariosDestacados (num1);
		}
	}
	
	//Resultados que se mostraran al final.
	
	cout << endl << endl;
	cout << "\t MAS RESULTADOS DEL PROGRAMA" << endl;
	cout << endl;
	cout << "	El total de operarios introducidos al inicio del programa fueron: " << totalOperarios << " con su respectiva cantidad de rechazos cada uno." << endl;
	cout << endl;
		for (int i = 0; i < totalOperarios; i++)
	{
		cout << "	El nombre del operario: " << i << " es: " << nombreOperario[i] << ". Y obtuvo un total de rechazos de: " << operarioRechazo[i] << "."<< endl;
	}
	cout << endl,
	cout << "	Y el total de operarios que tuvieron CERO rechazos son: " << num1 << " operario(s)." << endl;
	cout << endl;
	
	system ("PAUSE");
	return 0;
}

