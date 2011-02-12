//
//  CPTokenStream.h
//  CoreParse
//
//  Created by Tom Davie on 10/02/2011.
//  Copyright 2011 In The Beginning... All rights reserved.
//

#import <Foundation/Foundation.h>

#import "CPToken.h"

@interface CPTokenStream : NSObject
{}

- (BOOL)hasToken;

- (CPToken *)peekToken;
- (CPToken *)popToken;

- (void)addToken:(CPToken *)token;

@end
