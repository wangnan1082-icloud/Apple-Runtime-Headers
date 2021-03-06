//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <IASUnifiedProgress/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface IASPPhase : NSObject <NSSecureCoding>
{
    float _percentage;
    NSString *_name;
    long long _delay;
}

+ (BOOL)supportsSecureCoding;
+ (id)phaseWithName:(id)arg1 percentage:(float)arg2 delay:(long long)arg3;
+ (id)phaseWithInfo:(id)arg1;
@property(readonly) long long delay; // @synthesize delay=_delay;
@property(readonly) float percentage; // @synthesize percentage=_percentage;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void)dealloc;
- (id)initWithName:(id)arg1 percentage:(float)arg2 delay:(long long)arg3;
- (id)initWithInfo:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(readonly) NSDictionary *info;
- (void)encodeWithCoder:(id)arg1;
- (id)description;

@end

