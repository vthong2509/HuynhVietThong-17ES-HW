

#include <iostream>
#include <conio.h>

using namespace std;
const int MAX=1000;
class Vector
{
private:
    int n;
    float *data;
public:
    Vector()
    {
        cout<< "Nhap so phan tu: ";
        cin >> this->n;
        new float[data]
        for (int i=0; i<= n-1; i++)
            {
                cout << "Nhap gia tri thu "<<i+1<<": " ;
                cin >> data[i];

            }
       //*data = Data;
    }

    Vector(int n, float *a[])
    {

        this->n= n;
        *data= *a[n];
    }
    ~Vector()
    {
        delete[]data;
    }
    int Capacity()
    {
        return n;
    };
    void clear()
    {
        data= NULL;
        n =0;
    }
    bool contains(float elem)
    {
        float Data[n] = {*data};
       // int c = 0;
        for ( int i = 0; i<=n; i++)
            {
                if (Data[i]== elem)
                return true;
            }
        return false;
    }
    int indexOf(float elem)
    {
        float Data[n] = {*data};
        int i=0;
        if (contains(elem))
        {
            while (i<=n)
            {
                if (Data[i]==elem)
                break;
                else i++;
            }
        }
        return i;
    }
    int lastIndexOf(float elem)
    {
        float Data[n] = {*data};
        int i=0;
        int c=0;
        if (contains(elem))
        {
            while (i <=n)
            {
                if(Data[i]==elem)
                {
                    c = i;
                }
                else i++;
            }
        }
        return c;
    }
    bool isEmpty()
    {
        if (n<=0) return true;
        else return false;
    }
    float toArray();
    void display()
    {
       // float Data[n-1] =  {*data};
       // for (int i=0; i<=n; i++)
        cout << *data << "  ";
    }
};



//Vector Vector(int n, float *a)
//{
//    for (int i = 0, i <= n, i++)
//    {
//        cout <<
//    }
//}


int main()
{
    float a[4]={1,3,4,5};
    Vector A = Vector();
   /* cout << A.Capacity();
    A.Vector(4);
    A.isEmpty();
    A.indexOf(5);
    A.lastIndexOf(2);
    A.display();
    A.clear();*/
    A.display();

    return 0;
}
