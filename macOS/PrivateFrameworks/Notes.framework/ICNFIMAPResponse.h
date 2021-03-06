//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICNFMCError, NSString;

@interface ICNFIMAPResponse : NSObject
{
    BOOL _wasHandled;
    NSString *_tag;
    ICNFMCError *_error;
}

+ (BOOL)handlesResponseWithName:(const char *)arg1 ofLength:(unsigned long long)arg2;
+ (id)newIMAPResponseWithConnection:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) ICNFMCError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(nonatomic) BOOL wasHandled; // @synthesize wasHandled=_wasHandled;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) BOOL isUntagged;

@end

