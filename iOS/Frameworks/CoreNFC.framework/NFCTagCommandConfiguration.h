//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface NFCTagCommandConfiguration : NSObject <NSCopying>
{
    unsigned long long _maximumRetries;
    double _retryInterval;
}

@property(nonatomic) double retryInterval; // @synthesize retryInterval=_retryInterval;
@property(nonatomic) unsigned long long maximumRetries; // @synthesize maximumRetries=_maximumRetries;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
