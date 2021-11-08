#include<iostream>
using namespace std;

void print1DArray(int array[], int size){
    for(int idx=0;idx<size;idx++){
        cout<<array[idx]<<"  ";
    }
    cout<<endl;
}

//void print2DArray(int array[][], int howManyArrays, int howManyElements){
void print2DArray(int array[][4], int rows, int cols){
    for(int r=0;r<rows;r++){       // 0 1 2 3 4
        for(int c=0;c<cols;c++){ // 0: 0, 1, 2, 3 | 1: 0, 1, 2, 3 | 2: 0, 1, 2, 3 | 3: 0, 1, 2, 3 | 4: 0, 1, 2, 3
            cout<<array[r][c]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void filterCovidCases(int array[][4], int rows, int cols, int choice){
    for(int r=0;r<rows;r++){       // 0 1 2 3 4
        cout<<array[r][choice]<<endl;
    }
    cout<<endl;
}


int main(){

    int activeCases = 121110;

    int covidCasesMaharashtra[4] = {43414, 1213, 1345, 431};
    int covidCasesPunjab[4] = {43414, 1213, 1345, 431};
    int covidCasesHimachal[4] = {43414, 1213, 1345, 431};
    int covidCasesOrissa[4] = {43414, 1213, 1345, 431};
    int covidCasesHaryana[4] = {43414, 1213, 1345, 431};

    // Array of Arrays
    // 2-D Array
    // Matrix
    int covidCases[5][4] = {
        {43414, 1213, 1345, 431}, // 0
        {33414, 1213, 1345, 431}, // 1
        {13414, 1213, 1345, 431}, // 2
        {53414, 1213, 1345, 431}, // 3
        {73414, 1213, 1345, 431} // 4
    };

    cout<<"activeCases: "<<activeCases<<endl;  // value: 121110
    cout<<"covidCasesMaharashtra: "<<covidCasesMaharashtra<<endl; // address
    cout<<"covidCases[0]: "<<covidCases[0]<<endl; // address

    cout<<"covidCasesMaharashtra[1]: "<<covidCasesMaharashtra[1]<<endl; // 1213
    cout<<"covidCases[2][2]: "<<covidCases[2][2]<<endl; // 1345

    print1DArray(covidCasesMaharashtra, 4);
    print2DArray(covidCases, 5, 4);

   // 0 -> Confirmed
   // 1 -> Active
   // 2 -> Recovered
   // 3 -> Deceased
   int choice = 0;
   int quit = 0;

   do{
        cout<<"0: Confirmed\n1: Active\n2: Recovered\n3: Deceased\n";
        cout<<"Enter Filter"<<endl;
        cin>>choice;
        filterCovidCases(covidCases, 5, 4, choice);
        cout<<"Press Any Number to Proceed or 1 to quit: "<<endl;
        cin>>quit;

   }while(quit != 1);

    return 0;
}