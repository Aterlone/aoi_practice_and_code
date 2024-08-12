#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int t;
int n;
int f;
int c;
int d;
int o; // optimal
int m; // max
int answer = 1;
int answer1;
int answer2;
int arrayT[7] = {1, 2, 3, 4, 5, 6, 7};

int main(void)
{
    /* Open the input and output files. */
    FILE *input_file = fopen("streetin.txt", "r");
    FILE *output_file = fopen("streetout.txt", "w");

    /* Read the values of a and b from the input file. */
    // fscanf(input_file, "%d %d %d", &t, &n, &f);

    t = 7;
    c = 0;
    int k = 0;
    // O(n*logn)
    for (int i = 0; i < t; ++i)
    {
        for (int j = 0 + k; j < t; ++j)
        {
            if (i != j)
            {
                int newA[7];
                for (int g = 0; g < t; g++)
                    newA[g] = arrayT[g];
                newA[i] = arrayT[j];
                newA[j] = arrayT[i];
                for (int h = 0; h < t; h++)
                    printf("%d", newA[h]);
                ++c;
                printf("\n");
            }
            else
            {
                continue;
            }
        }
        ++k;
    }

    printf("%d", c);
    /* Write the answer to the output file. */
    fprintf(output_file, "%d\n", answer);

    /* Finally, close the input/output files. */
    fclose(input_file);
    fclose(output_file);

    return 0;
}
