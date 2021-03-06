#include <iostream>


class Animal {
public:
    virtual void speak(){
        std::cout << "Animal is speaking" << std::endl;
    }
    virtual void sleep(){
        std::cout << "I am sleeping ...." << std::endl;
    }
};

class Cat : public Animal {
public:
    void speak() {
        std::cout << "Cat speaking" << std::endl;
    }
    void sleep() {
        std::cout << "I am a sleeping cat?" << std::endl;
    }
};

class MyCat : public Cat {
public:
    void speak() {
        std::cout << "I am Dr. K's cat, don't you know" << std::endl; 
    }
};

int main() {
    // Adding a comment
    MyCat mycat;
    mycat.speak();
    // Creating an animal class that I wrote
    Animal* aCat = new MyCat();
    aCat -> speak();
    delete aCat;
}
