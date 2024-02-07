#include <iostream>
using namespace std;

double DiagonalAverage(double** data, size_t n) {
   double sum = 0.0;
   double avg = 0.0;

   sum += data[0][0];
   sum += data[1][1];
   sum += data[2][2];

   avg = sum / n;

   return  avg;
}

void PrintMatrix(double** matrix, size_t n) {
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         cout << matrix[i][j] << " ";
      }
      cout << endl;
   }
}

int main() {
   /*
    * A dynamic array of pointers is basically an array of pointers
    *  where every array index points to a memory block.
    *  This represents a 2D view in our mind.
    */
   int n = 3; // Size of matrix
   double **m = new double *[n];

   for (int i = 0; i < n; i++) {
      m[i] = new double[n];
   }

   m[0][0] = 7;
   m[0][1] = 1;
   m[0][2] = 4;
   m[1][0] = 4;
   m[1][1] = 3;
   m[1][2] = 9;
   m[2][0] = 0;
   m[2][1] = 4;
   m[2][2] = 8;

   PrintMatrix(m,n);

   double avg = DiagonalAverage(m,n);

   cout << endl;
   cout << "Average of diagonal values: " << avg << endl;

   return 0;
}
