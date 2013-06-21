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
    _level = 1;
    _experience = 0;
    return [super init];
}

-(Player *) initWithFile:(NSString *)fileName
              atomically:(BOOL) atom {
    
    return [super init];
}

-(void) writeToFile:(NSString *)fileName atomically:(BOOL)atom {
    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
    NSString *documentsDirectory = [paths objectAtIndex:0];
    
    NSString *myFile = [documentsDirectory stringByAppendingPathComponent:fileName];
    NSString *write = [NSString stringWithFormat:@"%@", _profileName];
    [write writeToFile:myFile atomically:atom encoding:<#(NSStringEncoding)#> error:<#(NSError **)#>];
}


-(int) getLevel {
    return _level;
}

-(void) addExperience:(NSUInteger)exp {
    _experience += exp;
    _level = (exp + 100) / 100; //temporary
}


@end
