#include <stdio.h>
main()
{
    char line[81], character;
    int c;
    c = 0;
    printf("Enter text Press <Return> at end\n");
    do
    {
        character = getchar();
        line[c] = character;
        c++;
    } while (character !='\n');
    c = c - 1;
    line[c] = '\0';
    printf("%s", line);
}