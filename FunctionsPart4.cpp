#include<iostream>
using namespace std;

void printArray(int array[], int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<"  ";
    }
    cout<<endl;
}

int getMax(int array[], int size){
   int max = array[0];
    for(int i=1;i<5;i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    return max;
}

// The piece of code in our program is being repeatedly used :)
int main(){

    int scores[5] = {10, 20, 30, 150, 70};
    int covidCases[5] = {1110, 21230, 12430, 2350, 19170};

    printArray(scores, 5);
    printArray(covidCases, 5);

    cout<<"Max in Scores is: "<<getMax(scores, 5)<<endl;
    cout<<"Max in covidCases is: "<<getMax(covidCases, 5)<<endl;

    return 0;
}

/*

Implement a Function: 
int[] updateQueue(int indexOfAppointment, int duration){

}

Doctors Queue
Dr. Fionna uses a patinet management system to allocate appointments for her patinets.
In her daily queue of patients she spends an average time of 7 mins on every patient. In a certain scenario when any of her appointment is less than 5 mins or beyond 9 mins, shes updates the queue for her remaining patients with new time.

Goal is to update the appointment times in the queue accordingly and return the final pending queue after updates

Example
Appointment Queue: 10.0, 10.7, 10.14, 10.21, 10.28, 10.35, 10.42, 10.49, 10.56, 11.03
Updates: 1: Less time on 2nd appointment 
                 2: More time on 5th appointment

Appointment Queue After 1st Update due to 2nd Appointment (-2 for all)
Appointment Queue: 10.12, 10.19, 10.28, 10.33, 10.40, 10.47, 10.54, 11.01

Appointment Queue After 2nd Update due to 5th Appointment (+2 for all)
Appointment Queue: 10.35, 10.42, 10.49, 10.56, 11.03

*/