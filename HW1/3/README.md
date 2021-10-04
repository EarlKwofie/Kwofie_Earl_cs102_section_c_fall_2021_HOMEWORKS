MEAN, MEDIAN, MODE

SYNOPSIS/ ALGORITHM 

Step 1: Prints out statement asking for 5 integers
Step 2: Takes in 5 inputs 
Step 3: Sorts the 5 inputs using an insertion sort
Step 4: Find the median of the inputs
Step 5: Finds the total sum, and the mean of the inputs
Step 6: While adding up to find the sum, the same loop discovers what the mode is
Step 7: Prints the results

PSUEDOCODE

	FUNCTION 3 M's
	{
		Get the 5 inputs 
		
		for( starting from index i =  1 to the end of the array )
			{
				for( starting from the index j = i to 0)
				{
					if( the current integer at index j is less than the one at j-1)
						
						switch places 
				} 
			}
			
			set the input at index 2 to be the median

		for( the whole array )
		{
			add the integer at the given index to the total sum
				
					for( the whole array )
					{
						if ( the integer at the index of this for loop is equal to the one above)
							
							add to the count of appeearances
					}

		if( the appearences of the integer at this index are greater than the greatest amount of the appearances)
			
		its the new mode
		}
		
		mean = the total sum / the length of the input array (5) 
}

