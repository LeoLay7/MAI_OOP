#include "../include/frog.h"
#include "../include/knight.h"
#include "../include/dragon.h"

void Frog::accept(BattleVisitor* visitor, NPC* attacker, const int& distance) {
    visitor->visitFrog(this, attacker);
}
