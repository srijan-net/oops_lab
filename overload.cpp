#include<iostream>
using namespace std;
class area
{
    private:
    float side;  //square
    double base,height; // triangle
    float length;  //rectangle
    float breath;
    public:
    float calculate_Area(float side)
    {
        return (side*side);
    }
    float calculate_Area(float length,float breath)
    {
        return (length*breath);
    }
    double calculate_Area(double base,double height)
    {
        return (0.5*base*height);
    }
};
int main()
{
    area a1;
    float sq_side;
    float length_side;
    float breath_side;
    double base_side;
    double height_side;
    cout<<"enter side of square-> ";
    cin>>sq_side;
    cout<<"area of square is-> "<<a1.calculate_Area(sq_side)<<"\n";
    cout<<"enter length of rectang-> ";
    cin>>length_side;
    cout<<"enter breath of rectang-> ";
    cin>>breath_side;
    cout<<"area of rectangle is-> "<<a1.calculate_Area(length_side,breath_side)<<"\n";
    cout<<"enter base of triangle-> ";
    cin>>base_side;
    cout<<"enter height of triangle-> ";
    cin>>height_side;
    cout<<"area of triangle is-> "<<a1.calculate_Area(base_side,height_side)<<"\n";








}