//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RelevanceEngine/REFeature.h>

@class NSString;

@interface _REConcreteFeature : REFeature
{
    NSString *_name;
    unsigned int _featureType;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)_rootFeatures;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)featureType;
- (int)_bitCount;
- (id)name;
- (id)initWithName:(id)arg1 featureType:(unsigned int)arg2;

@end
