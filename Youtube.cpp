#include<iostream>
using namespace std;

class Notification{
    public:
        virtual void notify(string message)=0;
};

class User: public Notification{

    public: 
        void notify(string message){
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<"A new Notification Received"<<endl;
            cout<<message<<endl;
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        }

};

class YoutubeChannel{

    Notification* ptr;

    public:
        void subscribe(User &user){
            ptr = &user;
        }

        void unsubscribe(User &user){
            ptr = NULL;
        }

        void uploadVideo(string name){
            cout<<"Video Uploaded"<<endl;
            
            if(ptr != NULL){
                ptr->notify(name);
            }
        }

};

int main(){

    User john;

    YoutubeChannel auribises;
    auribises.subscribe(john);
    auribises.uploadVideo("Code with C++");

    return 0;
}