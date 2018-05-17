//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKRecordValue.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CKRecordID, NSString;

@interface CKReference : NSObject <CKRecordValue, NSSecureCoding, NSCopying>
{
    unsigned int _referenceAction;
    CKRecordID *_recordID;
}

+ (_Bool)supportsSecureCoding;
+ (int)ckdpReferenceTypeForCKReferenceAction:(unsigned int)arg1;
+ (unsigned int)ckReferenceActionForCKDPRecordReferenceType:(int)arg1;
@property(copy, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property(readonly, nonatomic) unsigned int referenceAction; // @synthesize referenceAction=_referenceAction;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (id)CKPropertiesDescription;
- (id)ckShortDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRecord:(id)arg1 action:(unsigned int)arg2;
- (id)initWithRecordID:(id)arg1 action:(unsigned int)arg2;
- (id)_initBare;
- (id)init;

// Remaining properties
@property(readonly) Class superclass;

@end
