//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigrationNetworking/SMNAction.h>

@class NSSet;

@interface SMNWirelessInfoAction : SMNAction
{
    NSSet *_supportedChannels;
    long long _swapProcess;
}

+ (id)actionWithPayload:(id)arg1;
+ (int)actionID;
@property long long swapProcess; // @synthesize swapProcess=_swapProcess;
@property(retain) NSSet *supportedChannels; // @synthesize supportedChannels=_supportedChannels;
- (void).cxx_destruct;
- (BOOL)returnsData;
- (BOOL)setResultFromData:(id)arg1;
- (id)resultData;
- (id)description;

@end
