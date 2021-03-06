//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface IMDHandle : NSObject
{
    NSString *_id;
    NSString *_unformattedID;
    NSString *_countryCode;
    NSString *_personCentricID;
}

@property(retain, nonatomic) NSString *unformattedID; // @synthesize unformattedID=_unformattedID;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *ID; // @synthesize ID=_id;
@property(retain, nonatomic) NSString *personCentricID; // @synthesize personCentricID=_personCentricID;
- (BOOL)isBusiness;
@property(readonly, retain, nonatomic) NSDictionary *handleInfo;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isBetterDefinedThan:(id)arg1;
- (long long)compareIDs:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithID:(id)arg1 unformattedID:(id)arg2 countryCode:(id)arg3 personCentricID:(id)arg4;
- (id)initWithID:(id)arg1 unformattedID:(id)arg2 countryCode:(id)arg3;

@end

