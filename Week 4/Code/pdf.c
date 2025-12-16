#include <cs50.h>
#include <stdint.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // Check for usage, must be 2 commands
    if (argc != 2)
    {
        printf("Usage: please provide one filename\n");
        return 1;
    }

    // Open file
    FILE *input = fopen(argv[1], "r");

    // Create buffer
    uint8_t buffer[4];

    // Create an array for signature bytes
    uint8_t signature[] = {0x25, 0x50, 0x44, 0x46};

    // Ready first 4 bytes
    fread(buffer, sizeof(uint8_t), 4, input);

    // Check the first 4 bytes against signature bytes
    for (int i = 0; i < 4; i++)
    {
        // If they don't match, report this is not a pdf and end
        if (signature[i] != buffer[i])
        {
            printf("This is not a pdf.\n");
            return 0;
        }
    }

    // Success!
    printf("This is a pdf.\n");

    // Close file
    fclose(input);
    return 0;
}