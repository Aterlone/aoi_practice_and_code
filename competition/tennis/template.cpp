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
int answer = 0;
int answer1;
int answer2;
int instruct = 0;
int contZ = 0;
int total = 0;
struct doubleT
{
    int a[2];
};
doubleT m[300000];
int n[300000];

int main(void)
{
    /* Open the input and output files. */
    FILE *input_file = fopen("tennisin.txt", "r");
    FILE *output_file = fopen("tennisout.txt", "w");

    /* Read the values of a and b from the input file. */
    fscanf(input_file, "%d %d", &a, &b);

    for (int i = 0; i < a; ++i)
    {
        fscanf(input_file, "%d", &n[i]);
        // printf("%d\n", n[i]);
    }
    for (int i = 0; i < b; ++i)
    {
        fscanf(input_file, "%d %d", &m[i].a[0], &m[i].a[1]);
        // printf("%d %d\n", m[i].a[0], m[i].a[1]);
    }

    while (total < 150000000)
    {
        // printf("%d", n[m[instruct].a[0]]);
        if (n[m[instruct].a[0] - 1] == 0)
            break;

        --n[m[instruct].a[0] - 1];
        ++n[m[instruct].a[1] - 1];
        ++answer;
        ++instruct;
        if (instruct == b)
        {
            instruct = 0;
        }
        ++total;
    }
    if (total >= 140000000)
    {
        fprintf(output_file, "%s\n", "FOREVER");
    }
    else
    {
        fprintf(output_file, "%d\n", answer);
    }
    printf("%d", answer);

    /* Finally, close the input/output files. */
    fclose(input_file);
    fclose(output_file);

    return 0;
}
