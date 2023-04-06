#include "main.h"
#include <string.h>
int is_palindrome_helper(char *s, int y)
{
	int length;

	length = strlen(s);

	if (*s == '\0')
		return (1);
	else if (*s == s[length - y])
		return(is_palindrome_helper(s + 1, y + 1));
	else
		return (0);
}
int is_palindrome(char *s)
{
	return (is_palindrome_helper(s, 1));
}
