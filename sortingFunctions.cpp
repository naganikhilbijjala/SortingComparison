#include <iostream>
#include <bits/stdc++.h>
#include "sortingFunctions.h"

using namespace std;

// Insertion Sort
void insertionSort (vector<int> inputArray){
    int n = inputArray.size(), value, current;
    for(int i=0; i<n; i++){
        value = inputArray[i];
        current = i;
        while(current>0 && inputArray[current-1]>value){
            inputArray[current] = inputArray[current-1];
            current--;
        }
        inputArray[current] = value;
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
