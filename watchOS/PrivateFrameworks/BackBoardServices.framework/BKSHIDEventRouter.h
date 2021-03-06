//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BackBoardServices/NSSecureCoding-Protocol.h>

@class NSSet;

@interface BKSHIDEventRouter : NSObject <NSSecureCoding>
{
    int _destination;
    NSSet *_hidEventDescriptors;
}

+ (_Bool)supportsSecureCoding;
+ (id)defaultFocusedAppEventRouter;
+ (id)defaultSystemAppEventRouter;
+ (id)defaultEventRouters;
+ (id)routerWithDestination:(int)arg1;
@property(readonly) NSSet *hidEventDescriptors; // @synthesize hidEventDescriptors=_hidEventDescriptors;
@property(readonly) int destination; // @synthesize destination=_destination;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)stringForDestination:(int)arg1;
- (id)dumpContents;
- (id)description;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)containsDescriptor:(id)arg1;
- (_Bool)specifiesDescriptor:(id)arg1;
- (void)removeHIDEventDescriptors:(id)arg1;
- (void)addHIDEventDescriptors:(id)arg1;
- (id)initWithDestination:(int)arg1 hidEventDescriptors:(id)arg2;
- (id)initWithDestination:(int)arg1;

@end

