//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarouselServices/BSDescriptionProviding-Protocol.h>
#import <CarouselServices/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CSLSSnapshotRequest : NSObject <BSDescriptionProviding, NSSecureCoding>
{
    _Bool _persist;
    NSArray *_snapshotSchedule;
    NSString *_fileProtectionClass;
    struct _opaque_pthread_mutex_t _scheduleLock;
}

+ (_Bool)supportsSecureCoding;
+ (id)fromDictionary:(id)arg1;
+ (id)snapshotRequestWithSnapshotSchedule:(id)arg1 fileProtectionClass:(id)arg2;
@property(readonly, nonatomic) struct _opaque_pthread_mutex_t scheduleLock; // @synthesize scheduleLock=_scheduleLock;
@property(readonly, copy, nonatomic) NSString *fileProtectionClass; // @synthesize fileProtectionClass=_fileProtectionClass;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)toDictionary;
@property(readonly, copy, nonatomic) NSArray *snapshotSchedule;
- (void)scheduleSystemItem:(id)arg1;
- (_Bool)persist;
- (void)setPersist:(_Bool)arg1;
- (void)_scheduleSystemItem:(id)arg1 leeway:(double)arg2;
- (void)scheduleSystemItemAtDate:(id)arg1 returnToPrimaryUI:(_Bool)arg2 leeway:(double)arg3 reason:(unsigned int)arg4;
- (void)adjustFreebeeState:(_Bool)arg1;
- (void)adjustScheduleToEarliestDate:(id)arg1;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithSnapshotSchedule:(id)arg1 fileProtectionClass:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

