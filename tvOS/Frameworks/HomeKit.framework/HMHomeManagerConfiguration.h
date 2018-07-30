//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface HMHomeManagerConfiguration : NSObject <NSCopying>
{
    _Bool _shouldConnect;
    unsigned long long _cachePolicy;
    unsigned long long _options;
}

+ (id)defaultPrivateConfiguration;
+ (id)defaultConfiguration;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property(nonatomic) _Bool shouldConnect; // @synthesize shouldConnect=_shouldConnect;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)canUseCache;
- (id)initWithOptions:(unsigned long long)arg1 cachePolicy:(unsigned long long)arg2;
- (id)init;

@end
