#include "../include/frog.h"
#include "../include/knight.h"
#include "../include/dragon.h"

void Dragon::accept(NPC* attacker, const int& distance) {
    if (!isDead() && (dynamic_cast<Knight*>(attacker) || dynamic_cast<Frog*>(attacker))) {
        bool win = isInRange(attacker, distance);
        if (win) {
            die();
            notify(attacker, win);
        }
    }
    
}
