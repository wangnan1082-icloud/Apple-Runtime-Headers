//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUPattern.h>

@class NSString;

@interface NUTokenPattern : NUPattern
{
    NSString *_token;
}

@property(readonly) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (BOOL)match:(id)arg1 location:(unsigned long long *)arg2 count:(unsigned long long *)arg3;
- (BOOL)isEqualToTokenPattern:(id)arg1;
- (BOOL)isEqualToPattern:(id)arg1;
- (id)optimizedPattern;
- (id)stringRepresentation;
- (id)shortestMatch;
- (BOOL)isFixedOrder;
- (id)tokens;
- (id)initWithToken:(id)arg1;
- (id)init;

@end

