#include "Person.h"

Person::Person(const string* firstName, const string* lastName, const size_t* age) {
   this->_firstName = *firstName;
   this->_lastName = *lastName;
   this->_age = *age;
}
Person::~Person() {

}
string Person::GetFirstName() const {
   return (this->_firstName);
}
string Person::GetLastName() const {
   return (this->_lastName);
}
size_t Person::GetAge() const {
   return (this->_age);
}
void Person::SetFirstName(const string* firstName) {
   this->_firstName = *firstName;
}
void Person::SetLastName(const string* lastName) {
   this->_firstName = *lastName;
}
void Person::SetAge(const size_t* age) {
   this->_age = *age;
}
