//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLCustomItemViewControllerHost.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QLCustomItemViewControllerHostProxy : NSObject <QLCustomItemViewControllerHost>
{
    id <QLCustomItemViewControllerHost> _delegate;
}

@property(nonatomic) __weak id <QLCustomItemViewControllerHost> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dismissQuickLook;
- (void)setFullScreen:(_Bool)arg1;
- (void)presentShareSheetWithPopoverTracker:(id)arg1 dismissCompletion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
