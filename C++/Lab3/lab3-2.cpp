#include <iostream>
#include <conio.h>
using namespace std;
class Real
{
private:
float value;
public:
Real(float v=0)
{
value=v;
}
Real operator+(Real &A)
{
return value + A.value ;
}
Real operator -(Real &A)
{
    return value -A.value;
}
Real operator *(Real &A)
{
    return value *A.value;
}
Real operator /(Real &A)
{
    return value /A.value;
}
void display()
{
cout<<value<<endl;
}
};
main()
{
Real A(6.5);
Real B(3.5) ;
Real C = A+B ;
Real D = A-B ;
Real E = A*B ;
Real F = A/B ;
C.display();
D.display();
E.display();
F.display();
getch();
}
