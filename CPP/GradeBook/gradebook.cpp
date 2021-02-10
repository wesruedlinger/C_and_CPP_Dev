#include <iostream>
#include <vector>
using namespace std;

class Student
{
private:
    string fname;
    string lname;
    float gpa;
    vector<float> grades;
public:
    //Constructors
    Student()
    {
        this->fname = "";
        this->lname = "";
        this->gpa = 0.0;
    }
    Student(string f, string l)
    {
        this->fname = f;
        this->lname = l;
        this->gpa = 0.0;
    }
    //Getters
    void Show(void)
    {
        cout << "First: " << this->fname << endl;
        cout << "Last : " << this->lname << endl;
        cout << "GPA  : " << this->gpa << endl;
    }
};

int main(void)
{
    vector<int> grades;
    int grade = 0;
    bool mainloop = true;
    bool secloop;
    int total = 0;
    int average = 0;
    int i = 0;

    while (mainloop == true)
    {
        int option = 0;
        cout << "1.) Enter a new grade" << endl;
        cout << "2.) Show all grades" << endl;
        cout << "3.) Display average" << endl;
        cout << "4.) QUIT" << endl;
        cout << ">>> ";
        cin >> option;

        if(option == 1)
        {
            secloop = true;
            while (secloop == true)
            {
                cout << "Enter a grade (-1 to exit to main menu)\n";
                cin >> grade;
                if(grade == -1)
                {
                    secloop = false;
                }
                else if(grade < 0 || grade > 100)
                {
                    cout << "Grade is out of range..\n";
                }
                else
                {
                    grades.push_back(grade);
                }
            }
        }
        else if(option == 2)
        {
            for(i = 0; i < grades.size(); i += 1)
            {
                cout << "Grade # " << i + 1 << " is " << grades.at(i) << "\n";
            }
        }
        else if(option == 3)
        {
            total += grades.size();
            average = total/grades.size();
            cout << average << endl;
        }
        /*
        if(average >= 90)
        {
            cout << "You an \"A\". With a GPA of " << average << "%" << endl;
        }
        else if(average >= 80 && average <= 89)
        {
            cout << "You a \"B\". With a GPA of " << average << "%" << endl;
        }
        else if(average >= 70 && average <= 79)
        {
            cout << "You a \"C\". With a GPA of " << average << "%" << endl;
        }
        else if(average >= 60 && average <= 69)
        {
            cout << "You a \"D\". With a GPA of " << average << "%" << endl;
        }
        else
        {
            cout << "You an \"F\". With a GPA of " << average << "%" << endl;
        }
        */
    }
    return 0;
}
