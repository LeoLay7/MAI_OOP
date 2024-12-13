#ifndef FROG_H
#define FROG_H

#include "npc.h"

class Dragon;
class Knight;

class Frog : public NPC {
public:
    Frog(const std::string& name, int x, int y) : NPC(name, x, y) {}

    std::string getType() const override { return "Frog"; }

    bool canDefeat(NPC* other) const override {
        return true;
    }

    void accept(NPC* attacker, const int& distance) override;
};

#endif
