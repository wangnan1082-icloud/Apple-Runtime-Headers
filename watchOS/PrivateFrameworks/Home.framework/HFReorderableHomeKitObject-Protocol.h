//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HFHomeKitObject.h"

@class NAFuture, NSDate, NSString;

@protocol HFReorderableHomeKitObject <HFHomeKitObject>
@property(readonly, copy, nonatomic) NSString *hf_displayName;
@property(readonly, copy, nonatomic) NSDate *hf_dateAdded;
- (NAFuture *)hf_updateDateAdded:(NSDate *)arg1;
@end
