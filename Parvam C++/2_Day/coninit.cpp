#include<iostream>
using namespace std;

class Point{
    private:
      const int x;
      const int y;
    
    public:
      Point(int xVal,int yVal) : x(xVal),y(yVal){
        cout << "Point(" << x << ", " << y << ") created" << endl;
      }
      
      void display() const {
        cout << "(" << x << ", " << y << ")" << endl;
      }
};

int main(){
    Point p1(10,20);
    Point p2(-5,15);

    p1.display();
    p2.display();

    return 0;
}