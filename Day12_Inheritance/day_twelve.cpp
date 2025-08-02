
#include <iostream>
#include <vector>
using namespace std;

class Person {
protected:
    string firstName;
    string lastName;
    int age;

public:
    Person(string firstName, string lastName, int age)
        : firstName(firstName), lastName(lastName), age(age) {}

    void printPerson() {
        cout << "Name: " << lastName << ", " << firstName << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    vector<int> scores;

public:
    Student(string firstName, string lastName, int age, vector<int> scores)
        : Person(firstName, lastName, age), scores(scores) {}

    char calculate() {
        int total = 0;
        for (int score : scores) {
            total += score;
        }
        int avg = total / scores.size();

        if (avg >= 90) return 'O';
        else if (avg >= 80) return 'E';
        else if (avg >= 70) return 'A';
        else if (avg >= 55) return 'P';
        else if (avg >= 40) return 'D';
        else return 'T';
    }
};

int main() {
    string firstName, lastName;
    int age, numScores;

    cin >> firstName >> lastName >> age >> numScores;

    vector<int> scores(numScores);
    for (int i = 0; i < numScores; i++) {
        cin >> scores[i];
    }

    Student s(firstName, lastName, age, scores);
    s.printPerson();
    cout << "Grade: " << s.calculate() << endl;

    return 0;
}
