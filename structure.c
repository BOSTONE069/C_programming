#include <stdio.h>
#include <stdlib.h>

/**
 * A User is a struct with three fields: name, email, and age.
 * @property {char} name - The name of the user.
 * @property {char} email - The email address of the user.
 * @property {int} age - The age of the user.
 */
struct User
{
    char *name;
    char *email;
    int age;
};

/**
 * It creates a new user and returns a pointer to it
 *
 * @param name The name of the user.
 * @param email The email address of the user.
 * @param age The age of the user
 *
 * @return A pointer to a struct User.
 */
struct User *newUser(char *name, char *email, int age)
{
    struct User *user;

    user = malloc(sizeof(struct User));
    if (user == NULL)
     return NULL;
    user->name = name;
    user->email = email;
    user->age = age;
    return user;
}

/**
 * It creates a new user and returns a pointer to it
 *
 * @return A pointer to a struct User.
 */
int main(void)
{
    struct User *user;

    user = newUser("Bostone", "bostone@gmail.com", 79);
    if (user == NULL)
      return 1;
    printf("User %s created!\n", user->name);
    printf("His email is: %s\n", user->email);
    printf("His age is: %d\n", user->age);
    return 0;
}