//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Catalyst/CATMessage.h>

@class NSDictionary, NSString, NSUUID;

@interface CATNotificationMessage : CATMessage
{
    NSUUID *_taskUUID;
    NSString *_name;
    NSDictionary *_userInfo;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSUUID *taskUUID; // @synthesize taskUUID=_taskUUID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTaskUUID:(id)arg1 name:(id)arg2 userInfo:(id)arg3;
- (id)initWithName:(id)arg1 userInfo:(id)arg2;

@end
