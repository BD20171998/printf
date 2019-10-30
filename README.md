# printf

## Description
The function _printf() produces given output to the standard output stream. Data for output can be given by enclosing text within quotes and using special characters such as %i to tell the function. _printf writes the output under a format that specifies how arguments and special characters are to be converted for the output.
## files
helper_funcs.c - helper functions that contain functions to help convert the data
helper_funcs2.c - more helper functions that help convert data for the standard output
printf.c - main printf function that handles the given data and starts working with other functions to write it to the standard output
holberton.h - header files containing all prototypes
man_3_printf - man page for _printf
## what _printf does
_printf copies the given characters and variables, transforms the output and then copies it to the standard output as well as returns an int which is the length of all the cars in the output.
## requirements
Need to include the C files listed in the repo as well as the header so printf can properly run using other functions.
## Uses
To print something with values you do not know you will need till later.
## output
prints the entire string given within the doulbe quotes after it has processed all special characters.
## examples
_printf("This is a string");
_printf("This is a %s", word);
_printf("%i is 100", num);
## available format specifiers
d, i: The int argument is converted to decimal notation. Using i specifies the function to get a varaible and print it of type integer.
o, u, x, X: The unsigned int argument is converted to unsigned octal (o), unsigned decimal (u), or unsigned hexadecimal (x,X). abcdef are used for (x) while (X) takes ABCDEF.
c: The argument given is converted from an Integer to an unsigned char and the result will be put into the output.
s: Copies from the variable given all the way to the null byte character ('\0').
## authors

Made for Holberton By Kyle Campbell & Bob Deprizio.
