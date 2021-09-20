/* Program: Demonstrate pure virtual function
 * Author : Karthick Kumaran
 * E-mail : asvkarthick@gmail.com
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int professorId = 0;
int studentId = 0;

class Person {
public:
    virtual void getdata() = 0;
    virtual void putdata() = 0;
    std::string name;
    int age;
};

class Professor : public Person {
public:
    Professor()
    {
        cur_id = ++professorId;
    }
    void getdata()
    {
        std::cin >> name >> age >> publications;
    }
    void putdata()
    {
        std::cout << name << " " << age << " " << publications << " " << cur_id << std::endl;
    }
    int publications;
    int cur_id;
};

class Student : public Person {
public:
    Student()
    {
        cur_id = ++studentId;
    }
    void getdata()
    {
        std::cin >> name >> age;
        for (int i = 0; i < 6; i++) {
            std::cin >> marks[i];
        }
    }
    void putdata()
    {
        int sum = 0;
        for (int i = 0; i < 6; i++) sum += marks[i];
        std::cout << name << " " << age << " " << sum << " " << cur_id << std::endl;
    }
    int marks[6];
    int cur_id;
};

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
