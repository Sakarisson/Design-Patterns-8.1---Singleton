#include "NiceGameFactory.h"

NiceGameFactory::NiceGameFactory() {

}

NiceGameFactory::~NiceGameFactory() {

}

std::vector<Obstacle*> NiceGameFactory::getObstacles() {
    std::vector<Obstacle*> obstacles;
    return obstacles;
}

std::vector<Action*> NiceGameFactory::getActions() {
    std::vector<Action*> actions;
    return actions;
}

std::string NiceGameFactory::getTitle() const {
    return "Nice game";
}
