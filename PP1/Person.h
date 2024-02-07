#ifndef PP1A_PERSON_H

#define PP1A_PERSON_H
#include <string>
using namespace std;

class Person {
public:
   Person(const string* firstName, const string* lastName, const size_t* age);
   ~Person();
   string GetFirstName() const;
   string GetLastName() const;
   size_t GetAge() const;
   void SetFirstName(const string* firstName);
   void SetLastName(const string* lastName);
   void SetAge(const size_t* age);
private:
   string _firstName;
   string _lastName;
   size_t _age;
};

#endif //PP1A_PERSON_H
