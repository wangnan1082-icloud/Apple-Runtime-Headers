//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAAceCommand.h"
#import "SAAceReferable.h"

@class NSArray, NSString;

@protocol SAClientBoundCommand <SAAceCommand, SAAceReferable>
@property(copy, nonatomic) NSArray *callbacks;
@property(copy, nonatomic) NSString *appId;
- (BOOL)requiresResponse;
@end
