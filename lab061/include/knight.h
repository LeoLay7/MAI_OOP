#ifndef KNIGHT_H
#define KNIGHT_H

#include "npc.h"

class Dragon;
class Frog;

class Knight : public NPC {
public:
    Knight(const std::string& name, int x, int y) : NPC(name, x, y) {}

    std::string getType() const override { return "Knight"; }

    bool canDefeat(NPC* other) const override {
        return other->getType() == "Dragon";
    }

    void accept(NPC* attacker, const int& distance) override;
};

#endif
