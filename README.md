# printf project
DESCRIPTION
       The  function  produce  output  according to a format as described below, the output is written to stdout, the
       standard output stream.

FORMAT
       %i
               integer number

       %d
               integer number, the same as %i

       %c
               character

       %s
               string - prints (null) on null string

EXAMPLE

	int r;
        r =  _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
        _printf("%i", r);

output=  Loading ... 99% Please wait
	 28