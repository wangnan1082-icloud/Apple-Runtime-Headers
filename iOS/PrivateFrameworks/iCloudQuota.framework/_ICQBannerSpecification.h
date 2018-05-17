//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface _ICQBannerSpecification : NSObject
{
    NSDictionary *_serverDict;
    NSString *_messageFormat;
    NSArray *_messageLinks;
}

+ (id)bannerSpecificationSampleForLevel:(long long)arg1;
@property(retain, nonatomic) NSArray *messageLinks; // @synthesize messageLinks=_messageLinks;
@property(retain, nonatomic) NSString *messageFormat; // @synthesize messageFormat=_messageFormat;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *serverDict;
- (void)setMessageWithServerMessage:(id)arg1;
- (id)initWithServerDictionary:(id)arg1;

@end
