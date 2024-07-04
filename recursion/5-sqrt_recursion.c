#include "main.h"

/**
 * helper - Aide à la recherche de la racine carrée en utilisant la récursion
 * @n: Le nombre dont on cherche la racine carrée
 * @guess: La valeur actuelle du test de la racine carrée
 *
 * Return: La racine carrée naturelle de n ou -1 si elle n'existe pas
 */

int helper(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return helper(n, a + 1);
}

/**
 * _sqrt_recursion - Renvoie la racine carrée naturelle d'un nombre
 * @n: Le nombre dont on cherche la racine carrée
 *
 * Return: La racine carrée naturelle de n ou -1 si elle n'existe pas
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return helper(n, 0);
}
