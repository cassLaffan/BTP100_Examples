#include "./File_Reading.h"

void readFile(int array[MAX]){

    FILE *fp;
    char* filename = "ints.txt"; 
    fp = fopen(filename, "r"); //the r means it's for reading!

    //Let's check to see if the file actually opened.
    //If not, we'll exit the program with an early return statement

    // !NULL == true
    if(!fp){
        printf("It's file broken day, my dudes. %s \n", filename);
        return; //This exits a void function early! No return value!
    }

    int iter = 0;
    // While we're not at the end of file (eof)
    while (!feof(fp)){
        fscanf(fp, "%d", &array[iter]);
        iter++;
    }

    //remember to always close your files after you're done reading them
    fclose(fp);
}