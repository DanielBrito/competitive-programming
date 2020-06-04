/* https://www.codingame.com/ide/puzzle/the-descent */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the mountain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
 **/

int main()
{
    
    // game loop
    while (1) {
        
        int destroy = 0;
        int aux = 0;
        
        for (int i = 0; i < 8; i++) { // represents the height of one mountain.
            
            int mountainH;
            scanf("%d", &mountainH);
            
            if(mountainH>destroy){
                destroy = mountainH;
                aux = i;
            }
        }

        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");

        printf("%d\n", aux); // The index of the mountain to fire on.
    }

    return 0;
}