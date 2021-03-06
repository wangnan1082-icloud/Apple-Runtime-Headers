//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSData, NSDictionary;

@interface _HMFCFHTTPMessage : HMFObject
{
    struct __CFHTTPMessage *_message;
}

+ (id)responseWithStatusCode:(long long)arg1 statusDescription:(id)arg2 protocolVersion:(long long)arg3;
+ (id)requestWithMethod:(id)arg1 url:(id)arg2 protocolVersion:(long long)arg3;
+ (id)dateFormatter;
@property(readonly, nonatomic) struct __CFHTTPMessage *message; // @synthesize message=_message;
@property(copy, nonatomic) NSData *body;
- (void)setContentLength:(long long)arg1;
- (long long)contentLength;
- (void)setContentType:(id)arg1;
- (id)contentType;
- (void)setDate:(id)arg1;
- (id)date;
- (void)setValue:(id)arg1 forHeaderField:(id)arg2;
- (id)valueForHeaderField:(id)arg1;
@property(readonly, nonatomic) NSDictionary *headerFields;
- (void)dealloc;
- (id)initWithMessageRef:(struct __CFHTTPMessage *)arg1;
- (id)init;

@end

