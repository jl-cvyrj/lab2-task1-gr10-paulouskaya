/* Аўтар: Караліна Паўлоўская */

/*
 * Рэалізацыя функцыі праверкі ліку на паліндром.
 */

#include "../../include/palindrome.h"
/*
 * Функцыя: is_palindrome
 *
 * Апісанне:
 *      Правярае, ці з'яўляецца натуральны лік паліндромам.
 *
 * Параметры:
 *      number  - лік для праверкі
 *
 * Вяртае:
 *      true  - калі лік паліндром
 *      false - у адваротным выпадку
 */

bool
is_palindrome(unsigned int number)
{
        unsigned int    original;
        unsigned int    reversed = 0;
        unsigned int    remainder;

        original = number;

        while (number > 0)
        {
                remainder = number % 10;
                reversed = reversed * 10 + remainder;
                number = number / 10;
        }

        return (original == reversed);
}