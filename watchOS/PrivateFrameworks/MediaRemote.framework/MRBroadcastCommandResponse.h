//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSData, NSString;

@interface MRBroadcastCommandResponse : NSObject <NSSecureCoding>
{
    NSArray *_commandHandlerStatuses;
    NSData *_responseData;
    int _pid;
    NSString *_bundleIdentifer;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *bundleIdentifer; // @synthesize bundleIdentifer=_bundleIdentifer;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(readonly, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *commandHandlerStatuses;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithPID:(int)arg1 bundleIdentifier:(id)arg2 responseData:(id)arg3;
- (id)initWithPID:(int)arg1 bundleIdentifier:(id)arg2 statuses:(id)arg3;

@end
