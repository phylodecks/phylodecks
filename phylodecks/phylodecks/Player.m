//
//  Player.m
//  phylodecks
//
//  Created by Adam Brykajlo on 13-06-20.
//  Created by Adam Bricklayer on 13-06-19.
//
//

#import "Player.h"

@implementation Player
-(Player *) init {
    self = [super init];
    _level = 1;
    _experience = 0;
    return self;
}

-(Player *) initWithFile:(NSString *)fileName
              atomically:(BOOL) atom {
    
    return [super init];
}

-(void) writeToFile:(NSString *)fileName atomically:(BOOL)atom encoding:(NSStringEncoding)enc error:(NSError **)error {
    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
    NSString *documentsDirectory = [paths objectAtIndex:0];
    
    NSString *myFile = [documentsDirectory stringByAppendingPathComponent:fileName];
    NSString *write = [NSString stringWithFormat:@"%@\n%lu\n%lu\n%lu\n", _profileName, (unsigned long) _level, (unsigned long) _experience, (unsigned long)[_playersCards count]];
    for (NSString *card in _playersCards) {
        write = [NSString stringWithFormat: @"%@%@\n", write, card];
    }
    [write writeToFile:myFile atomically:atom encoding:enc error:error];
}


-(NSUInteger) getLevel {
    return _level;
}

-(void) addExperience:(NSUInteger)exp {
    _experience += exp;
    _level = (exp + 100) / 100; //temporary
}


@end
