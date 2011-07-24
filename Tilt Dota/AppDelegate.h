//
//  AppDelegate.h
//  Tilt Dota
//
//  Created by Fan ZHAO on 11-7-24.
//  Copyright Personnal 2011年. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
