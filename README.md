# levenshtein_in_c
Calculating Levenshtein Distance in pure C with only inbuilt libraries
Simple program based on pure Lavenshtein Distance Algorithm which calculates and returns the minimum number of steps required to transform a string into another.
This program is in C and does not require any additional libraries.
Lavenshtein Distance can have huge implementations, such as in programs that predicts the nearest word.

Basically, Lavenshtein Conversion is based on just three fundamentals: 1.INSERT 2.SUBSTITUTE 3. DELETE


Example of Lavenshtein Distance:
To transform 'kitten' (primary string) into 'sitting' (secondary string):
Step 1: Add an element to primary string such that length of primary equals length of secondary.
Step 2: Starting from Index 0 (or first element of primary & secondary), equate them, if they are not equal, add 1 to steps count. 
Total Steps (return value)=3

For more info on Lavenshtein Distance, search Wikipedia!
