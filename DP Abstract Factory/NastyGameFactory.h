#ifndef NASTYGAMEFACTORY_H
#define NASTYGAMEFACTORY_H

#include "GameFactory.h"
#include "Obstacle.h"
#include "Action.h"
#include "Player.h"

class NastyGameFactory : public GameFactory {
public:
    ~NastyGameFactory();

    std::vector<Obstacle*> getObstacles() override;
    std::vector<Action*> getActions() override;
    Player* getPlayer() override;
    std::string getTitle() const override;

    static NastyGameFactory* getInstance() {
        if (_instance == nullptr) {
            _instance = new NastyGameFactory();
        }
        return _instance;
    }
private:
    NastyGameFactory() {}
    static NastyGameFactory* _instance;
};

#endif
