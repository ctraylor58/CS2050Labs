#include "lab0.h"

int countOccurrences(int size, int array[], int query){
    int counter = 0, i;
    for(i=0; i < size; i++){
        if(array[i] == query){
        counter++;
        }
    }
    return counter;
}
