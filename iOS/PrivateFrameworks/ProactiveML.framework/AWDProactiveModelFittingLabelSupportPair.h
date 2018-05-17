//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface AWDProactiveModelFittingLabelSupportPair : PBCodable <NSCopying>
{
    unsigned long long _label;
    float _support;
    struct {
        unsigned int label:1;
        unsigned int support:1;
    } _has;
}

@property(nonatomic) float support; // @synthesize support=_support;
@property(nonatomic) unsigned long long label; // @synthesize label=_label;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSupport;
@property(nonatomic) _Bool hasLabel;

@end
