#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Numbmer of student:";
    cin >> num;

    for (int i = 1; i <= num; i++) ;
    int grade;
    cout << "grade of student" << i << "= \n";
    cin >> grade;

    char classification;
    if (grade >= 90)
        classification = 'A';
    else if (grade >= 80)
        classification = 'B';
    else if (grade >= 70)
        classification = 'C';
    else if (grade >= 60)
        classification = 'D';
    else
        classification = 'F';

    cout << "Student " << i << "grade= " << grade << "(" << classification << ")\n";
}
