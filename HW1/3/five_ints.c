#include <stdio.h>
#define AR_SIZE 5
#define SUCCESS 0
int main()
{
	int mean, median, mode, freq;
	int input[AR_SIZE];

	//Asks for 5 integer outputs 
	printf("Enter 5 integers: \n");

	//Recieves 5 interger inputs
	for(int i = 0; i < AR_SIZE; i++)
	{
		scanf("%d", &input[i]);
	}


	//insertion sort
	for(int i = 1; i < AR_SIZE; i++)
	{
		for(int j = i; j > 0; j--)
		{
			if(input[j] < input[j-1])
			{
				int l = input[j];
				int g = input[j-1];

				input[j] = g;
				input[j-1] = l; 
			}
		}
	}
	
	//Finds Mean, Meadian, Mode
	freq = 1;
	mode = input[0];
	int count = 0;

	for(int i = 0; i < AR_SIZE; i++)
	{
		mean = mean + input[i];
		int test = input[i];

		for( int j = 0; j < AR_SIZE; j++)
		{
			if( input[j] == test )
			{
				count++;
			}	
		}
		
		if( count > freq )
		{
			mode = test;
			freq = count;
		}
		
		count = 0;
	}

	mean = mean / AR_SIZE;
	median = input[2];
	
	//Prints results
	printf( "Mean: %d, Median: %d, Mode: %d \n", mean, median, mode);


	return SUCCESS;
}
