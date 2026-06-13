#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

class Student{
    public:

    int id;
    string name;
    string grade;
    int age;
    float marks;
    public:
    Student(int id , string name , int age , float marks ){

        this->id  = id;
        this->name = name;
        this->age = age;
        this->marks = marks;
        calculateGrade();

    }

    void calculateGrade(){


        if(marks >= 90){

            grade = "A";

        }
        else if(marks >= 75){
            grade = "B";
        }
        else if(marks >= 60){
            grade = "C";
        }
        else if(marks >= 40){
            grade = "D";
        }
        else {
            grade = "F";
        }

    }



};


void addStudent(vector<Student> &students){

    int id;
    cout<<"Enter students id->"<<endl;
    cin >> id;

    string name;
    cout<<"Enter the name of the student "<<endl;
    
    

}

int main(){
    vector<Student> students; 
    int choice;
  

    do{

        cout<<"||Enter 1 for add new Student||"<<endl;
        cout<<"||Enter 2 for display information||"<<endl;
        cout<<"||Enter 3 for delete ||"<<endl;
        cout<<"||Enter 4 for upadate||"<<endl;
        cin >> choice;

        switch(choice){

            case 1: addStudent(students);
                    cout<<endl<<"Student add ho gaya"<<endl;
                    break;





    }

    }while(choice != 5);




    

  



}
