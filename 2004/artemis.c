#include <stdio.h>

int main(void) {
    FILE *input = fopen("artemis.in", "r");
    if (input == NULL) return 1;

    int nTrees, minTrees; 
    if (fscanf(input, "%d%d", &nTrees, &minTrees) != 2) return 1; //If fewer than two integers were read, the program exits with a failure status.
    static int x[20000], y[20000];  //x[0] and y[0] hold the coordinates of tree 1, and x[1] and y[1] hold tree 2. Store tree i + 1 at x[i] and y[i]

    for (int i = 0; i < nTrees; ++i) { //Each iteration handles one tree.
        if (fscanf(input, "%d%d", &x[i], &y[i]) != 2) return 1; //On the second cal we are cutting the trees -one by one- by telling the coordinates. The program will decide which trees to cut later.
        
    }
    fclose(input); //By this point, the loop has copied every tree’s coordinates into x and y. fclose(input) releases the file handle because the program has finished reading. The coordinates stay in the arrays for the rectangle search.
    
    return 0;
}