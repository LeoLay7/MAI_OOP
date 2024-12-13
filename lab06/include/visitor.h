#pragma once
#ifndef BATTLEVISITOR_H
#define BATTLEVISITOR_H

#include "npc.h"
#include "dragon.h"
#include "frog.h"
#include "knight.h"

#include <vector>
#include <cmath>
#include <memory>
#include <string>

class NPC;

class BattleVisitor {
private:
    double range;
    std::list<Observer*> observers;

    bool isInRange(NPC* a, NPC* b) const { // находятся ли два NPC в пределах заданного расстояния друг от друга
        double distance = std::sqrt(std::pow(a->getX() - b->getX(), 2) + std::pow(a->getY() - b->getY(), 2));
        return distance <= range;
    }

    void notify(const std::string& message) {
        for (auto observer : observers) {
            observer->update(message);
        }
    }

    std::string getDefeatMsg(NPC* npc1, NPC* npc2) {
        return npc1->getName() + " defeated " + npc2->getName();
    }



public:
    explicit BattleVisitor(double range) : range(range) {} // Конструктор который инициализирует объект с заданной дальностью range

    void addObserver(Observer* observer) { // Добавляет наблюдателя в список наблюдателей
        observers.push_back(observer);
    }

    void visitDragon(Dragon* dragon, NPC* attacker) {
        if (isInRange(dragon, attacker) && dragon->canDefeat(attacker)) {
            attacker->die();
            notify(getDefeatMsg(dragon, attacker));
        }
    }

    void visitFrog(Frog* frog, NPC* attacker) {
        if (isInRange(frog, attacker) && frog->canDefeat(attacker)) {
            attacker->die();
            notify(getDefeatMsg(frog, attacker));
        }
    }
    
    void visitKnight(Knight* knight, NPC* attacker) {
        if (isInRange(knight, attacker) && knight->canDefeat(attacker)) {
            attacker->die();
            notify(getDefeatMsg(knight, attacker));
        }
    }

    void execute(std::vector<std::unique_ptr<NPC>>& npcs) { // Выполняет цикл сражения между NPC
        for (size_t i = 0; i < npcs.size(); ++i) {
            for (size_t j = i + 1; j < npcs.size(); ++j) {
                NPC* npc1 = npcs[i].get();
                NPC* npc2 = npcs[j].get();

                npc1->accept(this, npc2, range);
                npc2->accept(this, npc2, range);
                
                if (npc1->isDead()) {
                    npcs.erase(npcs.begin() + i);
                    i--;
                }

                if (npc2->isDead()) {
                    npcs.erase(npcs.begin() + j);
                    j--;
                }

            }
        }
    }
};

#endif
