//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarouselServices/CSLSButtonTapAssertionClientInterface-Protocol.h>

@class NSString, NSXPCConnection;

@interface CSLSButtonTapAssertion : NSObject <CSLSButtonTapAssertionClientInterface>
{
    NSXPCConnection *_connection;
    _Bool _active;
    CDUnknownBlockType _completion;
}

@property _Bool active; // @synthesize active=_active;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)deactivate:(_Bool)arg1;
- (void)deactivate;
- (void)activate;
- (id)init;
- (id)initWithButtons:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

