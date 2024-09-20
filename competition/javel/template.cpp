#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int a;
int b;
int c = 0;
int d;
int e;
int o;
int m;
int answer = 0;
int answer1;
int answer2;

int main(void)
{
    FILE *input_file = fopen("javelin.txt", "r");
    FILE *output_file = fopen("javelout.txt", "w");

    fscanf(input_file, "%d", &a);
    for (int i = 0; i < a; ++i)
    {
        fscanf(input_file, "%d", &b);
        if (b > c)
        {
            ++answer;
            c = b;
        }
    }
    printf("%d\n", answer);

    fprintf(output_file, "%d\n", answer);

    fclose(input_file);
    fclose(output_file);

    return 0;
}
