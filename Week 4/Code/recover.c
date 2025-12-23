#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define BLOCK_SIZE 512

int main(int argc, char *argv[])
{
    // Accept a singele command
    if (argc != 2)
    {
        printf("Usage: ./recover FILE\n");
        return 1;
    }

    // Open the memory card
    FILE *card = fopen(argv[1], "r");
    if (card == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    // Create buffer for a block of data
    uint8_t buffer[BLOCK_SIZE];

    // Currently opened JPEG or null if none yet
    FILE *img = NULL;

    // Number of JPEGs
    int jpg_count = 0;

    // Naming JPEG files
    char filename[0];

    // While there's still data left to read from the memory card
    while(fread(buffer, 1, sizeof(buffer), card) == sizeof(buffer))
    {
        // Create JPEGs from the data
        if (buffer[0] == 0xff &&
            buffer[1] == 0xd8 &&
            buffer[2] == 0xff &&
            (buffer[3] & 0xf0) == 0xe0)
        {
            // If a new JPEG file discovered
            if (img != NULL)
            {
                // Closer current file
                fclose(img);
            }
            // Else open a new JPEG and write this block to it
            else


        }
        else
        {
            // If currently writing a JPEG, write this block to it
            // Else do nothing
        }
    }

    fclose(card);
    return 0;
}