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
    FILE *input_file = fopen("origamiin.txt", "r");
    FILE *output_file = fopen("origamiout.txt", "w");

    /* Read the values of a and b from the input file. */
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int noDown = (int)(b / d);
    int noSide = (int)(a / c);

    answer = noDown * noSide;

    printf("%d", answer);
    /* Write the answer to the output file. */
    // fprintf(output_file, "%d\n", answer);

    // /* Finally, close the input/output files. */
    // fclose(input_file);
    // fclose(output_file);

    return 0;
}
