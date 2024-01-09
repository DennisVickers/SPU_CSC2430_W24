#include <iostream>
using namespace std;

bool IsSSN(const string& s) {
   string format = "###-##-####";
   if (s.length() != format.length()) {
      return false;
   }
   for (size_t i = 0; i < format.length(); i++) {
      if (format[i] == '#') {
         if (!isdigit(s[i])) {
            return false;
         }
      } else if (s[i] != '-') {
         return false;
      }
      
   }
   return true;
}

int main() {
   string ssn = "123-45-6789";
   
   cout << "Is " << ssn << " formatted as a SSN? ";
   cout << (IsSSN(ssn) ? "Yes" : "No");
   cout << endl;

   return 0;
}