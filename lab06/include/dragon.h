#ifndef DRAGON_H
#define DRAGON_H

#include "npc.h"

class Frog;
class Knight;

class Dragon : public NPC {
public:
    Dragon(const std::string& name, int x, int y) : NPC(name, x, y) {}

    std::string getType() const override { return "Dragon"; }

    bool canDefeat(NPC* other) const override {
        return other->getType() == "Knight";
    }

    void accept(BattleVisitor* visitor, NPC* attacker, const int& distance) override;
};

#endif
