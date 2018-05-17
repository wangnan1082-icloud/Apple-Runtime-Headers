//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_CNBufferingStrategy.h"

@class NSString;

@interface _CNSpatialBufferingStrategy : NSObject <_CNBufferingStrategy>
{
    unsigned int _capacity;
}

- (void)bufferDidSendResults:(id)arg1;
- (void)buffer:(id)arg1 didReceiveResults:(id)arg2 forObserver:(id)arg3;
- (id)initWithCapacity:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
