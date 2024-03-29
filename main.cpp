#include <iostream>
#include "headers/side.h"
using namespace std;


int main(){
    entry();
    int totalWorkers;
    float singleWorkerTime;
    singleWorkerTime = CompletionDuration();
    totalWorkers = GetNumberOfWorkers();
    CalculateFinalDuration(totalWorkers, singleWorkerTime);     
}


