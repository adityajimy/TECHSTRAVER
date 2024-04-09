#include <iostream>
using namespace std;

int main() {
  // Get the number of courses from the user.
  int numCourses;
  cout << "Enter the number of courses: ";
  cin >> numCourses;

  // Create an array to store the grades for each course.
  float grades[numCourses];

  // Get the grades for each course from the user.
  for (int i = 0; i < numCourses; i++) {
    cout << "Enter the grade for course " << i + 1 << ": ";
    cin >> grades[i];
  }

  // Calculate the CGPA.
  float cgpa = 0;
  for (int i = 0; i < numCourses; i++) {
    cgpa += grades[i];
  }
  cgpa /= numCourses;

  // Display the CGPA.
  cout << "Your CGPA is: " << cgpa << endl;

  return 0;
}