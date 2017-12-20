#include "MastersStudent.h"
#include <iostream>
#include <iomanip>



// Constructor Implementations
MastersStudent::MastersStudent(Student ug, int msy):
    Student(ug), _ms_grad_year(msy) {}
  
MastersStudent::MastersStudent(std::string fn, std::string ln,
    int ugy, int msy, Major m):
    Student(fn, ln, ugy, m), _ms_grad_year(msy) {}

// New methods specific to MastersStudent
float MastersStudent::getMsGpa() {
  // TODO Implement this
    float sum = 0;
	
	for(unsigned int i = 0; i < _ms_grades.size(); i++){
		    sum = _ms_grades[i] + sum;
	}
    float _average = sum / _ms_grades.size();
	return _average;
}

void MastersStudent::addMsGrade(float grade) {
  // TODO Implement this 
 _ms_grades.push_back (grade);
	return;
}

// Override Student's printInfo to include new fields
void MastersStudent::printInfo() {
  Student::printInfo();
  // TODO Print additional MastersStudent fields
        printf("MS %s: %d \n", majorString(_major).c_str(), _ms_grad_year);
        printf("MS GPA: %.2f \n", getMsGpa());
}
