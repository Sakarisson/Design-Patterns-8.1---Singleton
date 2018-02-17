#include "NastyGameFactory.h"

NastyGameFactory::NastyGameFactory() {

}

NastyGameFactory::~NastyGameFactory() {

}

std::vector<Obstacle*> NastyGameFactory::getObstacles() {
    std::vector<Obstacle*> obstacles;
    return obstacles;
}

std::vector<Action*> NastyGameFactory::getActions() {
    std::vector<Action*> actions;
    return actions;
}

std::string NastyGameFactory::getTitle() const {
    return "Nasty game";
}
