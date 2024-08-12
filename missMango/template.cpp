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
int answer;
int answer1;
int answer2;

int main(void)
{
    /* Open the input and output files. */
    FILE *input_file = fopen("manin.txt", "r");
    FILE *output_file = fopen("manout.txt", "w");

    /* Read the values of a and b from the input file. */
    fscanf(input_file, "%d %d %d %d", &a, &b, &c, &d);

    // a - b == c + d then it's inbetween the two
    if (abs(a - b) == c + d)
    {
        // it's between
        if (a < b)
        {
            answer = a + c;
        }
        else
        {
            answer = b + d;
        }
    }
    else
    {
        if (a < b)
        {
            if (c < d)
                answer = a - c;
            else
                answer = b + d;
        }
        else if (a > b)
        {
            if (c < d)
                answer = a + c;
            else
                answer = b - d;
        }
    }

    // if (a - b == c + d)
    // {
    //     // it's between
    //     if (a < b)
    //     {
    //         answer = a + c;
    //     }
    //     else
    //     {
    //         answer = b + d;
    //     }
    // }
    // else
    // {
    //     // it's not between
    //     if (a < b && c < d)
    //         answer = a - c;
    //     else if (a < b && d < c)
    //         answer = b + d;
    //     else if (b < a && c < d)
    //         answer = a + c;
    //     else if (b < a && d < c)
    //         answer = b - d;
    // }

    printf("%d", answer);
    /* Write the answer to the output file. */
    fprintf(output_file, "%d\n", answer);

    /* Finally, close the input/output files. */
    fclose(input_file);
    fclose(output_file);

    return 0;
}
