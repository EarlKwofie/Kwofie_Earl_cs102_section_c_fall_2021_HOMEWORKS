#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	
	char input[100];
	char fixed[100];
	


	printf("Enter any word: \n");
	
	int index = 0;

    scanf("%s", input);

	printf("\n");
	
	for(int i = 0; i < strlen(input); i++)
	{
		char upper = toupper(input[i]);
		fixed[i] = upper;
	}

	for(int i = 0; i < strlen(fixed); i++)
	{   
        if(fixed[i] == ' ')
        {
            printf("   ");
        }
		if( fixed[i] == 'A' || fixed[i] == 'Q' || fixed[i] == 'O' || fixed[i] == '1' )
		{
			printf(" # ");
			printf(" ");
		}
		else if( fixed[i] == 'B' || fixed[i] == 'P' || fixed[i] == 'R' || fixed[i] == 'D' )
		{
			printf("## ");
			printf(" ");
		}
		else if( fixed[i] == 'J' || fixed[i] == 'C' || fixed[i] == 'S')
		{
			printf(" ##");
			printf(" ");
		}
		else if( fixed[i] == 'L' )
		{
			printf("#  ");
			printf(" ");
		}
		else if( fixed[i] == 'H' || fixed[i] == 'M' || fixed[i] == 'V' || fixed[i] == 'W' || fixed[i] == 'X' || fixed[i] == 'Y' || fixed[i] == '4' || fixed[i] == 'K' )
		{
			printf("# #");
			printf(" ");
		}
		else
		{
			printf("###");
			printf(" ");
		}
				
	}
        
    printf("\n");

    for(int i = 0; i < strlen(fixed); i++)
    {
        if(fixed[i] == ' ')
        {
            printf("   ");
        }
         if( fixed[i] == 'T' || fixed[i] == 'I')
         {
             printf(" # ");
             printf(" ");
         }
         else if( fixed[i] == 'M')
         {
             printf("###");
             printf(" ");
         }
         else if( fixed[i] == 'J' || fixed[i] == 'Z' || fixed[i] == '2' || fixed[i] == '3' || fixed[i] == '7')
         {
             printf("  #");
             printf(" ");
         }
         else if( fixed[i] == 'C' || fixed[i] == 'E' || fixed[i] == 'G' || fixed[i] == 'L' || fixed[i] == 'S' || fixed[i] == '5' || fixed[i] == '6' )
         {
             printf("#  ");
             printf(" ");
         }
         else if( fixed[i] == '1' )
         {
             printf("## ");
             printf(" ");
         }
         else
         {
             printf("# #");
             printf(" ");
         }
     }

    printf("\n");

    for(int i = 0; i < strlen(fixed); i++)
    {
        if(fixed[i] == ' ')
        {
            printf("   ");
        }
         if( fixed[i] == 'C' || fixed[i] == 'L')
         {
             printf("#  ");
             printf(" ");
         }
         else if( fixed[i] == 'J' || fixed[i] == '7' )
         {
             printf("  #");
             printf(" ");
         }
         else if( fixed[i] == 'B' || fixed[i] == 'E' || fixed[i] == 'F' || fixed[i] == 'K' || fixed[i] == 'P' || fixed[i] == 'R' )
         {
             printf("## ");
             printf(" ");
         }
         else if( fixed[i] == 'D' || fixed[i] == 'G' || fixed[i] == 'N' || fixed[i] == 'O' || fixed[i] == 'Q' || fixed[i] == 'U' || fixed[i] == 'V' || fixed[i] == '0' )
         {
             printf("# #");
             printf(" ");
         }
         else if( fixed[i] == 'I' || fixed[i] == 'T' || fixed[i] == 'X' || fixed[i] == 'Y' || fixed[i] == 'S' || fixed[i] == 'Z' ||  fixed[i] == '1' )
         {
             printf(" # ");
             printf(" ");
         }
         else
         {
             printf("###");
             printf(" ");
         }
     }

    printf("\n");

    for(int i = 0; i < strlen(fixed); i++)
    {
        if(fixed[i] == ' ')
        {
            printf("   ");
        }

         if( fixed[i] == 'W')
         {
             printf("###");
             printf(" ");
         }
         else if( fixed[i] == 'Q')
         {
             printf("## ");
             printf(" ");
         }
         else if( fixed[i] == 'I' || fixed[i] == 'T' || fixed[i] == 'Y' || fixed[i] == '1' )
         {
             printf(" # ");
             printf(" ");
         }
         else if( fixed[i] == 'E' || fixed[i] == 'F' || fixed[i] == 'L' || fixed[i] == 'P' || fixed[i] == 'Z' || fixed[i] == '2' )
         {
             printf("#  ");
             printf(" ");
         }
         else if( fixed[i] == 'S' || fixed[i] == '3' || fixed[i] == '4' || fixed[i] == '5' || fixed[i] == '7' || fixed[i] == '9' )
         {
             printf("  #");
             printf(" ");
         }
         else
         {
             printf("# #");
             printf(" ");
         }
     }

    printf("\n");

    for(int i = 0; i < strlen(fixed); i++)
    {
        if(fixed[i] == ' ')
        {
            printf("   ");
        }
         if( fixed[i] == 'C' ||  fixed[i] == 'G')
         {
             printf(" ##");
             printf(" ");
         }
         else if( fixed[i] == 'B' ||  fixed[i] == 'D' ||  fixed[i] == 'S' )
         {
             printf("## ");
             printf(" ");
         }
         else if( fixed[i] == 'F' || fixed[i] == 'P' )
         {
             printf("#  ");
             printf(" ");
         }
         else if( fixed[i] == 'Q' || fixed[i] == '4' || fixed[i] == '7' )
         {
             printf("  #");
             printf(" ");
         }
         else if( fixed[i] == 'J' || fixed[i] == 'T' || fixed[i] == 'Y' || fixed[i] == 'V' || fixed[i] == 'O' )
         {
             printf(" # ");
             printf(" ");
         }
         else if( fixed[i] == 'A' || fixed[i] == 'H' || fixed[i] == 'K' || fixed[i] == 'M' || fixed[i] == 'N' || fixed[i] == 'R' || fixed[i] == 'X' )
         {
             printf("# #");
             printf(" ");
         }
         else
         {
             printf("###");
             printf(" ");
         }
     }
        printf("\n");

}


