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
int w; // width
int h; // height
int o; // optimal
int m; // max
int answer = 1;
int answer1;
int answer2;
int main(void)
{
    /* Open the input and output files. */
    FILE *input_file = fopen("snapin.txt", "r");
    FILE *output_file = fopen("snapout.txt", "w");

    /* Read the values of a and b from the input file. */
    fscanf(input_file, "%d %d %d %d %d %d", &h, &w, &a, &b, &c, &d);
    if (w == 1 && h == 1)
    {
        fprintf(output_file, "%s\n", "DRAW");
    }
    else if (((a + c) + (b + d)) % 2 == 1)
    {
        fprintf(output_file, "%s\n", "ROSE");
    }
    else
    {
        fprintf(output_file, "%s\n", "SCARLET");
    }
    /* Write the answer to the output file. */

    /* Finally, close the input/output files. */
    fclose(input_file);
    fclose(output_file);

    return 0;
}
// simpletrex1234
// simplerex1234
// simplebeezwax1234