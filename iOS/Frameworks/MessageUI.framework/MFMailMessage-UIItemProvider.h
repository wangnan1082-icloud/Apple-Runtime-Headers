//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFMailMessage.h"

#import "UIItemProviderWriting.h"

@class NSArray, NSString;

@interface MFMailMessage (UIItemProvider) <UIItemProviderWriting>
+ (_Bool)dragItemsAreAllMessages:(id)arg1;
+ (id)writableTypeIdentifiersForItemProvider;
- (void)_loadMessageDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)_attributedSubject;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
@end
