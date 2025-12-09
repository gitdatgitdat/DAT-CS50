#include <cs50.h>
#include <stdio.h>

for main(int argc, char *argv[])
{
    // Command line arguments check
    if (argc != 4)
    {
        printf("Usage: ./volume input.wave output.wav fator\n");
        return 1;
    }

    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    FILE *output = fopen(argv[2], "w");
    if (output == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    float factor = atof(argv[3]);

    // TO DO: Cpy head from input file to output file

    // TO DO: Read samples from input file and write updated data to output file

    fclose(input);
    fclose(output);
}