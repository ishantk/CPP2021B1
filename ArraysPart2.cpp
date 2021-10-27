#include<iostream>
using namespace std;

int main(){

    int team1Players[11];
    int team2Players[11];

    int score1=0;
    int score2=0;

    /*cout<<"Enter Score of Player1 in Team1: "<<endl;
    //team1Players[0] = 80;
    cin>>team1Players[0] ;

    cout<<"Enter Score of Player1 in Team2: "<<endl;
   // team2Players[0] = 20;
    cin>>team2Players[0];

    cout<<"team1Players[0]: "<<team1Players[0]<<endl;
    cout<<"team2Players[0]: "<<team2Players[0]<<endl;*/

    cout<<"Enter Score Board for Team1: "<<endl;
    for(int i=0;i<11;i++){
        cout<<"Enter Score of Player"<<i+1<<" of Team1: "<<endl;
        cin>>team1Players[i];
    }

    cout<<"Score Board for Team1: "<<endl;
    for(int i=0;i<11;i++){
        score1 = score1 + team1Players[i];
        cout<<"team1Players["<<i<<"]:  "<<team1Players[i]<<endl;
    }

    cout<<"Enter Score Board for Team2: "<<endl;
    for(int i=0;i<11;i++){
        cout<<"Enter Score of Player"<<i+1<<" of Team2: "<<endl;
        cin>>team2Players[i];
    }

    cout<<"Score Board for Team2: "<<endl;
    for(int i=0;i<11;i++){
        score2 = score2 + team2Players[i];
        cout<<"team2Players["<<i<<"]:  "<<team2Players[i]<<endl;
    }

    cout<<"Team1 Score is: "<<score1<<endl;
    cout<<"Team2 Score is: "<<score2<<endl;

    if(score1 > score2){
        cout<<"Team1 Won by"<<(score1-score2)<<" scores"<<endl;
    }else{
        cout<<"Team2 Won by"<<(score2-score1)<<" scores"<<endl;
    }
    return 0;
}

// Assignment: Find the Cricketer with Maximum and Minimum Scores in both teams