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
int answer = 0;
int answer1;
int answer2;

int costs[10000000];

int main(void)
{
    /* Open the input and output files. */
    FILE *input_file = fopen("shopin.txt", "r");
    FILE *output_file = fopen("shopout.txt", "w");

    /* Read the values of a and b from the input file. */
    fscanf(input_file, "%d %d", &a, &b);
    for (int i = 0; i < a; ++i)
    {
        fscanf(input_file, "%d", &costs[i]);
    }
    sort(costs, costs + a);

    d = a - 1;
    e = 0;
    while (b > 0)
    {
        answer += costs[e];
        --b;
        --d;
        ++e;
    }
    while (d > e)
    {
        answer += costs[d];
        d -= 2;
    }
    printf("%d", answer);
    /* Write the answer to the output file. */
    fprintf(output_file, "%d\n", answer);

    /* Finally, close the input/output files. */
    fclose(input_file);
    fclose(output_file);

    return 0;
}
