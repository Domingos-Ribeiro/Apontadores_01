
#include <iostream>
using namespace std;
#include<time.h>


struct ficha
	{
		string nome;
		int idade;
	};

int GeraValor(int limite_inferior, int limite_superior)
	{
	int n;
	srand(time(NULL));
	n = limite_inferior + rand() % (limite_superior);
	return n;
	}

void init_array(ficha meuArrayDeFichas[])
	{
	for (size_t i = 0; i <= 2; i++)
		{
		cout << "Nome?";
		cin >> meuArrayDeFichas[i].nome;
		meuArrayDeFichas[i].idade = GeraValor(20, 30);
		}
	}

void print_array(ficha meuArrayDeFichas[])
	{
		
	}


int main()
{
	// Array
	ficha meuArrayDeFichas[3];

	// Preencher o array
	init_array(meuArrayDeFichas);

	// Listar o array na consola
	print_array(meuArrayDeFichas);
}



