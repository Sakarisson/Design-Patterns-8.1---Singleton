/*
   File:        GameFactory.h
   Objective:	Designm�nster DT063G - Abstract Factory
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


// GameFactory �r en abstrakt klass som definierar ett interface f�r
// deriverade konkreta klasser

class GameFactory {
protected:
    GameFactory() { }

public:
	virtual ~GameFactory() = default;
   // L�mpliga operationer: se klassen Game.
    virtual std::vector<Obstacle*> getObstacles() = 0;
    virtual std::vector<Action*> getActions() = 0;
    virtual Player* getPlayer() = 0;
    virtual std::string getTitle() const = 0;
};


/* NiceGameFactory:

    L�mpliga operationer.
    (Implementationer i GameFactory.cpp)

    I ett 'Nice Game' ing�r f�ljande hinder:
    Wizard, Wall, Elephant, DPexam

    M�jliga Actions:
    BowAndShakeHandsAction, RunAndHideAction, BargainAndBuyAction,
    ChainsawAction, ClimbAction, CastAspellAction, SurrenderAction

    Player:
    OrdinaryPlayer
*/


/* NastyGameFactory:

    L�mpliga operationer
    (Implementationer i GameFactory.cpp)

    I ett 'Nasty Game' ing�r f�ljande hinder:
    Dragon, Bomb, Samuray, SumoWrestler, Gangster

    M�jliga Actions:
    BowAndShakeHandsAction, RunAndHideAction, SwordAction, RifleAction,
    OfferFoodAction, ChainsawAction, CastAspellAction, BargainAndBuyAction, SurrenderAction

    Player:
    HeroPlayer
*/


#endif
