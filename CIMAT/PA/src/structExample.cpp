//Use of struct in c++
//struct whit name, id, phone, grade, and a vector with 5 califications, the struct will be named alumno
//Functions mean an getAlumno
//Calculate the mean of 5 alumnos

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct alumno{
    string name;
    int id;
    int phone;
    char grade;
    vector<float> calif;
};

float mean(vector<float> calif){
    float sum = 0;
    for(int i = 0; i < calif.size(); i++){
        sum += calif[i];
    }
    return sum/calif.size();
}

alumno getAlumno(){
    alumno a;
    cout << "Name: ";
    cin >> a.name;
    cout << "ID: ";
    cin >> a.id;
    cout << "Phone: ";
    cin >> a.phone;
    cout << "Grade: ";
    cin >> a.grade;
    cout << "Calif: ";
    for(int i = 0; i < 5; i++){
        float cal;
        cin >> cal;
        a.calif.push_back(cal);
    }
    return a;
}

int main(){
    vector<alumno> alumnos;
    for(int i = 0; i < 5; i++){
        alumnos.push_back(getAlumno());
    }
    for(int i = 0; i < 5; i++){
        cout << alumnos[i].name << " " << alumnos[i].id << " " << alumnos[i].phone << " " << alumnos[i].grade << " " << mean(alumnos[i].calif) << endl;
    }
    return 0;
}
