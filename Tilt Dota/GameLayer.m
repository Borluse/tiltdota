//
//  GameLayer.m
//  Tilt Dota
//
//  Created by Fan ZHAO on 11-7-24.
//  Copyright 2011年 Personnal. All rights reserved.
//

#import "GameLayer.h"


@implementation GameLayer


+(CCScene *) scene
{
	// 'scene' is an autorelease object.
	CCScene *scene = [CCScene node];
	
	// 'layer' is an autorelease object.
	GameLayer * layer = [GameLayer node];
	
	// add layer as a child to scene
	[scene addChild: layer];
	
	// return the scene
	return scene;
}

-(void) build{
    player = [CCSprite spriteWithFile:@"player.png"];
    [self addChild:player];
    [player setPosition:ccp(240,160)];
}

-(id)init{
    if ((self = [super initWithColor:ccc4(255, 255, 255, 255)])){
        
        [self build];
    }
    return self;
}


@end
