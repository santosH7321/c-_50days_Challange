#include<iostream>
using namespace std;

int x = 2; //global variable

void fun(){
    int x = 60;
    cout<< x <<endl;
    ::x = 40;
    cout<< ::x <<endl;
}
int main(){
    ::x = 4; //global x.
    int x = 20;   // Local to main fn.
    cout<< x << endl; 
    cout<< ::x <<endl; //accessing gloabal fun..

    {
        int x = 50;
        {
            int x = 44;
            cout<< x <<endl;
        }
        cout<< x <<endl;
        cout<< ::x <<endl; // most recent

    }
    fun();
    return 0;
}