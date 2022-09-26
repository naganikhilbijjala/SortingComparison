#include <iostream>
#include <bits/stdc++.h>
#include <chrono>
#include "sortingFunctions.h"

using namespace std;
using namespace std::chrono;

vector<int> getInputArray(int n);

int main()
{
   // int n;
    vector<int> inputSize{1000,2000,4000,5000,10000,20000,40000,50000,60000,80000,100000};
    for(int i=inputSize.size()-1; i>=0; i--){
        vector<int> inputArray = getInputArray(inputSize[i]);
        //cout << "Generated Array is ";
        //for(int i=0; i<n; i++){
        //    cout << inputArray[i] << " ";
        //}
        //cout << endl;
        cout << "Calling Insertion Sort: " << inputSize[i] << endl;
        auto start = high_resolution_clock::now();
        insertionSort(inputArray);
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop-start);
        cout << "Time taken by insertion sort " << duration.count() << " micro seconds" << endl;
    }
    return 0;
}

vector<int> getInputArray(int n){
    vector<int> inputArray(n);
    for(int i=0; i<n; i++){
        inputArray[i] = rand();
    }
    return inputArray;
}
