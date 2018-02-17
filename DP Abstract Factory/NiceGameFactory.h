#ifndef NICEGAMEFACTORY_H
#define NICEGAMEFACTORY_H

#include "GameFactory.h"
class NiceGameFactory :public GameFactory {
public:
    NiceGameFactory();
    ~NiceGameFactory();

    std::vector<Obstacle*> getObstacles() override;
    std::vector<Action*> getActions() override;
    // Player* getPlayer() override;
    std::string getTitle() const override;
};

#endif
