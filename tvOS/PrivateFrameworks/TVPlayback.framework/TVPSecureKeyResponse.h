//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDate, TVPSecureKeyRequest;

__attribute__((visibility("hidden")))
@interface TVPSecureKeyResponse : NSObject
{
    NSData *_keyData;
    NSDate *_renewalDate;
    TVPSecureKeyRequest *_request;
}

@property(retain, nonatomic) TVPSecureKeyRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSDate *renewalDate; // @synthesize renewalDate=_renewalDate;
@property(retain, nonatomic) NSData *keyData; // @synthesize keyData=_keyData;
- (void).cxx_destruct;

@end
