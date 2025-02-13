
#include "StudentDatabase.h"
#include <map>
#include <iostream>

// Insert a student into _students map
void StudentDatabase::addStudent(Student *s) {
  // TODO Implement this
  _students[s->getLastName()] = s;
}

// Find the student with the matching last_name
// and call printInfo on that student, or
// print "<last_name> not found" if the student is not found.
void StudentDatabase::printStudent(std::string last_name) {
  // TODO Implement this
  if (_students.find(last_name) ==_students.end()){

    printf("%s error, cannot be found \n", last_name.c_str());

    
  }
  else
    _students[last_name]->printInfo();
}
