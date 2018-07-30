//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVViewControllerPresenting.h"

@class NSString;

@interface SVViewControllerPresentingManager : NSObject <SVViewControllerPresenting>
{
    id <SVModalPresentationViewControllerProviding> _modalPresentationViewControllerProvider;
}

@property(readonly, nonatomic) id <SVModalPresentationViewControllerProviding> modalPresentationViewControllerProvider; // @synthesize modalPresentationViewControllerProvider=_modalPresentationViewControllerProvider;
- (void).cxx_destruct;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2;
- (id)initWithModalPresentationViewControllerProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
