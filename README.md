_printf
		Prints and formats data. The first argument it takes is a string to be 
		printed as chars, unless a '%' is found. In that case it checks the
		character next to the module for it to match one of its valid identifiers.
		In case it matches, it calls the function function associated to the 
		identifier character, to print the value of its corresponding argument.

		The arguments are accesed in sequential order once they recieve a valid
		identifier after the '%'.

		Returns the number of characters printed.

NAME
		_printf - format and print data

SYNOPSIS
		_printf FORMAT [ARGUMENT]...

DESCRIPTION

		Print arguments based on FORMAT. FORMAT is both a string to be printed
		and the IDENTIFIERS to call the ARGUMENT(s).

		Valid IDENTIFIERS

		%%		prints a single %

		%c		prints a char

		%s		prints a string

		%i		prints an integer

		%b		prints an int formatted into binary

		%x		formats into hex, lowercase

		%X		formats into hex, UPPERCASE

		%o		formats int into octal

		%S		prints a string with non-ascii written as hex


ARGUMENTS

		It takes many types of data as arguments, but only will print the types
		compatbile with the selected format.
		
		The program expects the user to match the type of the identifier with the
		type of the argument passed, and for them to be in the order they are from
		the identifiers. 


NONSTANDARD BEHAVIOUR

		If the FORMAT string contains more identifiers than the amount of 
		arguments it's passed, it will return error "-1";.

		If the function it's passed more arguments than identifiers 
		in the string, extra arguments are ignored.

		If an identifier its passed any other argument type than its expected type
		it falls into undefined behaviour (It will mostly break or print s***).

		If the last character of the string is a %, returns error "-1".

AUTHOR
       Written by Agustina Hernandez & Mauricio Heller.
