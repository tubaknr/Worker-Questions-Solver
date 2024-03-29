#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void entry(){
    cout << "----------!!!Welcome to Worker Questions Solver!!!----------"<< endl;
}

float CompletionDuration(){
    float SingleWorkerTime;
    cout << "What is the job completion duration of 1 single worker in days?" << endl;
    cin >> SingleWorkerTime;
    return SingleWorkerTime;
}

int GetNumberOfWorkers(){
    int NumberOfWorkers;
    cout << "How much workers do you have?" << endl; 
    cin >> NumberOfWorkers;
    return NumberOfWorkers;
}

void CalculateFinalDuration(int numberOfWorkers, float singleWorkerTime){
    float totalDuration;
    cout << "The total completion time of the job with " << numberOfWorkers << " workers, each can complete the job in " << " days:\n";
    totalDuration = singleWorkerTime / numberOfWorkers;
    cout << fixed << setprecision(1) << ceil(totalDuration) << endl;
}
