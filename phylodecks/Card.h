//
//  Card.h
//  phylodecks
//
//  Created by Adam Brykajlo on 13-06-21.
//
//

#import <Foundation/Foundation.h>

@interface Card : NSObject{
    int point;
    int move;
    int foodChain;
    NSString *directory;
    NSString *ImageDirectory;
    NSString *diet;
    NSString *CardName;
    NSString *terrains;
    NSString *climate;
    NSString *CardLocation;
    enum type{home, event, species};
    NSArray *KeyWord;;
    //NSArray *KeyWord = [NSArray arrayWithObjects:@"poll", @"fight", @"invader"];
}

-(Card *)init;
-(void) setImage: (NSString *)image;
-(NSString*) getImage;
-(NSArray *) getKeyWord;

@end
