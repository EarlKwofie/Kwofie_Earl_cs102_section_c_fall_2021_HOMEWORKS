String Sort 

SYNOPSIS/ ALGORITHM  

Step 1: Ask for String Inputs  
Step 2: Take in String Inputs  
Step 3: Insertion Sort  
Step 3a: Take the first character of the given string  
Step 3b: Find the decimal notation  
Step 3c: Compare to the decimal notation of the first chars in previous strings  
Step 3d: Swap Accordingly  
Step 4: Print Results  

PSEUDO CODE

			function StringSort
			{	
				inputs
				
				Ask for strings 
				
				Add strings into the inputs array

					for(a = from the index 1 to the end of the array )
					{
						for(b =  the current index to 1 )
						{	
							if( the char at index b is less than b-1 )
							swap
						}
					}
					
				print results
			}
