 //Function Prototypes
 //area of the Circle and volume of a cylinder

 #include <iostream>
 using namespace std;

//function Prototypes 

 double calc_volume_cylinder(double radius,double height);
 double calc_area_circle(double );// optional variable name but datatype is important
 void area_circle();
 void volume_cylinder();

 //Above are the function Prototypes

 const double pi=3.14159;

 int main(){
    area_circle();
    volume_cylinder();
    return 0;
    
 }


 double calc_volume_cylinder(double radius,double height){
    return calc_area_circle(radius)*height;
 }


 double calc_area_circle(double radius){
    return pi*radius*radius;
 }


 void area_circle(){
    double radius{0};
    cout<<"\nEnter the radius of the circle:";
    cin>>radius;
    cout<<"The area of thr circle with Radius "<<radius<<" is "<<calc_area_circle(radius)<<endl;

 }

 void volume_cylinder(){
    double radius{0};
    double height{0};
    cout<<"\nEnter the Radius of the cylinder:";
    cin>>radius;
    cout<<"Enter the Height of the Cylinder: ";
    cin>>height;
    cout<<"\nThe volume of the cylinder with radius "<<radius<<" and height"<<height<<" is "<<calc_volume_cylinder(radius,height)<<endl;
 }