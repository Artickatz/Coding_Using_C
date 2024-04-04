#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;
    std::string country;

public:
    Person() : name(""), age(0), country("") {}

    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setCountry(const std::string& newCountry) {
        country = newCountry;
    }

    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getCountry() const {
        return country;
    }
};

int main() {
    Person person;

    person.setName("John Doe");
    person.setAge(25);
    person.setCountry("USA");

    std::cout << "Name: " << person.getName() << std::endl;
    std::cout << "Age: " << person.getAge() << std::endl;
    std::cout << "Country: " << person.getCountry() << std::endl;

    return 0;
}
