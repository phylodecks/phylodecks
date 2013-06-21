//
//  Player.h
//  phylodecks
//
<<<<<<< HEAD
//  Created by Adam Brykajlo on 13-06-20.
=======
//  Created by Adam Bricklayer on 13-06-19.
>>>>>>> bec2e4fc1805f697d3a3b71a75fcb6d7069f2464
//
//

#import <Foundation/Foundation.h>
<<<<<<< HEAD
#import "Card.h"

@interface Player : NSObject
@property NSString *Name;
=======

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
>>>>>>> bec2e4fc1805f697d3a3b71a75fcb6d7069f2464
@end
