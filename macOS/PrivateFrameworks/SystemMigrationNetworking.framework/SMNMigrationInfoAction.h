//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigrationNetworking/SMNAction.h>

@interface SMNMigrationInfoAction : SMNAction
{
    unsigned long long _migrationRequestType;
}

+ (id)actionWithPayload:(id)arg1;
+ (int)actionID;
@property unsigned long long migrationRequestType; // @synthesize migrationRequestType=_migrationRequestType;
- (id)requestPayload;
- (id)description;
- (BOOL)expectsAResult;
- (id)init;

@end
