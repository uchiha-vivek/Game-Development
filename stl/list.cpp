#include <iostream>
#include <list>
using namespace std;




int main(){
    list<string> subjects = {"meta","electrical","cs"};
    // cout<<subjects.front()<<endl;
    // cout<<subjects.back()<<endl;

    // changing the front and back value
    subjects.front() = "mechanical";
    subjects.back() ="civil";

    // adding the element at the front and back
    subjects.push_front("production");
    subjects.push_back("mathematics"); 

    for (string subject:subjects){
        cout<<subject<<endl;
        }
    return 0;
}