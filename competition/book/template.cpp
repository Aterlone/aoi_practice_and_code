#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

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
char stri[10000000];
char g;
char previous;
char nexta;
int queI;

int main(void)
{
    /* Open the input and output files. */
    FILE *input_file = fopen("bookin.txt", "r");
    FILE *output_file = fopen("bookout.txt", "w");

    /* Read the values of a and b from the input file. */
    fscanf(input_file, "%d", &a);

    fscanf(input_file, "%s", stri);
    for (int i = 0; i < a; ++i)
    {
        if (stri[i] == '?')
        {
            queI = i;
        }
    }
    previous = stri[queI - 1];
    nexta = stri[queI + 1];

    for (int i = queI - 1; i > 0; --i)
    {
        if (stri[i] != previous)
        {
            break;
        }
        ++d;
    }
    for (int i = queI + 1; i < g; ++i)
    {
        if (stri[i] != nexta)
        {
            break;
        }
        ++e;
    }

    if (queI != 0 && queI != g - 1)
    {

        if (previous == nexta)
        {
            stri[queI] = previous;
        }
        else
        {
            if (e > d)
            {
                stri[queI] = nexta;
            }
            else
            {
                stri[queI] = previous;
            }
        }
    }
    else
    {
        if (queI == 0)
        {
            stri[0] = stri[1];
        }
        if (queI == g - 1)
        {
            stri[g - 1] = stri[g - 2];
        }
    }
    previous = stri[0];
    for (int i = 1; i < a; ++i)
    {
        if (stri[i] == previous)
        {
            ++answer;
        }
        printf("now:%c prev:%c\n", stri[i], previous);
        previous = stri[i];
    }
    printf("%d", answer);
    /* Write the answer to the output file. */
    fprintf(output_file, "%d\n", answer);

    /* Finally, close the input/output files. */
    fclose(input_file);
    fclose(output_file);

    return 0;
}
