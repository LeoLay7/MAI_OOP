#ifndef CONSOLEOBSERVER_H
#define CONSOLEOBSERVER_H

#include "observer.h"
#include <iostream>

class ConsoleObserver : public Observer {
public:
    void update(const std::string& message) override {
        std::cout << "Событие: " << message << std::endl;
    }
};

#endif
