#include "../include/frog.h"
#include "../include/knight.h"
#include "../include/dragon.h"

void Knight::accept(BattleVisitor* visitor, NPC* attacker, const int& distance) {
    visitor->visitKnight(this, attacker);
}
