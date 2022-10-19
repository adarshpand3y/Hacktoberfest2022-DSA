#include <stdio.h>
#include <string.h>

int main()
{
    char array[100][100], str[10];
    int n, i, j;
    printf("Number of strings:\n");
    scanf("%d", &n);
    printf("Enter the strings:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%s", array[i]);
    }
    printf("Enter the string to search:\n");
    scanf("%s", str);
    for (j = 0; j < n; j++)
    {
        if (strcmp(str, array[j]) == 0)
        {
            printf("%s was found at index: %d", str, j);
            break;
        }
        if (j == n)
        {
            printf("%s not found in array.", str);
        }
    }
    return 0;
}