#pragma once
#include "bird.h"

class Penguin : public Bird {
public:
    Penguin() : Bird("Penguin") {
        cry();
    }

    ~Penguin() override {
        cry();
    }

    void cry() override {
        std::cout << "Squawk!" << std::endl;
    }

    void fly() override {
        std::cout << "This bird can't fly." << std::endl;
    }
};
