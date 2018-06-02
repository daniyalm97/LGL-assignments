"strings.h" is a custom header file that implements the following string functions

int str_len(a)        - returns length of string 'a' as a integer.

char str_cpy(a,b)     - copies 'a' to 'b' and returns 'b' as string.

char str_ncpy(a,b,n)  - copies 'n' characters of 'a' to 'b' and returns 'b' as string.

int str_cmp(a,b)      - returns '0' if strings 'a' and 'b' are matched and '1' if not.

int str_ncmp(a,b,n)   - returns '0' if 'n' characters of 'a' and 'b' are matched and '1' if not.

char str_cat(a,b)     - concatenates string 'a' to 'b' and returns 'a' as string.

char str_ncat(a,b,n)  - concatenates 'n' characters of 'a' to 'b' and returns 'a' as string.

int str_chr(a,b)      - searches for character 'b' in string 'a' and returns index of 'b' as integer.

int str_str(a,b)      - searches for substring 'b' within 'a' and returns index of first character of 'b' as integer.

char str_tok(a)       - eliminates the tokens(special characters) from 'a' and returns 'a' as string.

USAGE:

#include"strings.h" // header file within double quotes indicates perprocessor to search in current directory as opposed to
                   
                    // angular brackets which indicate preprocessor to search in default directory

int len = str_len(a); //function call with string 'a' as parameter

KNOWN ISSUES:

1. str_cmp() and str_ncmp() do not return polar values based on comparision of the two string parameters.
