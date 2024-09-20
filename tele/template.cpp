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
char stringThing[1000000];

int main(void)
{
    /* Open the input and output files. */
    FILE *input_file = fopen("streetin.txt", "r");
    FILE *output_file = fopen("streetout.txt", "w");

    /* Read the values of a and b from the input file. */
    fscanf(input_file, "%d", &a);
    fscanf(input_file, "%s", stringThing);

    int pos[1000000];
    int posIndex = 500000;
    for(int i = 0; i < a; ++i) {
        if(stringThing[i] == 'R') {
            ++posIndex;
            pos[posIndex] = 1;
        }        
        if(stringThing[i] == 'L') {
            --posIndex;
            pos[posIndex] = 1;
        }
        if(stringThing[i] == 'T') {
            posIndex = 500000;
        }
    }
    for(int i = 0; i < 1000000; ++i) {
        if(pos[i]==1){
            ++answer;
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
