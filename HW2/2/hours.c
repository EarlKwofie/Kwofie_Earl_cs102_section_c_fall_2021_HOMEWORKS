#include <stdio.h> 

int main()
{
    int hours, minutes;
    
    printf("Enter minutes: \n");
    
    scanf("%d", &minutes); 
   
    for(hours = 0; minutes >= 60; minutes = minutes - 60)
    {   
        hours++;
    }
    
    printf("Hours: %d, Minutes: %d\n", hours, minutes);
   
     return 0;
    
}
