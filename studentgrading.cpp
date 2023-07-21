#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct Student {
    std::string name;
    double grade;
};

int main() {
    std::vector<Student> students;
    int numStudents;
    double totalGrade = 0.0;

    std::cout << "Enter the number of students: ";
    std::cin >> numStudents;

    for (int i = 0; i < numStudents; ++i) {
        Student student;
        std::cout << "Enter student name: ";
        std::cin.ignore(); // Ignore the newline character left by previous input
        std::getline(std::cin, student.name);

        std::cout << "Enter " << student.name << "'s grade: ";
        std::cin >> student.grade;
        totalGrade += student.grade;

        students.push_back(student);
    }

    if (numStudents > 0) {
        double averageGrade = totalGrade / numStudents;
        std::sort(students.begin(), students.end(), [](const Student& a, const Student& b) {
            return a.grade < b.grade;
        });

        std::cout << "\nStudent Grades:\n";
        for (const auto& student : students) {
            std::cout << student.name << ": " << student.grade << "\n";
        }

        std::cout << "\nAverage Grade: " << averageGrade << "\n";
        std::cout << "Highest Grade: " << students.back().grade << " (Student: " << students.back().name << ")\n";
        std::cout << "Lowest Grade: " << students.front().grade << " (Student: " << students.front().name << ")\n";
    } else {
        std::cout << "No students entered.\n";
    }

    return 0;
}

