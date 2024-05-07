#include<iostream>
using namespace std;
 class shape{
 public:
 shape(){
 CountSide =0;
 name = "Фигура: ";
 }

 protected:
 int CountSide;
 string name;
 public:
 void print(){
 std::cout<< name;
 std::cout<< CountSide;
 std::cout<< "\n";
 }
 };
 class square:  public shape{
 public:

 square()  {
 CountSide= 4;
 name = "Квадрат: ";
 }

 };
 class triangle: public shape{
 public:
triangle(){
CountSide=3;
name = "Треугольник: ";
}

 };

int main()

{
std::cout<< "Количество сторон\n";
shape a;
 a.print();
 square b;
b.print();
 triangle c;
 c.print();


    return 0;
}