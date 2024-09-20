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

struct hippo{
    int loc;
    int Count;
};
hippo orgHippos[100000];
hippo hippos[100000];
hippo Hippo;

int main(void)
{
    int count = 0;

    /* Open the input and output files. */
    FILE *input_file = fopen("distin.txt", "r");
    FILE *output_file = fopen("distout.txt", "w");

    /* Read the values of a and b from the input file. */
    fscanf(input_file, "%d %d", &a, &b);
    
    Hippo.loc = -1;

    for(int i = 0; i < 100000; ++i) {
        hippos[i] = Hippo;
    }


    int exists;
    for (int i = 0; i < a; ++i){
        fscanf(input_file, "%d", &c);
        exists = 0;
        for (int j = 0; j < count; ++j) {
            if (hippos[j].loc == c){
                exists = 1;
            }
        }
        if(exists){
            ++hippos[count].Count; 
        }
        else{
            hippos[count].loc = c;
            hippos[count].Count = 1; 
            ++count;
            printf("%d %d\n", hippos[count-1].loc, exists);
        }
    }

    //reorganise
    int smallest;
    int sI;
    int countOrg = 0;
    //check while statement
    while(countOrg != count){
        smallest = 1000000000;
        for(int i = 0; i < count; ++i) {
            if(hippos[i].loc < smallest){
                sI = i;
                smallest = hippos[i].loc;
            }
        }
        orgHippos[countOrg].Count = hippos[sI].Count;
        orgHippos[countOrg].loc = hippos[sI].loc;
        hippos[sI].loc = 10000000;
        printf("%d\n", hippos[sI].loc);
        printf("%d\n", hippos[sI].Count);

        ++countOrg;
    }


    for (int i = 0; i < count; ++i) {
        if(orgHippos[i].Count != 0){
            d = orgHippos[i].loc;
            printf("fnaijfpoajf %d", d);
            break;
        }
    }
    for (int i = 0; i < count; ++i) {
        if (orgHippos[i].Count != 0) {
            printf("%d\n", orgHippos[i].loc);
            if (orgHippos[i].loc-d >= b){
                ++answer;
                d = orgHippos[i].loc;
            }
        }
        
    }
    ++answer;

    printf("%d", answer);
    /* Write the answer to the output file. */
    fprintf(output_file, "%d\n", answer);

    /* Finally, close the input/output files. */
    fclose(input_file);
    fclose(output_file);

    return 0;
}
