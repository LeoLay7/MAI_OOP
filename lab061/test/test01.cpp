#include <gtest/gtest.h>
#include "../include/dragon.h"
#include "../include/frog.h"
#include "../include/knight.h"
#include "../include/factory.h"
#include "../include/visitor.h"
#include "../include/ConsoleObserver.h"
#include "../include/LogObserver.h"
#include <memory>
#include <iostream>


TEST(NpcTest, test1) {
    std::unique_ptr<NPC> dragon = Factory::createNPC("Dragon", "Dragon1", 100, 100);
    ASSERT_EQ(dragon->getName(), "Dragon1");
    ASSERT_EQ(dragon->getType(), "Dragon");
    ASSERT_EQ(dragon->getX(), 100);
    ASSERT_EQ(dragon->getY(), 100);
}