//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSUUID;

@interface HDFitnessMachineConnection : NSObject
{
    NSUUID *_uuid;
    id <HKFitnessMachineConnectionClientInterface> _client;
}

@property(readonly, nonatomic) id <HKFitnessMachineConnectionClientInterface> client; // @synthesize client=_client;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)initWithUUID:(id)arg1 client:(id)arg2;

@end
