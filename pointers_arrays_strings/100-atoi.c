#include "main.h"


int _atoi(char *s)
{
	int i; /** check the size of the loop */
	int countingplus = 0; /** count + sign */
	int countingminus = 0; /** count - sign */
	int signnumber; /** take the sign of the number */
	int check0 = 0; /** check if digit exist in string */
	int size_of_number = 1; /** check the size of the number in string */
	int pow = 1; /** will permit the power of every digit in the final number */
	int n; /** the return value number in the string */

	for (i = 0; *(s + i) != '\0'; i++) /** count + and - in string */
	{
		if (*(s + i) == '+')
		{
			countingplus++;
		}
		else if (*(s + i) == '-')
		{
			countingminus++;
		}

		if ((*(s + i + 1) >= '0') && (*(s + i) <= '9')) /** calcul size of the number in string */
		{
			size_of_number++;
			pow = pow * 10;
			check0 = 1; /** if there is digit in the string */
		}
	}
	if (check0 == 0) /** check if no digit in the string */
	{
		return (0);
	}

	signnumber = (countingplus % 2) - (countingminus % 2); /** set the sign of the number that will be return*/

	if (signnumber >= 0)
	{
		signnumber = 1;
	}
	else
	{
		signnumber = (-1);
	}

	/** donne à n la valeur du nombre qui est dans la string*/
	for (i = 0; (((*(s + i) >= '0') && (*(s + i) <= '9') && (size_of_number >= 0)); i++)
	{
		n += ((*(s + i) - 48) * pow);
		size_of_number--;
		pow = pow / 10;
	}

	return (signnumber * n);
}
