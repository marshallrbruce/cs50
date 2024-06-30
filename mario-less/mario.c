#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // establish that certain variables will be integers
    int height, spaces, columns, rows;
    // get user input for height and ensure it's an int from 1 to 8
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // print pyramid of height
    for (rows = 0; rows < height; rows++)
    {
        for (spaces = 0; spaces < height - rows - 1; spaces++)
        {
            printf(" ");
        }
        for (columns = 0; columns <= rows; columns++)
        {
            printf("#");
        }
        printf("\n");
    }
}
