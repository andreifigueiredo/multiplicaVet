#include <stdio.h>
#include <stdlib.h>

int main()
{
	int matriz[3][3];
	int vetor[3];
	int i, j;
	int soma[3];

	printf("Insira os elementos da matriz:\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("Insira os elementos do vetor:\n");
	for(j = 0; j < 3; j++)
	{
		scanf("%d", &vetor[j]);
	}

	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			soma[i] += matriz[i][j] * vetor[j];
		}
	}

	for(i = 0; i < 3; i++)
	{	
		printf("--%d--\n ", soma[i]);
	}
}
