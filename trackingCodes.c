#include <stdio.h>
void size(int);
int main(void)
{
    int total = 0;

    scanf("%d", &total);
    size(total);

    return 0;
}

void size(int total)
{
    int tracker = 0;
    char type;
    int count = 0;
    int totalSize = 0;
    int exit = 0;

    for (count = 0; count < total; count++)
    {
        scanf("%d %c", &tracker, &type);

        if (type == 'i')
        {

            totalSize = totalSize + (sizeof(int) * tracker);
        }
        else if (type == 'd')
        {
            totalSize = totalSize + (sizeof(double) * tracker);
        }
        else if (type == 'c')
        {
            totalSize = totalSize + (sizeof(char) * tracker);
        }
        else
        {
            printf("Invalid tracking code type");
            count = total + 1;
            exit = 1;
        }
    }
    if (!exit)
    {
        printf("%d bytes\n", totalSize);
    }
}
