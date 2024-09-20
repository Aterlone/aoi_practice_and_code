/*
 * Solution Template for Melody
 * 
 * Australian Informatics Olympiad 2021
 * 
 * This file is provided to assist with reading and writing of the input
 * files for the problem. You may modify this file however you wish, or
 * you may choose not to use this file at all.
 */

#include <cstdio>

using namespace std;
/* N is the number of notes. */
int N;

/* K is the largest number which could be a note. */
int K;
int c;
/* S contains the sequence of notes forming the song. */
int S[100005];

int answer = 1000000;

struct thing {
    int melody[3];
    int count;
};

int check(thing *melodies, int c, int *melody) { 
    for (int i = 0; i < c; ++i) {
        if(melodies[c].melody[0] == melody[0] && melodies[c].melody[1] == melody[1] && melodies[c].melody[2] == melody[2]) {
            return i;
        }
    }
    return 0;
}

int main() {
    c = 0;
    /* Open the input and output files. */
    FILE *input_file = fopen("melodyin.txt", "r");
    FILE *output_file = fopen("melodyout.txt", "w");

    /* Read the value of N and K. */
    fscanf(input_file, "%d%d", &N, &K);

    /* Read each note in the song. */
    for (int i = 0; i < N; ++i) {
        fscanf(input_file, "%d", &S[i]);
    }
    thing melodies[40000];
    for (int i = 0; i < N; i+=3) {
        int a[3] = {S[i], S[i+1], S[i+2]};
        int k = check(melodies, c, a);
        if (k){
            ++melodies[k].count;
        }
        else{
            melodies[c].melody[0] = S[i];
            melodies[c].melody[1] = S[i+1];
            melodies[c].melody[2] = S[i+2];
            ++melodies[c].count;
            ++c;
        }
    }
    int result = 0;
    int number = 0;
    for (int i = 0; i < c; ++i) {
        for (int j = 0; j < c; ++j) {
            if (i == j) continue;
            
            if (melodies[i].melody[0] != melodies[j].melody[0]) {
                ++number;
            }            
            if (melodies[i].melody[1] != melodies[j].melody[1]) {
                ++number;
            }            
            if (melodies[i].melody[2] != melodies[j].melody[2]) {
                ++number;
            }
            result += number * melodies[j].count;
            printf("%d\n", number);
            number = 0;
        }
        if (result < answer) {
            answer = result;
            printf("Done %d\n", answer);
        }
        result = 0;
    }

    /*
     * TODO: This is where you should compute your solution. Store the smallest
     * possible number of notes Melody can change so that her song is nice into
     * the variable answer.
     */
    printf("%d\n",answer);
    /* Write the answer to the output file. */
    fprintf(output_file, "%d\n", answer);

    /* Finally, close the input/output files. */
    fclose(input_file);
    fclose(output_file);

    return 0;
}
