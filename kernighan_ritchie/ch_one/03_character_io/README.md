A much better name for this section would have been **character input and output** (well now that is what it's named... just renamed it)

## useful stuff to know

CTRL + D is how to send the EOF (end of file) character in Ubuntu. I kept thinking it was either CTRL + Z or CTRL + C, but those just terminate the program, which was confusing to me.

## things I learned here...

- EOF (end of file) character is what C looks for when reading in a file to know when it is finished reading. The value of EOF in integer form is `-1`
- Although there is a "char" data type in C, it is more useful to read in each character as an integer
	* Afterall, every character we read in is ultimately just a bit pattern which can very easily be represented as an integer
	* Also, it is easier to handle the EOF (end of file) character as an integer since it is equal to negative one



