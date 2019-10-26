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
void display()
{
cout<<value;
}
};
main()
{
Real A(6.5);
Real B(3.5) ;
Real C = A+B ;
C.display();
getch();
}
