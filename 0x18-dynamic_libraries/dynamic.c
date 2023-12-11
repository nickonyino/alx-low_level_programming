#include "main.h"

/**
 * _putchar - puts character
 * @c: character to put
 * Return: character
 */

int _putchar(char c) {
    return write(1, &c, 1);
}

/**
 * _islower - writes character in lower case
 * @c: character to print
 * Return: charater
 */

int _islower(int c) {
    return (c >= 'a' && c <= 'z');
}

/**
 * _isalpha - writes all alphabetic characters
 * @c: character to write
 * Return: character
 */

int _isalpha(int c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/**
 * _abs - prints specific value
 *@n: specic value
 *Returns: value printed
 */

int _abs(int n) {
    return (n < 0) ? -n : n;
}

/**
 * _isupper - writes alphabet in uppercase
 *@c: the character to be printed
 *Return: character printed
 */
int _isupper(int c) {
    return (c >= 'A' && c <= 'Z');
}

/**
 *_isdigit - return intergers
 * @c: intergers returned
 * Return: succes if integers
 */
int _isdigit(int c)

{
    return (c >= '0' && c <= '9');
}

/**
 * _strlen - Returns the length of a string.
 * @s: The input string.
 * Return: The length of the string.
 */
int _strlen(char *s) {
    int len = 0;

    while (*s != '\0') {
        len++;
        s++;
    }

    return len;
}

/**
 * _puts - Prints a string to stdout.
 * @s: The input string.
 */
void _puts(char *s) {
    while (*s != '\0') {
        putchar(*s);
        s++;
    }
}

/**
 * _strcpy - Copies a string from src to dest.
 * @dest: The destination string.
 * @src: The source string.
 * Return: The pointer to the destination string.
 */
char *_strcpy(char *dest, char *src) {
    char *dest_ptr = dest;

    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';

    return dest_ptr;
}

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 * Return: The converted integer.
 */
int _atoi(char *s) {
    int result = 0;
    int sign = 1;

    while (*s == ' ' || (*s >= 9 && *s <= 13)) {
        s++;
    }

    if (*s == '-' || *s == '+') {
        sign = (*s == '-') ? -1 : 1;
        s++;
    }

    while (*s >= '0' && *s <= '9') {
        result = result * 10 + (*s - '0');
        s++;
    }

    return sign * result;
}

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * Return: The pointer to the destination string.
 */
char *_strcat(char *dest, char *src) {
    char *dest_ptr = dest;

    while (*dest != '\0') {
        dest++;
    }

    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';

    return dest_ptr;
}

/**
 * _strncat - Concatenates n characters from src to dest.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The number of characters to concatenate.
 * Return: The pointer to the destination string.
 */
char *_strncat(char *dest, char *src, int n) {
    char *dest_ptr = dest;

    while (*dest != '\0') {
        dest++;
    }

    while (*src != '\0' && n > 0) {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    *dest = '\0';

    return dest_ptr;
}

/**
 * _strncpy - Copies n characters from src to dest.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The number of characters to copy.
 * Return: The pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n) {
    char *dest_ptr = dest;

    while (*src != '\0' && n > 0) {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    while (n > 0) {
        *dest = '\0';
        dest++;
        n--;
    }

    return dest_ptr;
}

/**
 * _strcmp - Compares two strings.
 * @s1: The first string.
 * @s2: The second string.
 * Return: An integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2) {
    while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2) {
        s1++;
        s2++;
    }

    return (*s1 - *s2);
}

/**
 * _memset - Fills memory with a constant byte.
 * @s: The memory area to fill.
 * @b: The constant byte.
 * @n: The number of bytes to fill.
 * Return: The pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n) {
    for (unsigned int i = 0; i < n; i++) {
        s[i] = b;
    }
    return s;
}

/**
 * _memcpy - Copies memory area from src to dest.
 * @dest: The destination memory area.
 * @src: The source memory area.
 * @n: The number of bytes to copy.
 * Return: The pointer to the destination memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n) {
    for (unsigned int i = 0; i < n; i++) {
        dest[i] = src[i];
    }
    return dest;
}

/**
 * _strchr - Locates the first occurrence of a character in a string.
 * @s: The input string.
 * @c: The character to locate.
 * Return: The pointer to the first occurrence of c in s, or NULL if not found.
 */
char *_strchr(char *s, char c) {
    while (*s != '\0') {
        if (*s == c) {
            return s;
        }
        s++;
    }
    return NULL;
}

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The input string.
 * @accept: The set of characters to count.
 * Return: The number of bytes in the initial segment of s which consist only
 * of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;
    while (*s != '\0' && *_strchr(accept, *s) != '\0') {
        count++;
        s++;
    }
    return count;
}

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The input string.
 * @accept: The set of characters to search for.
 * Return: The pointer to the first occurrence in s of any character in accept,
 * or NULL if no such character is found.
 */
char *_strpbrk(char *s, char *accept) {
    while (*s != '\0') {
        if (*_strchr(accept, *s) != '\0') {
            return s;
        }
        s++;
    }
    return NULL;
}

/**
 * _strstr - Locates a substring.
 * @haystack: The input string.
 * @needle: The substring to locate.
 * Return: The pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle) {
    while (*haystack != '\0') {
        char *h = haystack;
        char *n = needle;
        while (*n != '\0' && *h == *n) {
            h++;
            n++;
        }
        if (*n == '\0') {
            return haystack;
        }
        haystack++;
    }
    return NULL;
}

