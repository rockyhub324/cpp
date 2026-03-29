#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int student_id;
    float gpa;
}Student;

void updateStudentInfo(Student s);

int main(){
     Student student_01;
     Student student_02;
     Student student_03;

    strcpy(student_01.name, "Edwarad Mercer");
    student_01.student_id =1001;
    student_01.gpa =3.58;

    printf("Name : %s\n", student_01.name);
    printf("ID : %d\n", student_01.student_id);
    printf("GPA : %.1f\n", student_01.gpa);

    updateStudentInfo(student_01);

}
void updateStudentInfo(Student s){
    
    printf("Name : %s\n", s.name);
    printf("ID : %d\n", s.student_id);
    printf("GPA  : %.1f\n", s.gpa);
}