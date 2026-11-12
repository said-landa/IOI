#include <stdio.h>

int main(void) {
    FILE *input = fopen("artemis.in", "r");
    if (input == NULL) return 1;

    int nTress, minTrees; 
    if (fscanf(input, "%d%d", &nTrees, &minTrees) != 2) return 1; //If fewer than two integers were read, the program exits with a failure status.
    static int x[20000], y[20000];  //x[0] and y[0] hold the coordinates of tree 1, and x[1] and y[1] hold tree 2. Store tree i + 1 at x[i] and y[i]

    for (int i = 0; i < n; ++i) { //Each iteration handles one tree.

    }
    
    return 0;
}