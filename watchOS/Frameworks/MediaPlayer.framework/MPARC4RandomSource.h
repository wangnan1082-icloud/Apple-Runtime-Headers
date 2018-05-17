//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPRandom.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData;

@interface MPARC4RandomSource : NSObject <MPRandom, NSSecureCoding, NSCopying>
{
    struct Arc4State *_state;
    NSData *_seed;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSData *seed; // @synthesize seed=_seed;
- (void).cxx_destruct;
- (unsigned int)nextIntWithUpperBound:(unsigned int)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSeed:(id)arg1;
- (id)init;

@end
