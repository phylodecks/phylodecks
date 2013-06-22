//
//  Player.h
//  phylodecks
//
//  Created by Adam Brykajlo on 13-06-20.

//  Created by Adam Bricklayer on 13-06-19.

//
#import <Foundation/Foundation.h>

@interface Player : NSObject {
    NSString *_profileName;
    NSUInteger _level;
    NSUInteger _experience;
    NSArray *_playersCards;
}
-(Player*) init;
-(Player*) initWithFile: (NSString *)fileName atomically: (BOOL) atom encoding:(NSStringEncoding)enc error:(NSError **)error;
-(NSUInteger) getLevel;
-(void) writeToFile: (NSString *)fileName atomically:(BOOL)atom encoding:(NSStringEncoding)enc error:(NSError **)error;
-(void) addExperience: (NSUInteger)exp;
@end
