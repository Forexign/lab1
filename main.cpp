#include <iostream>

using namespace std;

int main()
{
    //Question 1
    string name;
    string studentId;
    cout << "What is your name: ";
    cin >> name;
    cout << "Hello " + name ;
    cout << "\n";
    cout << "What is your student ID: \n";
    cin >> studentId;
    cout << "Your ID is " + studentId << "\n";


    // Question 2
    cout << "***************************************** \n";
    int var1;
    int var2;
    cout << "Enter the first value: \n";
    cin >> var1;
    cout << "Enter the second value: \n";
    cin >> var2;
    int sum = var1+var2;
    int diff = var1-var2;
    int prod = var1*var2;
    cout << "*********************";
    cout << "\n";
    cout << "First variable is :" << var1 << "\n";
    cout << "Second variable is :" << var2 << "\n";
    cout << "Sum is : " << sum << "\n";
    cout << "Diff is : " << diff << "\n";
    cout << "Multiply is : " << prod << "\n";
    cout << "***************************************** \n";
    // Question 3
    string studentName;
    int labScore;
    int midtermScore;
    int finalScore;
    cout << "Please enter your name\n";
    cin >> studentName;
    cout << "Enter the lab score\n";
    cin >> labScore;
    cout << "Enter the midterm score \n";
    cin >> midtermScore;
    cout << "Enter the final score\n";
    cin >> finalScore;
    double lastScore = ((double)labScore*0.25) + ((double)midtermScore*0.35) + ((double)finalScore*0.4);
    cout << "Name: " << studentName   << "\n";
    cout << "Lab: " << labScore   << "\n";
    cout << "Midterm: " << midtermScore   << "\n";
    cout << "Final: " << finalScore   << "\n";
    cout << "Last Score: " << lastScore   << "\n";

    // Question 4
    cout << "*"     << "\n"
         << "**"    << "\n"
         << "***"   << "\n"
         << "**"    << "\n"
         << "*"     << "\n";


    return 0;
}
