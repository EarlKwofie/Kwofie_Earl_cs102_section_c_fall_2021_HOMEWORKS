Banner script: based off the lettering from https://patorjk.com/

Step 1: Recieves an input string (up to 100 characters, excluding spaces)  
Step 2: Sets them to be uppercase letters  
Step 3: Per Row, determines the combination of HASH characters based on the char recursively  
Step 4: Prints HASH character pattern and a space between   



PSUDEOCODE

                    banner()
                    {
                        input array, upper case array 
                        
                        sets input chars to upper case
                        
                         for( the length of input )
                         {
                                set the char at the given index to the given index of upper case array 
                         }
                            
                         for( the length of the upper case array )
                         {  
                            if( a certain char )
                            else if( another certain char )
                            .
                            .
                            .
                            else { print what most of the chars have in this row and a space }
                          }
                          .
                          .
                          . repeat 4 more times and print a new line

                    }
