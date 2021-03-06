//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitHostAppProtocols/ROCKForwardingInterposableWithRunLoop-Protocol.h>
#import <UIKitHostAppProtocols/ROCKImpersonateable-Protocol.h>

@class NSArray, NSString;

@protocol UHAToolbarInterface <ROCKImpersonateable, ROCKForwardingInterposableWithRunLoop>
@property(nonatomic) BOOL autoHidesToolbarInFullScreen;
@property(nonatomic) long long displayMode;
@property(copy, nonatomic) NSArray *templateItems;
@property(copy, nonatomic) NSString *centeredItemIdentifier;
@property(copy, nonatomic) NSArray *itemIdentifiers;
@property(nonatomic, getter=isVisible) BOOL visible;
- (BOOL)configureToolbarIsVisible:(BOOL)arg1 itemIdentifiers:(NSArray *)arg2 centeredItemIdentifier:(NSString *)arg3 templateItems:(NSArray *)arg4 displayMode:(long long)arg5;
@end

