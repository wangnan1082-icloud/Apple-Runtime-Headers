//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClockKitUI/CLKUIQuad.h>

@class NUScene;

@interface NUGLQuad : CLKUIQuad
{
    unsigned int _isPrepared:1;
    unsigned int _vertexArray;
    double _baseTime;
    NUScene *_scene;
}

@property(retain, nonatomic) NUScene *scene; // @synthesize scene=_scene;
- (void).cxx_destruct;
- (void)encodeGLforSize:(struct CLKUIQuadSize)arg1;
- (void)prepare;

@end

