#include <cstdio>
#include <cstdlib>

int a;
int b;
int c;
int answer;

int main(void)
{
    /* Open the input and output files. */
    FILE *input_file = fopen("piratein.txt", "r");
    FILE *output_file = fopen("pirateout.txt", "w");

    /* Read the values of a and b from the input file. */
    fscanf(input_file, "%d %d %d", &a, &b, &c);

    answer = a - b + a - c;
    printf("%d", answer);
    printf("%d", (b - 0 + c - 0));
    if (b - 0 + c - 0 < answer)
        answer = b - 0 + c - 0;

    /* Write the answer to the output file. */
    fprintf(output_file, "%d\n", answer);

    /* Finally, close the input/output files. */
    fclose(input_file);
    fclose(output_file);

    return 0;
}