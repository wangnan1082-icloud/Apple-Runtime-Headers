//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PKFieldDetector, PKFieldProperties;

@protocol PKFieldDetectorObserver <NSObject>

@optional
- (void)fieldDetectorDidExitField:(PKFieldDetector *)arg1;
- (void)fieldDetectorDidEnterField:(PKFieldDetector *)arg1 withProperties:(PKFieldProperties *)arg2;
@end
