#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<string> student = {"vivek","priyansh","naman"};
    
    /* accessing element */
    cout<<student[0]<<endl;
    cout<<student[1]<<endl;
    cout<<student[2]<<endl;

    /* finding first and last element */
    cout<<student.front()<<endl;
    cout<<student.back()<<endl;



    return 0;
}