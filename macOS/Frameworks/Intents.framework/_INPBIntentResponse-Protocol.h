//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _INPBIntentResponsePayloadFailure, _INPBIntentResponsePayloadSuccess, _INPBUserActivity;

@protocol _INPBIntentResponse <NSObject>
@property(readonly, nonatomic) BOOL hasUserActivity;
@property(retain, nonatomic) _INPBUserActivity *userActivity;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type;
@property(nonatomic) BOOL hasRequiresProtectedData;
@property(nonatomic) BOOL requiresProtectedData;
@property(nonatomic) BOOL hasRequiresAuthentication;
@property(nonatomic) BOOL requiresAuthentication;
@property(readonly, nonatomic) BOOL hasPayloadSuccess;
@property(retain, nonatomic) _INPBIntentResponsePayloadSuccess *payloadSuccess;
@property(readonly, nonatomic) BOOL hasPayloadFailure;
@property(retain, nonatomic) _INPBIntentResponsePayloadFailure *payloadFailure;
- (int)StringAsType:(NSString *)arg1;
- (NSString *)typeAsString:(int)arg1;
@end
