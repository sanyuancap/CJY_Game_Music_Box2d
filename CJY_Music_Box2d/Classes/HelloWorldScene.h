#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include "Game4Key.h"
#include "cocos-ext.h"

#include "CCArmature/CCArmature.h"
#include "CCArmature/CCBone.h"
#include "CCArmature/animation/CCArmatureAnimation.h"
#include "CCArmature/datas/CCDatas.h"
#include "CCArmature/display/CCBatchNode.h"
#include "CCArmature/display/CCDecorativeDisplay.h"
#include "CCArmature/display/CCDisplayManager.h"
#include "CCArmature/display/CCSkin.h"
#include "CCArmature/physics/CCColliderDetector.h"
#include "CCArmature/physics/CCPhysicsWorld.h"
#include "CCArmature/utils/CCArmatureDataManager.h"
#include "CCArmature/utils/CCConstValue.h"
#include "CCArmature/utils/CCDataReaderHelper.h"
#include "CCArmature/utils/CCTweenFunction.h"
#include "CCArmature/external_tool/sigslot.h"
USING_NS_CC;
class HelloWorld : public cocos2d::CCLayer
{
protected:
	CCParticleSystem*    m_emitter;
public:
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();  

    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::CCScene* scene();
    
    // a selector callback
    void menuCloseCallback(CCObject* pSender);
    void toGameLayer();
    // implement the "static node()" method manually
    CREATE_FUNC(HelloWorld);

};

#endif // __HELLOWORLD_SCENE_H__
