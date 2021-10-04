#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#define SUCCESS 0
#define AR_SIZE 3

int main()
{
	char input[AR_SIZE][100];

	printf("Enter 3 strings(words): \n");

	for(int i = 0; i < AR_SIZE; i++)
	{
		scanf("%s", input[i]);
	}
	
	printf( "\n\n Unsorted List:\n");

	for(int i = 0; i < AR_SIZE; i++)
	{
		printf("%s \n", input[i]);
	}

	printf("\n");

	for( int i = 1; i < AR_SIZE; i ++)
	{
		for(int j = i; j > 0; j--)
		{
			int k = 0;
		        int l, g;

			do
			{
                            l = input[j][k];
		            g = input[j-1][k];
			
		       	        if( l < g)
				{
					char less[100], great[100];
					
					strcpy(less, input[j]);
					strcpy(great, input[j-1]);

					strcpy(input[j-1],less);
					strcpy(input[j],great);
				}
				k++;
			}while(l == g);
		}
	}

	printf("\n Sorted List: \n");

        for(int i = 0; i < AR_SIZE; i++)
        {
		 printf("%s \n", input[i]);

	}


	return SUCCESS;
}
