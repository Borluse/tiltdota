//
//  GameLayer.h
//  Tilt Dota
//
//  Created by Fan ZHAO on 11-7-24.
//  Copyright 2011年 Personnal. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "Box2D.h"
#import "GLES-Render.h"
    
@interface GameLayer : CCLayerColor {
    CCSprite *player;
}

+(CCScene *) scene;

@end
