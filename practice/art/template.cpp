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
int answer = 1;
int answer1;
int answer2;


int newValX, newValY;
int sx, lx;
int sy, ly;

int main(void)
{
    /* Open the input and output files. */
    FILE *input_file = fopen("artin.txt", "r");
    FILE *output_file = fopen("artout.txt", "w");

    /* Read the values of a and b from the input file. */
    fscanf(input_file, "%d", &a);
    sx = 10001;
    sy = 10001;    
    lx = -1;
    ly = -1;
    for (int i = 0; i < a; ++i) {
        fscanf(input_file, "%d %d", &newValX, &newValY);
        if (newValX > lx) {
            lx = newValX;
        }  
        if (newValY > ly) {
            ly = newValY;
        }        
        if (newValX < sx) {
            sx = newValX;
        }       
        if (newValY < sy) {
            sy = newValY;
        }
    }
    answer = (lx - sx) * (ly - sy);

    printf("%d", answer);
    /* Write the answer to the output file. */
    fprintf(output_file, "%d\n", answer);

    /* Finally, close the input/output files. */
    fclose(input_file);
    fclose(output_file);

    return 0;
}
