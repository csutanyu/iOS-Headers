/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VGLProgram.h>

// Not exported
@interface VGLRoadAntialiasedProgram : VGLProgram
{
    int _uColorLocation;
    struct _VGLColor _color;
    int _uLineWidthLocation;
    float _lineWidth;
}

+ (id)fragName;
+ (id)vertName;
@property(nonatomic) float lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) struct _VGLColor color; // @synthesize color=_color;
- (void)setup;

@end

