//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSSecureCoding-Protocol.h>
#import <CoreDuet/_DKProtobufConverting-Protocol.h>

@class NSDate, NSString, NSUUID, _DKSource;

@interface _DKObject : NSObject <_DKProtobufConverting, NSSecureCoding>
{
    NSUUID *_UUID;
    _DKSource *_source;
    NSDate *_creationDate;
    NSDate *_localCreationDate;
}

+ (_Bool)supportsSecureCoding;
+ (id)fromPBCodable:(id)arg1;
+ (id)objectFromManagedObject:(id)arg1 readMetadata:(_Bool)arg2 cache:(id)arg3;
+ (id)fetchObjectWithUUID:(id)arg1 context:(id)arg2;
+ (id)entityName;
@property(retain) NSDate *localCreationDate; // @synthesize localCreationDate=_localCreationDate;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain) _DKSource *source; // @synthesize source=_source;
@property(retain) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)stringValue;
- (double)doubleValue;
- (int)integerValue;
- (_Bool)boolValue;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)toPBCodable;
- (_Bool)copyBaseObjectInfoFromManagedObject:(id)arg1 cache:(id)arg2;
- (_Bool)copyToManagedObject:(id)arg1;
- (int)typeCode;
- (id)entityName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

