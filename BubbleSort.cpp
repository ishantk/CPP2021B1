#include<iostream>
using namespace std;

void swap(int& num1, int& num2){ // Pass data as reference

    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp; 
}

void bubbleSort(int numbers[], int size){

    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1; j++){
            if(numbers[j] > numbers[j+1]){
                swap(numbers[j], numbers[j+1]);
            }
        }
    }

}

void printArray(int array[], int size){
    for(int idx=0;idx<size;idx++){
        cout<<array[idx]<<"  ";
    }
    cout<<endl;
}

int main(){

    int array[] = {11, 5, 9, 12, 21};
    bubbleSort(array, 5);
    printArray(array, 5);


    return 0;
}