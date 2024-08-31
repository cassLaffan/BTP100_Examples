#include "./Using_File_Reading.h"

void readFile(struct Tree* tree){

    FILE *fp;
    char* filename = "ints.txt"; 
    fp = fopen(filename, "r"); //the r means it's for reading!

    //Let's check to see if the file actually opened.

    // !NULL == true
    if(!fp){
        printf("It's file broken day, my dudes. %s \n", filename);
    }
    else{
        int entry;

        // While we're not at the end of file
        while (!feof(fp)){
            fscanf(fp, "%d", &entry);
            insertLeaf(tree, entry);
        }

        //remember to always close your files after you're done (successfully) reading them
        fclose(fp);
    }
}