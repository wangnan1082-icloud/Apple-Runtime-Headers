//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarouselServices/CSLUnblankingSynchronizationClientInterface-Protocol.h>

@class CSLSUnblankingSynchronizer, NSString, NSXPCConnection;

@interface CSLUnblankingSynchronizationClient : NSObject <CSLUnblankingSynchronizationClientInterface>
{
    NSXPCConnection *_connection;
    CSLSUnblankingSynchronizer *_unblankingSychronizer;
}

+ (id)sharedInstance;
@property(retain, nonatomic) CSLSUnblankingSynchronizer *unblankingSychronizer; // @synthesize unblankingSychronizer=_unblankingSychronizer;
- (void).cxx_destruct;
- (void)unblankTimedOut:(unsigned int)arg1;
- (void)prepareForUnblank:(unsigned int)arg1;
- (void)readyForUnblank:(unsigned int)arg1;
- (void)enableUnblankingSynchronization:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

