#include "../include/frog.h"
#include "../include/knight.h"
#include "../include/dragon.h"

void Dragon::accept(BattleVisitor* visitor, NPC* attacker, const int& distance) {
    visitor->visitDragon(this, attacker);
}
