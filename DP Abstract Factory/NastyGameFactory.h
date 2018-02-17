#ifndef NASTYGAMEFACTORY_H
#define NASTYGAMEFACTORY_H

#include "GameFactory.h"
class NastyGameFactory : public GameFactory {
public:
    NastyGameFactory();
    ~NastyGameFactory();

    std::vector<Obstacle*> getObstacles() override;
    std::vector<Action*> getActions() override;
    // Player* getPlayer() override;
    std::string getTitle() const override;
};

#endif
