#include <stdlib.h>
#include <stdio.h>

void bubblesort(int *vetor , int tamanho)
{
	int aux;

	for(int i = 0; i < 6 ; i++)
	{
		for(int j = 0; j < 6; j++)
		{
			if(vetor[j]>vetor[j+1])
			{
				aux = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = aux;
			}
		}
	}

}
void insertionsort(int *vetor , int tamanho)
{
	for(int i = 1; i < 7 ; i++)
	{
		int aux,j;
		aux = vetor[i]; 

		for( j = i; vetor[j-1] > aux && j>0 ; j--)
		{
			vetor[j] = vetor[j-1]; 
		}
	vetor[j] = aux;
	}
}

void selectionsort(int *vetor , int tamanho)
{

	int i,j,menor,aux;

	if (tamanho<2)
		return; //nothing to sort

	for(i = 0 ; i < tamanho - 1 ; i++)
	{
		menor = i;
		for(j = i+1 ; j < tamanho ; j++)
		{
			if(vetor[menor] > vetor[j])
			{
				menor = j;
			}
		}
		aux = vetor[i];
		vetor[i] = vetor[menor];
		vetor[menor] = aux;
	}

}


int main()
{
	int vetor[7];

	for(int i = 0 ; i<7 ; i++)
	{
		scanf("%d",&vetor[i]);
	}

	selectionsort(vetor,7);

	for (int j = 0; j < 7; ++j)
	{
		printf("vetor[%d] armazena o valor : %d \n",j,vetor[j]);
	}
	


return 0;
}