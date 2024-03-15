#include <iostream>
#include <string>

using namespace std;

class Lecture {
public:
    // Data members to store lecture details
    string lecturer_name;
    string subject_name;
    string course_name;
    int num_lecturers;

    // Constructor to initialize the lecture object
    Lecture(string lecturer_name, string subject_name, string course_name, int num_lecturers) 
	{
        this->lecturer_name = lecturer_name;
        this->subject_name = subject_name;
        this->course_name = course_name;
        this->num_lecturers = num_lecturers;
    }

    // Method to display the lecture details
    void displayLectureDetails() 
	{
        cout << "Lecturer Name: " << lecturer_name << endl;
        cout << "Subject Name: " << subject_name << endl;
        cout << "Course Name: " << course_name << endl;
        cout << "Number of Lecturers: " << num_lecturers << endl;
    }
	
};

int main() 
{
    // Create some lecture objects
    Lecture lecture1("mansi patel", "Computer Science", "Introduction to Programming", 1);
    Lecture lecture2("Dr. Jones", "Mathematics", "Calculus", 2);

    // Display the lecture details
    lecture1.displayLectureDetails();
    lecture2.displayLectureDetails();

}
