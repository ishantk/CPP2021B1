#include<iostream>
using namespace std;

//Complete the below function to provide solution for Two Sum Problem
void getTwoSumIndexes(int nums[], int size, int target, int* outputPtr){

    // Your code goes here
}

int main(){
    int nums[]={2, 7, 11, 15};
    int target = 9;
    int output[2];
    //Expected Output: [0,1]
    //Output: Because nums[0] + nums[1] == 9, we return [0, 1].
    getTwoSumIndexes(nums, 4, target, output);
    cout<<output[0]<<" ,  "<<output[1]<<endl;
    return 0;
}

