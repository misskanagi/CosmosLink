#ifndef __OPTIONSCENE_H__
#define __OPTIONSCENE_H__

#include "cocos2d.h"
#include "Box2D/Box2D.h"
#include "SimpleAudioEngine.h"
#include "CosScene.h"
#include "CosLogic.h"

class OptionScene: public CosScene
{
	virtual void runThisTest();
};

class OptionLayer: public cocos2d::CCLayer
{
public:
	virtual void onEnter();
    virtual void onExit();

private:
};

#endif  // __OPTIONSCENE_H__