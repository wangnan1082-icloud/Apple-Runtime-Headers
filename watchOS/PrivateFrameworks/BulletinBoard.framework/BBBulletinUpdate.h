//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class BBBulletin;

@interface BBBulletinUpdate : NSObject <NSCopying, NSSecureCoding>
{
    BBBulletin *_bulletin;
    unsigned int _feeds;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned int feeds; // @synthesize feeds=_feeds;
@property(readonly, copy, nonatomic) BBBulletin *bulletin; // @synthesize bulletin=_bulletin;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)typeDescription;
- (id)initWithBulletin:(id)arg1 feeds:(unsigned int)arg2;

@end
