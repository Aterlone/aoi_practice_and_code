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
char stringT[100000];
int answer = 1;
int answer1;
int answer2;
int x;
int y;

int main(void)
{
    /* Open the input and output files. */
    FILE *input_file = fopen("robotin.txt", "r");
    FILE *output_file = fopen("robotout.txt", "w");

    /* Read the values of a and b from the input file. */
    fscanf(input_file, "%d", &a);
    fscanf(input_file, "%s", stringT);
    printf("a");
    for (int i = 0; i < a; ++i) {
        if (stringT[i] == 'N') {
            ++y;
        } else if (stringT[i] == 'E') {
            ++x;
        } else if (stringT[i] == 'S') {
            --y;
        } else if (stringT[i] == 'W') {
            --x;
        }
    }
    printf("a");

    answer = abs(x)+abs(y);

    printf("%d", answer);
    /* Write the answer to the output file. */
    fprintf(output_file, "%d\n", answer);

    /* Finally, close the input/output files. */
    fclose(input_file);
    fclose(output_file);

    return 0;
}
