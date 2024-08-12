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
int answer = 0;
int answer1;
int answer2;

int main(void)
{
    /* Open the input and output files. */
    FILE *input_file = fopen("cultin.txt", "r");
    FILE *output_file = fopen("cultout.txt", "w");

    /* Read the values of a and b from the input file. */
    fscanf(input_file, "%d", &a);
    while (!((a) % 2))
    {
        if (!((a) % 2))
        {
            a /= 2;
            ++c;
        }
    }

    printf("%d", answer);
    /* Write the answer to the output file. */
    fprintf(output_file, "%d %d\n", a, c);

    /* Finally, close the input/output files. */
    fclose(input_file);
    fclose(output_file);

    return 0;
}
