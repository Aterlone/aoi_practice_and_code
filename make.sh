#!/bin/bash
cp -r template "$1"
cd "$1"
touch "$1"in.txt "$1"out.txt
echo clang++ -o "$1" template.cpp >> conf.sh
chmod +x conf.sh
code "$1"in.txt "$1"out.txt template.cpp

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

int main(void)
{
    /* Open the input and output files. */
    FILE *input_file = fopen("streetin.txt", "r");
    FILE *output_file = fopen("streetout.txt", "w");

    /* Read the values of a and b from the input file. */
    fscanf(input_file, "%d %d", &a, &b);

    answer = 0;

    printf("%d", answer);
    /* Write the answer to the output file. */
    fprintf(output_file, "%d\n", answer);

    /* Finally, close the input/output files. */
    fclose(input_file);
    fclose(output_file);

    return 0;
}
