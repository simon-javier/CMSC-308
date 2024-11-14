#include <iostream>
#include <vector>
#include <string>
#include <limits>

struct Student {
    std::string name;
    int grade;
};

void addStudent(std::vector<Student>& students) {
    Student student;
    std::cout << "Enter student name: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear input buffer
    std::getline(std::cin, student.name);
    std::cout << "Enter student grade: ";
    std::cin >> student.grade;
    students.push_back(student);
}

double calculateAverageGrade(const std::vector<Student>& students) {
    int sum = 0;
    for (const auto& student : students) {
        sum += student.grade;
    }
    return students.empty() ? 0 : static_cast<double>(sum) / students.size();
}

void displayHighestAndLowest(const std::vector<Student>& students) {
    if (students.empty()) {
        std::cout << "No students in the list.\n";
        return;
    }

    auto highest = students[0];
    auto lowest = students[0];

    for (const auto& student : students) {
        if (student.grade > highest.grade) {
            highest = student;
        }
        if (student.grade < lowest.grade) {
            lowest = student;
        }
    }

    std::cout << "Highest Grade: " << highest.name << " with " << highest.grade << "\n";
    std::cout << "Lowest Grade: " << lowest.name << " with " << lowest.grade << "\n";
}

void displayAboveThreshold(const std::vector<Student>& students, int threshold) {
    bool found = false;
    for (const auto& student : students) {
        if (student.grade > threshold) {
            std::cout << student.name << " with grade " << student.grade << "\n";
            found = true;
        }
    }
    if (!found) {
        std::cout << "No students have a grade above " << threshold << ".\n";
    }
}

void showMenu() {
    std::cout << "\n--- Student Grade Manager ---\n";
    std::cout << "1. Add a student\n";
    std::cout << "2. Calculate average grade\n";
    std::cout << "3. Display highest and lowest grades\n";
    std::cout << "4. Display students above a threshold\n";
    std::cout << "5. Exit\n";
    std::cout << "Choose an option: ";
}

int main() {
    std::vector<Student> students;
    int choice;

    do {
        showMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                addStudent(students);
                break;
            case 2:
                std::cout << "Average grade: " << calculateAverageGrade(students) << "\n";
                break;
            case 3:
                displayHighestAndLowest(students);
                break;
            case 4: {
                int threshold;
                std::cout << "Enter grade threshold: ";
                std::cin >> threshold;
                displayAboveThreshold(students, threshold);
                break;
            }
            case 5:
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}

