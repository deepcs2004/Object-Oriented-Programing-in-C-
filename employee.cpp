#include <iostream>
#include <string>

class Employee {
protected:
    std::string name;
    int employeeId;

public:
    Employee(const std::string& n, int id) : name(n), employeeId(id) {}

    virtual void displayInfo() const {
        std::cout << "Employee ID: " << employeeId << "\nName: " << name << "\n";
    }

    virtual double calculateSalary() const = 0;
};

class Developer : public Employee {
protected:
    std::string programmingLanguage;

public:
    Developer(const std::string& n, int id, const std::string& lang)
        : Employee(n, id), programmingLanguage(lang) {}

    void displayInfo() const override {
        Employee::displayInfo();
        std::cout << "Programming Language: " << programmingLanguage << "\n";
    }

    double calculateSalary() const override {
        return 50000.0;
    }
};

class Manager : public Employee {
protected:
    int teamSize;

public:
    Manager(const std::string& n, int id, int size)
        : Employee(n, id), teamSize(size) {}

    void displayInfo() const override {
        Employee::displayInfo();
        std::cout << "Team Size: " << teamSize << "\n";
    }

    double calculateSalary() const override {
        return 60000.0 + 1000.0 * teamSize;
    }
};

int main() {
    Developer dev("John Doe", 101, "C++");
    Manager manager("Alice Smith", 201, 10);

    std::cout << "Developer Information:\n";
    dev.displayInfo();
    std::cout << "Salary: $" << dev.calculateSalary() << "\n\n";

    std::cout << "Manager Information:\n";
    manager.displayInfo();
    std::cout << "Salary: $" << manager.calculateSalary() << "\n";

    return 0;
}
