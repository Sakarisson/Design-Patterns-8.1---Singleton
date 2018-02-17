#ifndef OBSTACLEFACTORY_H
#define OBSTACLEFACTORY_H

#include "Obstacle.h"

#include <string>

class ObstacleFactory {
public:
    ObstacleFactory() {}
    virtual ~ObstacleFactory() = default;
    virtual Obstacle* createObstacle() = 0;
};

class WallObstacleFactory : public ObstacleFactory {
public:
    WallObstacleFactory() : ObstacleFactory() { }
    Obstacle* createObstacle() override { return new Wall(); }
};

class ElephantObstacleFactory : public ObstacleFactory {
public:
    ElephantObstacleFactory() : ObstacleFactory() { }
    Obstacle* createObstacle() override { return new Elephant(); }
};

class WizardObstacleFactory : public ObstacleFactory {
public:
    WizardObstacleFactory() : ObstacleFactory() { }
    Obstacle* createObstacle() override { return new Wizard(); }
};

class GangsterObstacleFactory : public ObstacleFactory {
public:
    GangsterObstacleFactory() : ObstacleFactory() { }
    Obstacle* createObstacle() override { return new Gangster(); }
};

class DragonObstacleFactory : public ObstacleFactory {
public:
    DragonObstacleFactory() : ObstacleFactory() { }
    Obstacle* createObstacle() override { return new Dragon(); }
};

class BombObstacleFactory : public ObstacleFactory {
public:
    BombObstacleFactory() : ObstacleFactory() { }
    Obstacle* createObstacle() override { return new Bomb(); }
};

class SamurayObstacleFactory : public ObstacleFactory {
public:
    SamurayObstacleFactory() : ObstacleFactory() { }
    Obstacle* createObstacle() override { return new Samuray(); }
};

class SumoWrestlerObstacleFactory : public ObstacleFactory {
public:
    SumoWrestlerObstacleFactory() : ObstacleFactory() { }
    Obstacle* createObstacle() override { return new SumoWrestler(); }
};

class DPexamObstacleFactory : public ObstacleFactory {
public:
    DPexamObstacleFactory() : ObstacleFactory() { }
    Obstacle* createObstacle() override { return new DPexam(); }
};

#endif // !OBSTACLEFACTORY_H
