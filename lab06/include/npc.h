#pragma once
#ifndef NPC_H
#define NPC_H

#include <string>
#include <list>
#include <iostream>
#include <cmath>
#include "observer.h"
#include "visitor.h"

class Observer;
class BattleVisitor;

class NPC {
protected:
    std::string name;
    int x, y;
    bool dead = false;
    std::list<Observer*> observers;

public:
    NPC(const std::string& name, int x, int y) : name(name), x(x), y(y) {}
    virtual ~NPC() = default;

    virtual std::string getType() const = 0;
    const std::string& getName() const { return name; }
    int getX() const { return x; }
    int getY() const { return y; }
    bool isDead() const { return dead; }
    virtual void die() { dead = true; }
    virtual bool canDefeat(NPC* other) const = 0;

    std::ostream& print(std::ostream& os) const {
        os << getType() << " [" << name << "] (" << x << ", " << y << ")"
                  << (isDead() ? " - DEAD" : "") << std::endl;
        return os;
    }

    virtual void accept(BattleVisitor* visitor, NPC* attacker, const int& distance) = 0;
    virtual void attach(Observer* observer) { observers.push_back(observer); }
    virtual void detach(Observer* observer) { observers.remove(observer); }

};

#endif
