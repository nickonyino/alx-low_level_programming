#include "main.h"

/**
 * _islower - prints lower alphets
 * @c - character printed 
 * Return - 0 on success
 */

int _islower(int c)
{
	return (c >= 'a' && c =< 'z');

}

/**
 *_isalpha - writes alphabets 
 *@c - character to be written
 *Return - 0 on success
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c =< 'z') || (c >= 'A' && c =< 'B'));
}
