/*
   File:        GameFactory.h
   Objective:	Designmönster DT063G - Abstract Factory
   Last change: feb 2014 / Orjan Sterner
*/


#ifndef GameFactoryH
#define GameFactoryH

#include <vector>
#include <string>

//using std::vector;
//using std::string;

class Player;
class Obstacle;
class Action;


// GameFactory är en abstrakt klass som definierar ett interface för
// deriverade konkreta klasser

template <typename Class>
struct GameFactory {
protected:
    GameFactory() {
        if (_instance == nullptr) {
            _instance = (Class*)this;
        }
    }
    static Class* _instance; 

public:
    static inline Class& instance() {
        return *_instance;
    }
	virtual ~GameFactory() = default;
   // Lämpliga operationer: se klassen Game.
    virtual std::vector<Obstacle*> getObstacles() = 0;
    virtual std::vector<Action*> getActions() = 0;
    virtual Player* getPlayer() = 0;
    virtual std::string getTitle() const = 0;
};

template <typename Class>
Class* GameFactory<Class>::_instance = nullptr;


/* NiceGameFactory:

    Lämpliga operationer.
    (Implementationer i GameFactory.cpp)

    I ett 'Nice Game' ingår följande hinder:
    Wizard, Wall, Elephant, DPexam

    Möjliga Actions:
    BowAndShakeHandsAction, RunAndHideAction, BargainAndBuyAction,
    ChainsawAction, ClimbAction, CastAspellAction, SurrenderAction

    Player:
    OrdinaryPlayer
*/


/* NastyGameFactory:

    Lämpliga operationer
    (Implementationer i GameFactory.cpp)

    I ett 'Nasty Game' ingår följande hinder:
    Dragon, Bomb, Samuray, SumoWrestler, Gangster

    Möjliga Actions:
    BowAndShakeHandsAction, RunAndHideAction, SwordAction, RifleAction,
    OfferFoodAction, ChainsawAction, CastAspellAction, BargainAndBuyAction, SurrenderAction

    Player:
    HeroPlayer
*/


#endif
