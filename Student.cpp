#include <stdio.h>
#include "Student.h"
#include <string>
#include <vector>
#include <iostream>
#include <iomanip>

Student::Student(std::string fn, std::string ln, int y, Major m)
: _first_name(fn),
_last_name(ln),
_grad_year(y),
_major(m)
{}

Student::~Student() {}

float Student::getGpa() {
  // TODO Fill in real implementation
  float sum = 0;
	
	for(unsigned int i=0; i<_grades.size(); i++) {
		sum =_grades[i] + sum;
	}
  float gpa = sum/_grades.size();
	return gpa;
 
}


std::string Student::majorString(Major m){
  switch (m) {
    case Major::EE:
      return "EE";
        break;
    case Major::ME:
      return "ME";
        break;
   case Major::CE:
      return "CE";
        break;
   case Major::CHE:
      return "CHE";
        break;
  case Major::BSE:
      return "BSE";
        break;
  case Major::ART:
      return "ART";
        break;
  case Major::ARCH:
      return "ARCH";
        break;
  }
}

void Student::addGrade(float grade) {
  // TODO Fill in real implementation
  _grades.push_back(grade);
  return;
}

const std::string& Student::getLastName() {
  // TODO Fill in real implementation
  return _last_name;
}

void Student::printInfo() {
  // TODO Fill in real implementation
  printf("%s, %s \n", _last_name.c_str(), _first_name.c_str());
  
  printf("%s %d \n", majorString(_major).c_str(), _grad_year);
  
  printf("GPA: %.2f \n", getGpa());
}
