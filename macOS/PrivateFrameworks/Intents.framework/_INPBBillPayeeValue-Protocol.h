//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _INPBDataString, _INPBValueMetadata;

@protocol _INPBBillPayeeValue <NSObject>
@property(readonly, nonatomic) BOOL hasValueMetadata;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property(readonly, nonatomic) BOOL hasOrganizationName;
@property(retain, nonatomic) _INPBDataString *organizationName;
@property(readonly, nonatomic) BOOL hasNickname;
@property(retain, nonatomic) _INPBDataString *nickname;
@property(readonly, nonatomic) BOOL hasAccountNumber;
@property(copy, nonatomic) NSString *accountNumber;
@end
