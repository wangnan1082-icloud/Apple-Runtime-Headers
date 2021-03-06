//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VisualVoicemail/NSObject-Protocol.h>

@class NSString, NSUUID;

@protocol VMAccountManagerXPCServer <NSObject>
- (oneway void)setPasscode:(NSString *)arg1 forAccountUUID:(NSUUID *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (oneway void)maximumPasscodeLengthForAccountUUID:(NSUUID *)arg1 reply:(void (^)(int))arg2;
- (oneway void)minimumPasscodeLengthForAccountUUID:(NSUUID *)arg1 reply:(void (^)(int))arg2;
- (oneway void)isPasscodeChangeSupportedForAccountUUID:(NSUUID *)arg1 reply:(void (^)(_Bool))arg2;
- (oneway void)accounts:(void (^)(NSArray *))arg1;
@end

