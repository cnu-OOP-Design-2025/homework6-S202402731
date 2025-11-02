#pragma once
#include "bird.h"

class Eagle : public Bird {
public:
    Eagle() : Bird("Eagle") {
        cry();
    }

    ~Eagle() override {
        cry();
    }

    void cry() override {
        std::cout << "Screech!" << std::endl;
    }

    void swim() override {
        std::cout << "This bird can't swim." << std::endl;
    }
};
