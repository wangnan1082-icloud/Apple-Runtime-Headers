//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MFMailDropPreferencesManager : NSObject
{
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (BOOL)validateURL:(id)arg1;
@property(readonly, nonatomic) float minMessageSize;
@property(readonly, nonatomic) float maxMessageSize;
@property(readonly, nonatomic) long long attachmentTTL;
- (void)dealloc;
- (id)init;

@end
