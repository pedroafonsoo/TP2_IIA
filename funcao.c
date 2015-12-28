#include "funcao.h"

    //Vai calcular a qualidade de uma determinada solução
	//Vai receber:Solucao, matriz, numero de vertices
	//Retorna o custo, sendo custo=n_elem

int calcula_fit(int a[], int*matr,int nvert)
{
	int n_elem, valido, i, j;
	n_elem = 0; 
	valido = 1;

	for (i = 0;i < nvert;i++){
		if (a[i] == 1)
		{
			for (j = 0; j < nvert;j++)
				if (a[j] == 1 && matr[i][j]==1)
				{
					valido = 0;
					return valido;
				}
				else
					n_elem++;
		}
		return n_elem;
	}
}

