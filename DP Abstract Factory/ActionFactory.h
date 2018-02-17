#ifndef ACTIONFACTORY_H
#define ACTIONFACTORY_H

#include "Action.h"

class ActionFactory {
public:
    ActionFactory() {}
    virtual ~ActionFactory() = default;
    virtual Action* createAction() = 0;
};

class ChainsawActionFactory : public ActionFactory {
public:
    ChainsawActionFactory() : ActionFactory() { }
    Action* createAction() override { return new ChainsawAction(); }
};

class SwordActionFactory : public ActionFactory {
public:
    SwordActionFactory() : ActionFactory() { }
    Action* createAction() override { return new SwordAction(); }
};

class RifleActionFactory : public ActionFactory {
public:
    RifleActionFactory() : ActionFactory() { }
    Action* createAction() override { return new RifleAction(); }
};

class BargainAndBuyActionFactory : public ActionFactory {
public:
    BargainAndBuyActionFactory() : ActionFactory() { }
    Action* createAction() override { return new BargainAndBuyAction(); }
};

class BowAndShakeHandsActionFactory : public ActionFactory {
public:
    BowAndShakeHandsActionFactory() : ActionFactory() { }
    Action* createAction() override { return new BowAndShakeHandsAction(); }
};

class RunAndHideActionFactory : public ActionFactory {
public:
    RunAndHideActionFactory() : ActionFactory() { }
    Action* createAction() override { return new RunAndHideAction(); }
};

class CastAspellActionFactory : public ActionFactory {
public:
    CastAspellActionFactory() : ActionFactory() { }
    Action* createAction() override { return new CastAspellAction(); }
};

class ClimbActionFactory : public ActionFactory {
public:
    ClimbActionFactory() : ActionFactory() { }
    Action* createAction() override { return new ClimbAction(); }
};

class OfferFoodActionFactory : public ActionFactory {
public:
    OfferFoodActionFactory() : ActionFactory() { }
    Action* createAction() override { return new OfferFoodAction(); }
};

class SurrenderActionFactory : public ActionFactory {
public:
    SurrenderActionFactory() : ActionFactory() { }
    Action* createAction() override { return new SurrenderAction(); }
};

#endif // !ACTIONFACTORY_H
