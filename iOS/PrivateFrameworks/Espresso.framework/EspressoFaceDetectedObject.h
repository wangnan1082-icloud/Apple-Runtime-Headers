//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ExternalDetectedObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface EspressoFaceDetectedObject : NSObject <ExternalDetectedObject>
{
    float confidence;
    long long objectType;
    struct CGPoint center;
    struct CGRect bounds;
}

@property float confidence; // @synthesize confidence;
@property struct CGPoint center; // @synthesize center;
@property struct CGRect bounds; // @synthesize bounds;
@property long long objectType; // @synthesize objectType;
- (id)initWithOptionsXloc:(float)arg1 yloc:(float)arg2 size:(float)arg3 confidence:(float)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
