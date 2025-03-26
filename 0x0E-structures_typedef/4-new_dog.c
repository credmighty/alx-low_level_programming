#include "dog.h"
#include <stdlib.h>

char *_strdup(char *s);
int _strlen(char *s);

/**
 * dog_t *new_dog - struct description
 * @name: 1st member
 * @age: 2nd member
 * @email: 3rd member
 */
dog_t *new_dog(char *name, float age, char *owner)
{
        dog_t *newdog_;

        newdog_ = malloc(sizeof(dog_t));
        if (newdog_ == NULL)
                return (NULL);
        newdog_->name = malloc(sizeof(char) * _strlen(name) + 1);
        if (newdog_->name == NULL)
        {
                free(newdog_);
                return (NULL);
        }
        newdog_->name = _strdup(name);
        newdog_->owner = malloc(sizeof(char) * _strlen(owner) + 1);
        if (newdog_->owner == NULL)
        {
                free(newdog_);
                free(newdog_->name);
                return (NULL);
        }
        newdog_->owner = _strdup(owner);
        newdog_->age = age;
        return (newdog_);
}

/**
 * _strlen - to count string
 * @s: arg to count
 * Return: the count
 */
int _strlen(char *s)
{
        int i = 0;

        while (s[i] != '\0')
        {
                i++;
        }
        return (i);
}

/**
 * _strdup - to duplicate string
 * @s: para to duplicate
 * Return: dest
 */
char *_strdup(char *s)
{
        char *dest;
        int i = 0;

        dest = malloc(sizeof(char) * _strlen(s) + 1);
        if (dest == NULL)
                return (NULL);
        while (i < _strlen(s))
        {
                dest[i] = s[i];
                i++;
        }
        dest[i + 1] = '\0';
        return (dest);
}
