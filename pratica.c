#include <stdlib.h>
#include <stdio.h>

void bubblesort(int *vetor,int tamanho)
{
	int aux;

	if (tamanho<2)
		return;
	for(int i=0; i<tamanho-1; i++)
	{
		for(int j=0; j<tamanho-1;j++)
		{
			if (vetor[j]>vetor[j+1])
			{
				aux = vetor[j];
				vetor[j] = vetor [j+1];
				vetor[j+1] = aux;
			}
		}
	}
}

void insertionsort(int *vetor,int tamanho)
{
	if (tamanho<2)
		return;
}





int main(){

	int vetor[7];

	for(int i = 0 ; i<7 ; i++)
	{
		scanf("%d",&vetor[i]);
	}

	bubblesort(vetor,7);

	for (int j = 0; j < 7; ++j)
	{
		printf("vetor[%d] armazena o valor : %d \n",j,vetor[j]);
	}

	return 0;
}
