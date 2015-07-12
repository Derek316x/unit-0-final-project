//
//  Game.h
//  TicTacToe
//
//  Created by Z on 7/7/15.
//  Copyright (c) 2015 Mike Kavouras. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Game : NSObject

-(BOOL)checkWin;
-(BOOL)getWin;

-(BOOL)checkDraw;

-(void)setupGame;

- (NSMutableArray *)getGameBoard;


-(void)printBoard;
-(void)printTutorialBoard;

-(void)turn;
-(int)getTurnCount;

-(void)setGameSize:(int)size;
-(int)getGameSize;

//Easy, Medium, Hard
-(void)setDifficulty:(int)level;
-(int)getDifficulty;

//Player vs. Player OR Player vs. Computer
-(void)setMode:(int)mode;
-(int)getMode;


@end
