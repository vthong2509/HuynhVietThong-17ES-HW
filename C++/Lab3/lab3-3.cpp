#include <iostream>
#include <conio.h>
using namespace std;
class Matrix
{
private:
       int n, m;                 // n = row, m = column
       float data[100][100];
public:
        Matrix();                //Construcror allows user to enter values for a matrix from keyboard
        Matrix(int m, int n);    //create M-by-N matrix of 0's
        Matrix(float a[][100], int row, int col);     // Create matrix based on 2d array
        Matrix(const Matrix &A); //Copy constructor

        Matrix operator+(Matrix &B) // Addition of two Matrices
         { Matrix temp(B.n, B.m);
         temp.n = B.n; temp.m = B.m;
            for (int k=0; k<B.n;k++)
             for (int j=0; j<B.m; j++)
                temp.data[k][j] = data[k][j] + B.data[k][j];
             return (temp);
         }

         Matrix operator-(Matrix &B) // subtraction of two Matrices
         { Matrix temp(B.n, B.m);
         temp.n = B.n; temp.m = B.m;
            for (int k=0; k<B.n;k++)
             for (int j=0; j<B.m; j++)
                temp.data[k][j] = data[k][j] - B.data[k][j];
             return (temp);
         }

         bool operator== (Matrix &B) // Comparision of two Matrices
         {
            for (int k=0; k<B.n;k++)
             for (int j=0; j<B.m; j++)
                   { if (data[k][j] == B.data[k][j])
                       continue ;
                     else
                       return false;
                    }
             return true;
         }

        Matrix operator*(Matrix &B)  // Production of two Matrices
        {
          Matrix C(n,B.m);
         if (m==B.n)
           for (int i=0; i<n; i++)
             for (int j=0; j<B.m; j++)
                 for (int k=0; k<m; k++)
                   C.data[i][j]= C.data[i][j] + data[i][k]*B.data[k][j];

             return C;
        }

        void display();                    //Print matrix
};

Matrix::Matrix()
{
cout<<"Enter your matrix size: \nRow:     n= "; cin>>n;
cout<<"Column:  m= "; cin>>m;
cout<<endl;
for (int i=0;i<n;i++)
    for(int j=0; j<m; j++)
       {
            cout <<"data["<<i<<"]["<<j<<"]= ";
            cin >> data[i][j];
        }
}

Matrix::Matrix(int N, int M) //create N-by-M matrix of 0's
{ n=N; m=M;
  for (int i=0;i<n;i++)
    for(int j=0; j<m; j++)
       data[i][j]=0;
  }

Matrix::Matrix(float a[][100], int row, int col)   //pass an existing 2d array to matrix
{
     for (int k=0; k<row;k++)
         for (int j=0; j<col; j++)
            data[k][j] = a[k][j];
}

Matrix::Matrix(const Matrix &A)   //pass an existing 2d array to matrix
{  n = A.n; m = A.m;
     for (int k=0; k<A.n;k++)
         for (int j=0; j<A.m; j++)
            data[k][j] = A.data[k][j];
}


Matrix operator-(Matrix &B);  // Subtraction of two Matrices
//int operator==(Matrix &B);    // Comparision of two Matrices
Matrix operator*(Matrix &B);  // Production of two Matrices



void Matrix::display()
{
     for (int i=0; i<n; i++)
        {   for (int j=0; j<m; j++)
              cout <<data[i][j] << " ";

              cout <<endl;
        }
}
//---------------main program-----------------
int main()
{
  Matrix A;
  cout <<"\nMatrix A:\n";
  A.display();
  Matrix B(A);
  cout <<"\nMatrix B:\n";
  B.display();
  Matrix C= A+B;
  cout <<"\nMatrix C = A + B:\n";
  C.display();
  Matrix D= A-B;
  cout <<"\nMatrix D = A - B:\n";
  D.display();
  Matrix F = A*B;
  cout <<"\nMatrix F = A * B:\n";
  F.display();
  if (A==B)
     cout <<"Matrix A equal matrix B";
  else
       cout <<"Matrix A is not equal to matrix B";
getch();
}


