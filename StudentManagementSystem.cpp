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
    cin.ignore(); 
    string name;
    cout<<"Enter the name of the student "<<endl;
    getline(cin , name);

    int age;
    cout<<"Enter age"<<endl;
    cin >> age;

    float marks;
    cout<<"Enter marks"<<endl;
    cin >> marks;
    cin.ignore();

    students.push_back(Student(id,name,age,marks));


}
void show(vector<Student> &students){

    int n = students.size();

    if(students.empty()){
        cout<<"No students information "<<endl;
        return;
    }

    for(int i=0;i<n;i++){
        cout<<"Students details is -> "<<endl;
        cout<<"student's id is-> "<<students[i].id<<endl;
        cout<<"student's name is-> "<<students[i].name<<endl;
        cout<<"student's grade grade is-> "<<students[i].grade<<endl;
        cout<<"student's age is-> "<<students[i].age<<endl;
        cout<<"students's marks is-> "<<students[i].marks<<endl;

    }




}

void remove(vector<Student> &students){

    int id;
    cout<<"Enter id "<<endl;
    cin>>id;

    for(int i=0;i<students.size();i++){

        if(students[i].id == id){
            students.erase(students.begin()+1);
            cout<<"Deleted"<<endl;
            return;

        }

    }


    cout<<"Deleted successfully!"<<endl;


}

void update(vector<Student> &students){ 



    int id;
    cout<<"Enter id to update "<<endl;
    cin >> id;
    cin.ignore();

    for(int i=0;i<students.size();i++){

        if(students[i].id == id){

            cout<<"Enter new id "<<endl;
            cin >> students[i].id;
            cin.ignore();

            cout<<"Enter new name"<<endl;
            cin >> students[i].name;
            cin.ignore();


            cout<<"Enter age "<<endl;
            cin >> students[i].age;
            cin.ignore();

          cout<<"Enter marks "<<endl;
           cin>>students[i].marks;
            cin.ignore();

            students[i].calculateGrade();

            cout << "Updated!\n";
            return;


        }

    }

}


int main(){
    vector<Student> students; 
    int choice;
  

    do{

        cout<<"||Enter 1 for add new Student||"<<endl;
        cout<<"||Enter 2 for display information||"<<endl;
        cout<<"||Enter 3 for delete ||"<<endl;
        cout<<"||Enter 4 for upadate||"<<endl;
        cout<<"||Enter 5 for exit||"<<endl;
        cin >> choice;
        cin.ignore();

        switch(choice){

            case 1: addStudent(students);
                    break;
            case 2: show(students);
                    break;
            case 3: remove(students);
                    break;
            case 4: update(students);
                    break;
            default:cout<<"Exit"<<endl;

    }

    }
    while(choice != 5);






}
