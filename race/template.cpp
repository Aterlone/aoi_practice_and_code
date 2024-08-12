#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
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
    FILE *input_file = fopen("nortin.txt", "r");
    FILE *output_file = fopen("nortout.txt", "w");

    /* Read the values of a and b from the input file. */
    fscanf(input_file, "%d %d", &a, &b);

    answer = a * b;
    if (a % 2 == 1 && b % 2 == 1)
        --answer;

    printf("%d", answer);
    /* Write the answer to the output file. */
    fprintf(output_file, "%d\n", answer);

    /* Finally, close the input/output files. */
    fclose(input_file);
    fclose(output_file);

    return 0;
}
