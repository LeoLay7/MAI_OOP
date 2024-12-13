#ifndef BATTLEVISITOR_H
#define BATTLEVISITOR_H

#include "npc.h"
#include <vector>
#include <cmath>
#include <memory>

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

public:
    explicit BattleVisitor(double range) : range(range) {} // Конструктор который инициализирует объект с заданной дальностью range

    void addObserver(Observer* observer) { // Добавляет наблюдателя в список наблюдателей
        observers.push_back(observer);
    }

    void execute(std::vector<std::unique_ptr<NPC>>& npcs) { // Выполняет цикл сражения между NPC
        for (size_t i = 0; i < npcs.size(); ++i) {
            for (size_t j = i + 1; j < npcs.size(); ++j) {
                if (isInRange(npcs[i].get(), npcs[j].get())) {
                    if (npcs[i]->canDefeat(npcs[j].get())) {
                        notify(npcs[i]->getName() + " defeated " + npcs[j]->getName());
                        npcs.erase(npcs.begin() + j);
                        --j;
                    } else if (npcs[j]->canDefeat(npcs[i].get())) {
                        notify(npcs[j]->getName() + " defeated " + npcs[i]->getName());
                        npcs.erase(npcs.begin() + i);
                        --i;
                        break;
                    }
                }
            }
        }
    }
};

#endif
