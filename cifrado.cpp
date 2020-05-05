#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;

//funcion para solicitar la frase al usuario
void caracterMatriz(string matriz[3][30])
{
	//declaramos la variable para guardar cada valor
	char oracion[30];
	int longitud;
	
	cout << "Ingrese una oracion" << endl;
	//usamos getline para leer un texto grande  tomando en cuenta tambien sus espacios
	cin.getline(oracion,30);
	
	//ciclo para ver la longitud de la cadena
	for(longitud=0; oracion[longitud] !=0; longitud++){
		

	}
		cout<<"la cadena "<<oracion<<" tiene "<<longitud<<" caracteres " << endl;
	
	//ciclo para llenar la matriz de 3*30
	for(int columna=0; columna<30; columna++)
	{
	 
		//ciclo para llenar la primera fila
	 	for(int aux=0; aux<longitud; )
		{
	 		matriz[0][aux] = oracion[aux];
	 		aux = aux+4;
		}
		
		//ciclo para llenar la segunda fila
	 	for(int aux=0; aux<longitud; )
		{
	 		matriz[1][aux+1] = oracion[aux+1];
	 		aux = aux+2;
		}
		
		//ciclo para llenar la tercera fila
		for(int aux=0; aux<longitud; )
		{
	 		matriz[2][aux+2] = oracion[aux+2];
	 		aux = aux+4;
		}		
		
	}
	
	//ciclo para mostrar lo que tiene cada fila
	for(int a=0; a<3; a++)
	{
		
		cout<<"la fila " << a+1 << " es: ";
		
		//ciclo para mostrar el mensaje concatenado
		for(int i=0; i<30; i++)
		{
			cout<<matriz[a][i];
		}
	
		cout<<endl;	
	}
	
	cout<<"el resultado final es: ";
	
	//ciclo para mostrar el mensaje concatenado de cada fila
	for(int a=0; a<3; a++)
	{
		for(int i=0; i<30; i++)
		{
			cout<<matriz[a][i];
		}
		
	}
	
	
}
	


int main ()
{
	//En esta matriz pondremos cada caracter
	string matriz[3][30];

	//funcion para pedir la frase u oracion	
	caracterMatriz(matriz);
	
	return 0;
}
