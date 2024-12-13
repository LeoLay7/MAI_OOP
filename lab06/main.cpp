#include <iostream>
#include "include/factory.h"
#include "include/visitor.h"
#include "include/consoleobserv.h"
#include "include/logobserv.h"

int main() {
    std::vector<std::unique_ptr<NPC>> npcs;
    npcs.push_back(Factory::createNPC("Dragon", "Dragon1", 100, 100));
    npcs.push_back(Factory::createNPC("Knight", "Knight1", 150, 150));
    npcs.push_back(Factory::createNPC("Frog", "Frog1", 200, 200));

    ConsoleObserver consoleObserver;
    LogObserver logObserver("log.txt");

    for (const auto& npc : npcs) {
        npc->attach(&consoleObserver);
        npc->attach(&logObserver);
    }

    BattleVisitor battleVisitor(300);
    battleVisitor.addObserver(&consoleObserver);
    battleVisitor.addObserver(&logObserver);

    battleVisitor.execute(npcs);

    for (const auto& npc : npcs) {
        npc->print(std::cout);
    }

    return 0;
}

