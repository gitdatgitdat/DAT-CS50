#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // Accept a singele command
    if (argc != 2)
    {
        printf("Usage: ./recover FILE\n");
    }

    // Open the memory card
    FILE *card = fopen(argv[1], "r");

    // Create buffer for a block of data
    uint8_t buffer[512];

    // While there's still data left to read from the memory card
    while(fread(buffer, 1, 512, card) == 512)
    {
        // Create JPEGs from the data
    }
}