// DatingPoolSimulator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>


using namespace std;

class Person {
private: 
  
   int age;
   string name; 
   double weight; 
   double height;
   int compatibilityScore;  


public: 
    Person( int age_ , string name_ , double weight_ , double height_ , int compatibilityScore_) :
    age(age_) , name(name_) , weight(weight_), height(height_) , compatibilityScore(compatibilityScore_)
    
    {
    
    
    }

    int GetAge()
    {
        return age; 
    }

    string GetName()
    {
       return name; 
    }
    
    double GetWeight()
    {
        return weight ; 
    }

    double GetHeight()
    {
      return height; 
    }

    int GetCompatibilityScore()
    {
      return compatibilityScore; 
    }


};

int main()
{
   Person person1 (22, "sarah", 45.4, 34.5 , 56);
    cout <<   person1.GetName() << " is  " <<  person1.GetAge() << "years old";
     person1.GetCompatibilityScore(40);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
