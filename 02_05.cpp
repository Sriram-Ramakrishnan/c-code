#include <iostream>
using namespace std;
class rectangle{
    double a,b;
public:
    void setDim(){
        cout << "Enter Length:"; cin >> a;
        cout << "Enter Width:"; cin >> b;
    }

    double getArea(){
        double area = a*b;
        cout << "Area :" << area << endl;
        return area;
    }
};

int main(){
    rectangle R;
    R.setDim();
    R.getArea();
    return 0;
}
