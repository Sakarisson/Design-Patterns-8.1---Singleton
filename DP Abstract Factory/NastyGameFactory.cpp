#include "NastyGameFactory.h"

NastyGameFactory::~NastyGameFactory() {

}

std::vector<Obstacle*> NastyGameFactory::getObstacles() {
    std::vector<Obstacle*> obstacles;
    obstacles.push_back(new Dragon());
    obstacles.push_back(new Bomb());
    obstacles.push_back(new Samuray());
    obstacles.push_back(new SumoWrestler());
    obstacles.push_back(new Gangster());
    return obstacles;
}

std::vector<Action*> NastyGameFactory::getActions() {
    std::vector<Action*> actions;
    actions.push_back(new BowAndShakeHandsAction());
    actions.push_back(new RunAndHideAction());
    actions.push_back(new SwordAction());
    actions.push_back(new RifleAction());
    actions.push_back(new OfferFoodAction());
    actions.push_back(new ChainsawAction());
    actions.push_back(new CastAspellAction());
    actions.push_back(new BargainAndBuyAction());
    actions.push_back(new SurrenderAction());
    return actions;
}

Player* NastyGameFactory::getPlayer() {
    return new HeroPlayer();
}

std::string NastyGameFactory::getTitle() const {
    return "Nasty game";
}
