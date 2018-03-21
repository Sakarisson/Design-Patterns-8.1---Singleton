#include "NiceGameFactory.h"

NiceGameFactory*  NiceGameFactory::_instance = nullptr;

NiceGameFactory::~NiceGameFactory() {

}

std::vector<Obstacle*> NiceGameFactory::getObstacles() {
    std::vector<Obstacle*> obstacles;
    obstacles.push_back(new Wizard());
    obstacles.push_back(new Wall());
    obstacles.push_back(new Elephant());
    obstacles.push_back(new DPexam());
    return obstacles;
}

std::vector<Action*> NiceGameFactory::getActions() {
    std::vector<Action*> actions;
    actions.push_back(new BowAndShakeHandsAction());
    actions.push_back(new RunAndHideAction());
    actions.push_back(new BargainAndBuyAction());
    actions.push_back(new ChainsawAction());
    actions.push_back(new ClimbAction());
    actions.push_back(new CastAspellAction());
    actions.push_back(new SurrenderAction());
    return actions;
}

Player* NiceGameFactory::getPlayer() {
    return new OrdinaryPlayer();
}

std::string NiceGameFactory::getTitle() const {
    return "Nice game";
}
