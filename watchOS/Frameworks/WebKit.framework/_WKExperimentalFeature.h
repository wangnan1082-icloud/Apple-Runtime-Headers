//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WKObject.h"

@class NSString;

@interface _WKExperimentalFeature : NSObject <WKObject>
{
    struct ObjectStorage<API::ExperimentalFeature> _experimentalFeature;
}

@property(readonly) struct Object *_apiObject;
@property(readonly, nonatomic) _Bool defaultValue;
@property(readonly, copy, nonatomic) NSString *details;
@property(readonly, copy, nonatomic) NSString *key;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
