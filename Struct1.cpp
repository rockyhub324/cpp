#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int student_id;
    float gpa;
}Student;

void updateStudentInfo(Student *s, char name[], int id, float gpa);

int main(){
     Student student_01;
     Student student_02;
     Student student_03;

    strcpy(student_01.name, "Edwarad Mercer");
    student_01.student_id =1001;
    student_01.gpa =3.58;

    printf("Name : %s\n", student_01.name);
    printf("Name : %d\n", student_01.student_id);
    printf("Name : %.1f\n", student_01.gpa);

    updateStudentInfo(&student_01, "Kelly Grayson", 1002, 3.85);
    
     printf("Name : %s\n", student_01.name);
    printf("Name : %d\n", student_01.student_id);
    printf("Name : %.1f\n", student_01.gpa);
           
}

void updateStudentInfo(Student *s, char name[], int id, float gpa){
    strcpy(s->name,name);
    s-> student_id = id;
    s-> gpa=gpa;
}