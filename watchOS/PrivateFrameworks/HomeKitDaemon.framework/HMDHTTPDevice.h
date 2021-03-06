//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSString, NSUUID;

@interface HMDHTTPDevice : HMFObject <HMFLogging>
{
    NSUUID *_identifier;
}

+ (id)logCategory;
+ (id)shortDescription;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)logIdentifier;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned int hash;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) Class superclass;

@end

