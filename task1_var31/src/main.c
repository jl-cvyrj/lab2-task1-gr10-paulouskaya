/* Аўтар: Караліна Паўлоўская */

/*
 * Кліенцкі модуль.
 * Генеруе масіў і падлічвае колькасць паліндромаў.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "palindrome.h"

#define MAX_RANDOM 100000

static void
print_array(unsigned int *array, int size);

/*
 * Функцыя: main
 * Пункт ўваходу ў праграму.
 */
int
main(int argc, char *argv[])
{
        int             n;              /* памер масіва */
        unsigned int    *array;         /* масіў лікаў */
        int             i;              /* лічыльнік */
        int             count = 0;      /* колькасць паліндромаў */

        if (argc != 2)
        {
                printf("Не быў уведзены памер масіва\n");
                return 1;
        }

        n = atoi(argv[1]);

        if (n <= 0)
        {
                printf("Памер масіва павінен быць дадатным.\n");
                return 1;
        }

        array = malloc(n * sizeof(unsigned int));

        if (array == NULL)
        {
                printf("Памылка выдзялення памяці.\n");
                return 1;
        }

        srand((unsigned int)time(NULL));

        for (i = 0; i < n; i++)
        {
                array[i] = rand() % MAX_RANDOM + 1;
        }

        printf("Зыходны масіў:\n");
        print_array(array, n);

        for (i = 0; i < n; i++)
        {
                if (is_palindrome(array[i]))
                {
                        count++;
                }
        }

        printf("\nКолькасць лікаў-паліндромаў: %d\n", count);

        free(array);

        return 0;
}

/*
 * Функцыя: print_array
 *
 * Апісанне:
 *      Выводзіць элементы масіва на экран.
 */
static void
print_array(unsigned int *array, int size)
{
        int i;

        for (i = 0; i < size; i++)
        {
                printf("%u ", array[i]);
        }

        printf("\n");
}