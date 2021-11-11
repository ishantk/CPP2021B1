#include<iostream>
using namespace std;

//Complete the below function to provide solution for Two Sum Problem
int* getTwoSumIndexes(int nums[], int size, int target){
    int output[2];

    // Your code goes here
    return output;
}

int main(){
    int nums[]={2, 7, 11, 15};
    int target = 9;
    //Expected Output: [0,1]
    //Output: Because nums[0] + nums[1] == 9, we return [0, 1].
    int* output = getTwoSumIndexes(nums, 4, target);
    cout<<*output<<endl;
    output++;
    cout<<*output<<endl;
    return 0;
}

