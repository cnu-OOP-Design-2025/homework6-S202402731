#pragma once
#include "bird.h"

class Duck : public Bird {
public:
    Duck() : Bird("Duck") {
        cry();
    }

    ~Duck() override {
        cry();
    }

    void cry() override {
        std::cout << "Quack!" << std::endl;
    }
};
