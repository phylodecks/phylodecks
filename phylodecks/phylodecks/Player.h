//
//  Player.h
//  phylodecks
//
//  Created by Adam Bricklayer on 13-06-19.
//
//

#import <Foundation/Foundation.h>

@interface Player : NSObject {
    NSString *_profileName;
    int _experience;
    int _level;
    NSArray *_playersCards;
}
-(Player*) init;
-(Player*) initWithFile: (NSString *)fileName;
-(void) writeToFile: (NSString *)fileName;
-(void) addExperienceWithInt: (int)exp;
@end
