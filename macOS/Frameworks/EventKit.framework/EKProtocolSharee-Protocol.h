//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKit/EKProtocolObject-Protocol.h>

@class NSString, NSURL;

@protocol EKProtocolSharee <EKProtocolObject>
@property(readonly, nonatomic) BOOL isCurrentUserForScheduling;
@property(readonly, nonatomic) BOOL isCurrentUserForSharing;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSURL *URL;
- (NSString *)accessLevel;
- (NSString *)status;
@end

