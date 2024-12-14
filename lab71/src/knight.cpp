#include "../include/knight.h"
#include <iostream>
#include <cmath>
#include "../include/Dragon.h"
#include "../include/Frog.h"
#include "../include/NPC.h"

Knight::Knight(int x, int y, const std::string& name) : NPC(KnightType, x, y, name) {}

Knight::Knight(std::istream& is) : NPC(KnightType, is) {}

void Knight::print() {
    std::cout << *this;
}

bool Knight::is_knight() const {
    return true;
}

bool Knight::fight(std::shared_ptr<Dragon> other) {
    fight_notify(other, true); 
    return true;
}

bool Knight::fight(std::shared_ptr<Frog> other) {
    fight_notify(other, false);
    return false;
}

bool Knight::fight(std::shared_ptr<Knight> other) {
    fight_notify(other, false); 
    return false;
}

void Knight::save(std::ostream& os) {
    os << KnightType << std::endl;
    NPC::save(os);
}

std::ostream& operator<<(std::ostream& os, Knight& Knight) {
    os << "Knight: " << *static_cast<NPC*>(&Knight) << std::endl;
    return os;
}

bool Knight::accept(std::shared_ptr<NPC> attacker) {
    return NPC::accept(attacker);
}