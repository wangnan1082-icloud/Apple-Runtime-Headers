//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class NSArray;

@interface EWSDeleteAttachmentType : EWSBaseRequestType
{
    NSArray *_AttachmentIds;
}

+ (id)definition;
@property(copy, nonatomic) NSArray *AttachmentIds; // @synthesize AttachmentIds=_AttachmentIds;
- (void).cxx_destruct;

@end

