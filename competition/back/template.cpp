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
int t = 0;

int remain;
int dist[2000];
int cost[2000];
int bag = 0;
int total = 0;
int number = 0;
int main(void)
{
    /* Open the input and output files. */
    FILE *input_file = fopen("backin.txt", "r");
    FILE *output_file = fopen("backout.txt", "w");

    /* Read the values of a and b from the input file. */
    fscanf(input_file, "%d %d", &a, &b);
    for (int i = 0; i < a - 1; ++i)
    {
        fscanf(input_file, "%d", &dist[i]);
    }
    for (int i = 0; i < a; ++i)
    {
        fscanf(input_file, "%d", &cost[i]);
    }

    for (int i = 0; i < a - 1; ++i)
    {
        answer += cost[i] * dist[i] - bag;
        bag += dist[i] - bag;
        printf("a:%d\n", bag);
        if (bag <= b)
        {
            for (int j = i + 1; j < a - 1; ++j)
            {

                printf("%d %d\n", cost[i], cost[j]);

                if (cost[i] < cost[j])
                {

                    while (bag <= b)
                    {
                        ++bag;
                        ++number;
                        answer += cost[i];
                        printf("b:%d\n", bag);

                        if (number == dist[j])
                            break;
                    }
                }
                else
                {
                    break;
                }
            }
        }
    }

    printf("%d", answer);
    /* Write the answer to the output file. */
    fprintf(output_file, "%d\n", answer);

    /* Finally, close the input/output files. */
    fclose(input_file);
    fclose(output_file);

    return 0;
}
