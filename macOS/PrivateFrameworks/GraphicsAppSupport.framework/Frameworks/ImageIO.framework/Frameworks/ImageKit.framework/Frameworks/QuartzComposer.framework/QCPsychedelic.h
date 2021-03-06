//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzComposer/QCPatch.h>

@class QCNumberPort, QCOpenGLPort_Blending, QCOpenGLPort_Color, QCOpenGLPort_Image;

__attribute__((visibility("hidden")))
@interface QCPsychedelic : QCPatch
{
    QCOpenGLPort_Image *inputImage;
    QCOpenGLPort_Color *inputColor;
    QCNumberPort *inputSpeed;
    QCNumberPort *inputScale;
    QCOpenGLPort_Blending *inputBlending;
    BOOL _clearDepthBuffer;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)arg1;
+ (int)timeModeWithIdentifier:(id)arg1;
+ (int)executionModeWithIdentifier:(id)arg1;
+ (BOOL)isSafe;
+ (Class)inspectorClassWithIdentifier:(id)arg1;
- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (BOOL)setup:(id)arg1;
- (BOOL)setState:(id)arg1;
- (id)state;
- (BOOL)clearsDepthBuffer;
- (void)setClearsDepthBuffer:(BOOL)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

