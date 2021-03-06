//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNTUCallProvider-Protocol.h>

@class NSSet, NSString, TUCallProvider;

@interface CNTUCallProvider : NSObject <CNTUCallProvider>
{
    TUCallProvider *_callProvider;
}

@property(copy, nonatomic) TUCallProvider *callProvider; // @synthesize callProvider=_callProvider;
- (void).cxx_destruct;
- (id)dialRequestForHandle:(id)arg1 contact:(id)arg2 video:(_Bool)arg3;
@property(readonly, copy, nonatomic) NSSet *supportedHandleTypes;
@property(readonly, nonatomic) _Bool supportsVideo;
@property(readonly, nonatomic) _Bool supportsAudio;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
@property(readonly, copy, nonatomic) NSString *localizedName;
- (id)initWithCallProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

