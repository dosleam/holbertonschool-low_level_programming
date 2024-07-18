#include "variadic_functions.h"

/**
 * print_all - print anything
 * @format: a list of types of arguments passed to the function
 * @...: the variable arguments to be printed
 *
 * Description: This function prints arguments of various types based on the
 * format string passed to it. Supported types are:
 * c: char
 * i: integer
 * f: float
 * s: char* (if the string is NULL, print (nil) instead)
 * Any other character in the format string is ignored.
 */

void print_all(const char * const format, ...)
{
	va_list list; /* Déclare une variable pour contenir la liste des arguments*/
	int i = 0; /* Initialise une variable d'index pour la chaîne de format */
	char *str; /* Déclare un pointeur pour contenir les arguments de typ chaine */
	const char *separator = ""; /* Initialise une chaîne pour utiliser comme sépareur */

	va_start(list, format); /* Initialise la liste des arguments variables */

	while (format && format[i]) /* Boucle a travers chaque caractère de la cine de format*/
	{
		if (format[i] == 'c' || format[i] == 'i' ||
				format[i] == 'f' || format[i] == 's') /* Vérifie si le caractère actuel du form est un spécificateur de type valide */
		{
			printf("%s", separator); /* Imprime le séparateur avant l'argument */

			if (format[i] == 'c') /* Traite les différents types d'arguments en fonction du carace�re de format */
				printf("%c", va_arg(list, int)); /* Imprime un argument de type caractère */
			else if (format[i] == 'i')
				printf("%d", va_arg(list, int)); /* Imprime un argument de type entier */
			else if (format[i] == 'f')
				printf("%f", va_arg(list, double)); /* Imprime un argument de type flottant */
			else if (format[i] == 's')
			{
				str = va_arg(list, char *); /* Récupère l'argument de type chaîne */
				if (str == NULL)
					printf("(nil)"); /* Imprime (nil) si la chaîne est NULL */
				else
					printf("%s", str); /* Imprime l'argument de type chaîne */
			}

			separator = ", "; /* Met a jour le séparateur à ", " après le premier argument */
		}

		i++; /* Passe au caractère suivant dans la chaîne de format */
	}
	printf("\n"); /* Imprime un retour a la lign a la fin de la stie */
	va_end(list); /* Nettoie la liste des arguments variables */
}
