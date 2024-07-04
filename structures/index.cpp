#include<iostream>
#include<string>
using namespace std;
struct Student{
    int id;
    string name;
    int age;

    

};
int main(){
    Student s1 = {1,"Muhire Ighor",12};
    cout<<s1.id;
    cout<<s1.name<<endl;
    
    return 0;
}