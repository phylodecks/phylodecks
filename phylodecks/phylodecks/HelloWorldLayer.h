//
//  HelloWorldLayer.h
//  phylodecks
//
//  Created by Sun, You Fei on 13-06-01.
//  Copyright __MyCompanyName__ 2013. All rights reserved.
//  test


#import <GameKit/GameKit.h>

// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"

// HelloWorldLayer
@interface HelloWorldLayer : CCLayer <GKAchievementViewControllerDelegate, GKLeaderboardViewControllerDelegate>
{
}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;

@end
