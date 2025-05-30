#include <iostream>
using namespace std;

class Student {
protected:
    char name[50];
    bool isExpelled;

public:
    Student(const char* studentName) : isExpelled(false) {
        int i = 0;
        while (studentName[i] != '\0' && i < 49) {
            name[i] = studentName[i];
            i++;
        }
        name[i] = '\0';
    }

    virtual ~Student() {}

    const char* getName() const { return name; }
    bool getIsExpelled() const { return isExpelled; }

    virtual void displayInfo() const {
        cout << "Студент: " << name << " | Статус: "
            << (isExpelled ? "Отчислен" : "Учится") << endl;
    }
};

class ExpelledStudent : public Student {
private:
    char reason[100];

public:
    ExpelledStudent(const char* name, const char* expelReason) : Student(name) {
        isExpelled = true;
        int i = 0;
        while (expelReason[i] != '\0' && i < 99) {
            reason[i] = expelReason[i];
            i++;
        }
        reason[i] = '\0';
    }

    void displayInfo() const override {
        cout << "Отчисленный студент: " << name << reason << endl;
    }
};

class College {
private:
    static const int MAX_STUDENTS = 100;
    static const int MAX_AUDITORIUMS = 20;

    Student* students[MAX_STUDENTS];
    int studentCount = 0;

    struct Auditorium {
        int number;
        int capacity;
    } auditoriums[MAX_AUDITORIUMS];
    int auditoriumCount = 0;

public:
    ~College() {
        for (int i = 0; i < studentCount; ++i) {
            delete students[i];
        }
    }

    void addStudent(Student* student) {
        if (studentCount >= MAX_STUDENTS) {
            cerr << "Ошибка: достигнут лимит студентов!" << endl;
            return;
        }

        for (int i = 0; i < studentCount; ++i) {
            bool isSame = true;
            const char* name1 = students[i]->getName();
            const char* name2 = student->getName();

            int j = 0;
            while (name1[j] != '\0' && name2[j] != '\0') {
                if (name1[j] != name2[j]) {
                    isSame = false;
                    break;
                }
                j++;
            }

            if (isSame && name1[j] == '\0' && name2[j] == '\0') {
                cerr << "Ошибка: студент " << name1 << " уже существует!" << endl;
                delete student;
                return;
            }
        }

        students[studentCount++] = student;
    }

    void addAuditorium(int number, int capacity) {
        if (auditoriumCount >= MAX_AUDITORIUMS) {
            cerr << "Ошибка: достигнут лимит аудиторий!" << endl;
            return;
        }
        auditoriums[auditoriumCount++] = { number, capacity };
    }

    void displayAllStudents() const {
        for (int i = 0; i < studentCount; ++i) {
            students[i]->displayInfo();
        }
    }

    void displayAllAuditoriums() const {
        for (int i = 0; i < auditoriumCount; ++i) {
            cout << "Аудитория №" << auditoriums[i].number
                << " | Вместимость: " << auditoriums[i].capacity << " чел." << endl;
        }
    }
};

class AlexeySotnikov : public Student {
public:
    AlexeySotnikov() : Student("Алексей Сотников") {}
};

int main() {
    setlocale(LC_ALL, "RUS");
    College college;

    college.addAuditorium(101, 30);
    college.addAuditorium(205, 50);

    college.addStudent(new Student("Иван Петров"));
    college.addStudent(new AlexeySotnikov());
    college.addStudent(new ExpelledStudent("кощей кощеич", ""));

    college.addStudent(new Student("Иван Петров"));

    college.displayAllAuditoriums();
    college.displayAllStudents();

    return 0;
}
