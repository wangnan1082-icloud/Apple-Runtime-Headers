//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CUPairedPeer, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CUHomeKitFindPairedPeerContext : NSObject
{
    _Bool _triedAccessory;
    _Bool _triedHAP;
    CDUnknownBlockType _completion;
    NSString *_identifier;
    unsigned int _options;
    CUPairedPeer *_pairedPeer;
    NSArray *_users;
    unsigned int _userIndex;
    unsigned int _userCount;
    unsigned long long _startTicks;
}

@property(nonatomic) unsigned int userCount; // @synthesize userCount=_userCount;
@property(nonatomic) unsigned int userIndex; // @synthesize userIndex=_userIndex;
@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;
@property(nonatomic) unsigned long long startTicks; // @synthesize startTicks=_startTicks;
@property(nonatomic) _Bool triedHAP; // @synthesize triedHAP=_triedHAP;
@property(nonatomic) _Bool triedAccessory; // @synthesize triedAccessory=_triedAccessory;
@property(retain, nonatomic) CUPairedPeer *pairedPeer; // @synthesize pairedPeer=_pairedPeer;
@property(nonatomic) unsigned int options; // @synthesize options=_options;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;

@end

