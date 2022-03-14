#include <iostream>


class Animal {
public:
    virtual void speak(){
        std::cout << "Animal speaking" << std::endl;
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
    MyCat mycat;
    mycat.speak();
    Animal* aCat = new MyCat();
    aCat -> speak();
    delete aCat;
}
