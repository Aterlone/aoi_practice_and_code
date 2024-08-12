#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>

int a;
int b;
int c;
int d;
int e;
int o; // optimal
int m; // max
int answer = 1;
int answer1;
int answer2;

int main(void)
{
    /* Open the input and output files. */
    FILE *input_file = fopen("vasesin.txt", "r");
    FILE *output_file = fopen("vasesout.txt", "w");

    /* Read the values of a and b from the input file. */
    fscanf(input_file, "%d", &a);

    if (a <= 5)
    {
        answer = 0;
        answer1 = 0;
        answer2 = 0;
    }
    else
    {
        answer = (a - a % 3) / 3 - 1;
        answer1 = (a - a % 3) / 3;
        answer2 = (a - a % 3) / 3 + 1 + a % 3;
    }

    printf("%d %d %d", answer, answer1, answer2);
    /* Write the answer to the output file. */
    fprintf(output_file, "%d %d %d\n", answer, answer1, answer2);

    /* Finally, close the input/output files. */
    fclose(input_file);
    fclose(output_file);

    return 0;
}
