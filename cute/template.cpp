#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

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
    FILE *input_file = fopen("cutein.txt", "r");
    FILE *output_file = fopen("cuteout.txt", "w");
    /* Read the values of a and b from the input file. */
    fscanf(input_file, "%d", &a);

    for (int i = a; i > 0; --i)
    {
        fscanf(input_file, "%d", &b);
        if (b == 0)
        {
            ++c;
        }
        else
        {
            c = 0;
        }
    }
    /* Write the answer to the output file. */
    fprintf(output_file, "%d\n", c);

    /* Finally, close the input/output files. */
    fclose(input_file);
    fclose(output_file);

    return 0;
}
