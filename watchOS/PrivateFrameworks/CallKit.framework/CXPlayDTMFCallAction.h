//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CallKit/CXCallAction.h>

@class NSString;

@interface CXPlayDTMFCallAction : CXCallAction
{
    NSString *_digits;
    int _type;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *digits; // @synthesize digits=_digits;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)customDescription;
- (id)initWithCallUUID:(id)arg1 digits:(id)arg2 type:(int)arg3;

@end
