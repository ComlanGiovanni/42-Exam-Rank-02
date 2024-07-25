Assignment name  : moment
Expected files   : moment.c
Allowed functions: malloc, free
--------------------------------------------------------------------------------

Create a function that takes a duration in seconds as parameter and returns a 
string with the number of seconds, minutes, hours, days or months elapsed.
This function supposes that months are 30-days long and ignores leap years.

The format of this string will be :
    
	xxx {second(s)|minute(s)|hour(s)|day(s)|month(s)} ago.

Your function should return the lowest possible value (as you can see below
in the examples).

The prototype of this function will be :
    
    char    *moment(unsigned int duration)

Examples:

moment(0)       => 0 seconds ago.
moment(1)       => 1 second ago.
moment(30)      => 30 seconds ago.
moment(65)      => 1 minute ago.
moment(120)     => 2 minutes ago.
moment(2400)    => 40 minutes ago.
moment(3735)    => 1 hour ago.