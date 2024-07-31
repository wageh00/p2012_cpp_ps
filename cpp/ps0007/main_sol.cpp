
#include <iostream>
using namespace std;
enum shape{cricl,triangel,squar};
const float PI = 3.141f;
int main()
{
    int c,l;
    double area;
    cout << "please enter the number of the shape \n0>>circle\n1>>triangel\n2>>squar\n";
    cin >> c;
    shape s;
    s = (shape)c;
    if (s == shape::cricl)
    {
        cout << "please enter the radious of circle\n";
        int r;
        cin >> r;
        area =  PI * r * r;
        cout << "the area = " << area<<endl;
    }
    if (s == shape::squar)
    {
        cout << "please enter the side of squal"<<endl;
        cin >> l;
        area = l * l;
        cout << "the area = " << area << endl;
    }
    if (s == shape::triangel)
    {
        int n, m;
        cout << "please enter the base and hight of triangel \n";
        cin >> n >> m;
        area = (1 / 2 * n) * m;
        cout << "the area = " << area << endl;
    }
}
