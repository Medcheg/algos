#include <stdio.h>
#include <stdlib.h>

#define size_x 135
#define size_y 45

int m[size_x][size_y];

// View labirint on screen
void view()
{
    int x, y;

    for ( y=0; y < size_y; y++)
    {
        for ( x=0; x < size_x; x++)
        {
            if (m[x][y] == 0)
                printf (" ");
            else
                printf ("▒");// ░ ▒ ▓ █
        }
        printf("\n");
    }
}

int main(void)
{
    int i, x, y;

//    for ( y = 0; y < 6550; y++)
//        printf( "%6d \t %c\n", y, (char)y );

//    exit(1);


        // Clear
    for ( y = 0; y < size_y; y++)
        for ( x = 0; x < size_x; x++)
            m[x][y] = 1;

    // Generate
    for ( y = 1; y < size_y-1; y++)
    {
        for ( x = 1; x < size_x-1; x++)
        {
            m[x][y] = (rand() < 0.85*RAND_MAX) ? 0 : 1;
        }
    }


    view();

    return 0;
}

