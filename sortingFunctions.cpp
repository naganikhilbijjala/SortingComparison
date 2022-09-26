#include <iostream>
#include <bits/stdc++.h>
#include "sortingFunctions.h"

using namespace std;

// Insertion Sort
void insertionSort (vector<int> inputArray){
    int n = inputArray.size(), value, hole;
    for(int i=0; i<n; i++){
        value = inputArray[i];
        hole = i;
        while(hole>0 && inputArray[hole-1]>value){
            inputArray[hole] = inputArray[hole-1];
            hole = hole -1;
        }
        inputArray[hole] = value;
    }
}

// Merge Sort
vector<int> mergeSort (vector<int> inputArray){
    return inputArray;
}

// Heap Sort
vector<int> heapSort (vector<int> inputArray){
    return inputArray;
}


// In-place quick sort
vector<int> inPlaceQuickSort (vector<int> inputArray){
    return inputArray;
}

// Modified quick sort
vector<int> modifiedQuickSort (vector<int> inputArray){
    return inputArray;
}
