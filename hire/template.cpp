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
int most = 0;
int least = 1000000001;
int answer = 1;
int answer1;
int answer2;

int N[100000];
int S[100000];
int M[100000];
int n;
int s;
int m;

int *daq(int *thing, int len)
{
    for (int i = 0; i < len; ++i)
    {
        }
}

int main()
{
    /* Open the input and output files. */
    FILE *input_file = fopen("streetin.txt", "r");
    FILE *output_file = fopen("streetout.txt", "w");

    /* Read the values of a and b from the input file. */
    fscanf(input_file, "%d", &n);
    for (int i = 0; i < n; ++i)
    {
        fscanf(input_file, "%d", N[i]);
    }

    fscanf(input_file, "%d", &s);
    for (int i = 0; i < s; ++i)
    {
        fscanf(input_file, "%d", S[i]);
    }

    fscanf(input_file, "%d", &m);
    for (int i = 0; i < m; ++i)
    {
        fscanf(input_file, "%d", M[i]);
    }
    for (int i = 0; i < n; ++i)
    {
        if (N[i] < least)
        {
            least = N[i];
        }
        if (N[i] > most)
        {
            most = N[i];
        }
    }

    answer = 0;

    printf("%d", answer);
    /* Write the answer to the output file. */
    fprintf(output_file, "%d\n", answer);

    /* Finally, close the input/output files. */
    fclose(input_file);
    fclose(output_file);

    return 0;
}
