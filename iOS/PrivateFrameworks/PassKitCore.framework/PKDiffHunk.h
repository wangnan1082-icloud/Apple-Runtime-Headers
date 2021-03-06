//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKDiffHunk : NSObject <NSSecureCoding>
{
    NSString *_key;
    id _oldValue;
    id _newValue;
    NSString *_message;
}

+ (_Bool)supportsSecureCoding;
+ (id)hunkWithKey:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3 message:(id)arg4;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) id valueNew; // @synthesize valueNew=_newValue;
@property(retain, nonatomic) id valueOld; // @synthesize valueOld=_oldValue;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)compare:(id)arg1;
- (_Bool)isEqualToDiffHunk:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

