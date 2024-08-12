

#include <cstdio>

int a;
int b;
int answer;

int main(void)
{
    /* Open the input and output files. */
    FILE *input_file = fopen("ninjain.txt", "r");
    FILE *output_file = fopen("ninjaout.txt", "w");

    /* Read the values of a and b from the input file. */
    fscanf(input_file, "%d %d", &a, &b);

    int ignoreCount = 0;
    // a is ninja count
    // b is the number of ninjas that pass for each ninja we catch

    // subtract one from a
    // if a < b add a to answer
    // otherwise subtract b from a and add b to answer
    while (a > 0)
    {
        --a;
        if (a >= b)
        {
            answer += b;
        }
        else
        {
            answer += a;
        }
        a -= b;
    }

    printf("%d", answer);
    /* Write the answer to the output file. */
    fprintf(output_file, "%d\n", answer);

    /* Finally, close the input/output files. */
    fclose(input_file);
    fclose(output_file);

    return 0;
}