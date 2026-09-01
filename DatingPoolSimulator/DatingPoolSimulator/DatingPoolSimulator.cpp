// DatingPoolSimulator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>


using namespace std;

int matchCount = 0;
int minimumAge;
int maximumAge;
int minimumCompatibility;
int minimumHeight;
int maximumHeight;

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

    void SetCompatibilityScore( int compatibilityScore)
    {
       this->compatibilityScore = compatibilityScore; 
    }

    void SetName(string name)
    {
       this->name = name; 
    }

    void SetAge(int age)
    {
        this->age = age;
    }

    void SetHeight(int height)
    {
        this->height = height;
    }

   
};

void FilterStats()
{
    cout << "Enter Minimum Age" << endl;
    cin >> minimumAge;

    cout << "Enter Maximum Age" << endl;
    cin >> maximumAge;

    while (minimumAge > maximumAge)
    {
        cout << "minimum age cannot be greater than maximum age" << endl;
        cout << "Enter Minimum Age" << endl;
        cin >> minimumAge;

        cout << "Enter Maximum Age" << endl;
        cin >> maximumAge;
    }

    cout << "Enter Minimum Compatibility" << endl;
    cin >> minimumCompatibility;

    cout << "Enter Minimum Height" << endl;
    cin >> minimumHeight;

    cout << "Enter Maximum Height" << endl;
    cin >> maximumHeight;

    while (minimumHeight > maximumHeight)
    {
        cout << "minimum height cannot be greater than maximum hieght" << endl;
        cout << "Enter Minimum Height" << endl;
        cin >> minimumHeight;

        cout << "Enter Maximum Height" << endl;
        cin >> maximumHeight;
    }


}



int main()
{


// Person 1 
   Person person1 (22, "sarah", 45.4, 34.5 , 56);
   cout << "name: " << person1.GetName() << endl << "Age: " << person1.GetAge() << endl << "Height: " << person1.GetHeight() << endl << "Compatibility Score: " << person1.GetCompatibilityScore() << endl;

// Person 2 
    Person person2 (24, "Johne", 45.6, 44.5, 40);
    cout << "name: " << person2.GetName() << endl << "Age: " << person2.GetAge() << endl << "Height: " << person2.GetHeight() << endl << "Compatibility Score: " << person2.GetCompatibilityScore() << endl;

// Person 3 
    Person person3 (30, "lynn", 56.4, 43.45, 30);
    cout << "name: " << person3.GetName() << endl << "Age: " << person3.GetAge() << endl << "Height: " << person3.GetHeight() << endl << "Compatibility Score: " << person3.GetCompatibilityScore() << endl << endl;

    // Person 4
    Person person4(40, "Beck", 50.43, 60, 66);
    cout << "name: " << person4.GetName() << endl << "Age: " << person4.GetAge() << endl << "Height: " << person4.GetHeight() << endl << "Compatibility Score: " << person4.GetCompatibilityScore() << endl << endl;

    // Person 5
    Person person5(21, "Marie", 70, 32.45, 10);
    cout << "name: " << person5.GetName() << endl << "Age: " << person5.GetAge() << endl << "Height: " << person5.GetHeight() << endl << "Compatibility Score: " << person5.GetCompatibilityScore() << endl << endl;

 
     person1.SetCompatibilityScore(40);
     person2.SetAge(30);
     person2.GetAge(); 
     

  //   cout << person2.GetAge();
   

     vector<Person> newPerson; 

     newPerson.push_back(person1); 
     newPerson.push_back(person2); 
     newPerson.push_back(person3);
     newPerson.push_back(person4); 
     newPerson.push_back(person5); 



     FilterStats(); 
      
   


     for (int i = 0; i < newPerson.size(); i++)
     {
        if (newPerson[i].GetAge() >= minimumAge && newPerson[i].GetCompatibilityScore() >= minimumCompatibility && newPerson[i].GetAge() <= maximumAge && newPerson[i].GetHeight()>= minimumHeight && newPerson[i].GetHeight() <= maximumHeight)
        { 
       cout << newPerson[i].GetName() << endl <<"Age: " << newPerson[i].GetAge()<< endl << "Compatibility Score:" << newPerson[i].GetCompatibilityScore() << endl << endl;

        
         matchCount++;
         if (matchCount == 0)
         {
             cout << "No matches found." << endl;
         }
         else
         {
             cout << "Matches found: " << matchCount << endl;
             cout << "Name: " << newPerson[i].GetName() << endl << "Age: " << newPerson[i].GetAge() << endl << "Height: " << newPerson[i].GetHeight() << endl << "Compatibility Score : " << newPerson[i].GetCompatibilityScore() << endl;

         }  
       
     }
      

     
}
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
