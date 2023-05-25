//===============================================================================
//  F I L E   C O N T E N T S
//-------------------------------------------------------------------------------
/// @file Assignment.cpp
///
/// @brief Read Releaseyear, Customer & Speed.
/// @author Praveen Kumar Gnanashekar 
//================================================================================
#include <iostream> 
using namespace std;

class Car 
{
private:
//An integer that holds the car’s year of release
  int ReleaseYear; 
//A string that holds the maker of the car
  string Customer;
//An integer that holds the car’s current speed
  int Speed;
  
public:
//Get the value of the release year of specific vechical 
  void GetValue_ReleaseYear(void);
//Get the Customer name    
  void GetValue_Customer(void);
//Get the speed of the vechical 
  void GetValue_Speed(void);
//Function used to accelrate   
  void Acclerate(void);
//Function used to deacclerate     
  void Deacclerate(void);
};


void Car:: GetValue_ReleaseYear(void)
{
    cout<<ReleaseYear<<endl;
}

void Car:: GetValue_Customer(void)
{
    cout<<Customer<<endl;
}

void Car:: GetValue_Speed(void)
{
    cout<<Speed<<endl; 
}

void Car :: Acclerate(void)
{
    Speed = Speed+10 ;
}

void Car :: Deacclerate(void)
{
    Speed = Speed-10 ;
}

int main()
{
    //with out constructor expilcilty written all the member varaibles will be initalized to zero with default constructor.
    Car Obj1;
    for(int i =0; i<5;i++)
    Obj1.Acclerate();
    Obj1.GetValue_Speed();
    for(int i =0; i<5;i++)
    Obj1.Deacclerate();
    Obj1.GetValue_Speed();
}
