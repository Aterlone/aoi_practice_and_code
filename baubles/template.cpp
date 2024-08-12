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
int g;
int answer = 1;
int answer1;
int answer2;
int true1 = 0;
int true2 = 0;

int main(void)
{
    /* Open the input and output files. */
    FILE *input_file = fopen("baublesin.txt", "r");
    FILE *output_file = fopen("baublesout.txt", "w");

    /* Read the values of a and b from the input file. */
    fscanf(input_file, "%d %d %d %d %d", &a, &b, &c, &d, &e);

    // See if either is bigger, and get the one that's less far from required paint,
    // and take that down to the required amount adding that value to the count

    fflush(output_file);

    if (d - a > 0)
    {
        c -= d - a - 1;
        a = d - 1;
        true1 = 1;
    }
    if (e - b > 0)
    {
        c -= e - b - 1;
        b = e - 1;
        true2 = 1;
    }
    if (c >= 0)
    {
        if (true1 && true2)
        {
            answer = c - 1;
        }
        else if (true1 || true2)
        {
            answer = c;
        }
        else
        {
            if (a - d < b - e)
            {
                answer = a - d + c;
                printf("a-d");
            }
            else if (a - d >= b - e)
            {
                answer = b - e + c;
                printf("b-e");
            }
            ++answer;
        }
    }
    else
    {
        answer = 0;
    }
    //++answer;
    // Subtract from the same one the amount in count

    //++answer

    /* Write the answer to the output file. */
    fprintf(output_file, "%d\n", answer);

    /* Finally, close the input/output files. */
    fclose(input_file);
    fclose(output_file);

    return 0;
}
