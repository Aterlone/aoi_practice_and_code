#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int a, b, c, d, e, f, g, h;
int o; // optimal
int m; // max
int answer = 0;
int answer1;
int answer2;

int main(void)
{
    /* Open the input and output files. */
    FILE *input_file = fopen("rpsin.txt", "r");
    FILE *output_file = fopen("rpsout.txt", "w");

    /* Read the values of a and b from the input file. */
    fscanf(input_file, "%d", &g);
    fscanf(input_file, "%d %d %d", &a, &b, &c);
    fscanf(input_file, "%d %d %d", &d, &e, &f);

    while (g > 0)
    {
        if (a > 0)
        {

            if (e > 0)
            {
                --e;
                ++answer;
                printf("win");
            }
            else if (d > 0)
            {
                --d;
            }
            else if (f > 0)
            {
                --f;
                --answer;
            }
            else
            {
                break;
            }
            --a;
        }
        else if (b > 0)
        {

            if (f > 0)
            {
                --f;
                ++answer;
                printf("win");
            }
            else if (e > 0)
            {
                --e;
            }
            else if (d > 0)
            {
                --d;
                --answer;
            }
            else
            {
                break;
            }
            --b;
        }
        else if (c > 0)
        {

            if (d > 0)
            {
                --d;
                ++answer;
                printf("win");
            }
            else if (f > 0)
            {
                --f;
            }
            else if (e > 0)
            {
                --e;
                --answer;
            }
            else
            {
                break;
            }
            --c;
        }
        --g;
    }

    printf("%d", answer);
    /* Write the answer to the output file. */
    fprintf(output_file, "%d\n", answer);

    /* Finally, close the input/output files. */
    fclose(input_file);
    fclose(output_file);

    return 0;
}
