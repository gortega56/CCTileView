//
//  CCStroke.h
//  CCCanvasSample
//
//  Created by Gabriel Ortega on 2/26/14.
//  Copyright (c) 2014 Clique City. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CCStroke : NSObject

@property (nonatomic, readonly) NSArray *points;
@property (nonatomic, readonly) UIBezierPath *path;
@property (nonatomic, readonly) CGRect bounds;

+ (instancetype)strokeWithPoints:(NSArray *)points;

@end