//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface ISImageDescriptor : NSObject <NSCopying>
{
    struct CGSize _size;
    float _scale;
    unsigned int _variantOptions;
    unsigned int _badgeOptions;
    unsigned int _backgroundStyle;
}

@property(nonatomic) unsigned int backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) unsigned int badgeOptions; // @synthesize badgeOptions=_badgeOptions;
@property(nonatomic) unsigned int variantOptions; // @synthesize variantOptions=_variantOptions;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (id)description;
@property(readonly) float sanitizedScale;
@property(readonly) struct CGSize sanitizedSize;
@property(nonatomic) _Bool drawBorder;
@property(nonatomic) _Bool shouldApplyMask;
@property(nonatomic) unsigned int shape;
@property(nonatomic) _Bool selectedVariant;
@property(nonatomic) _Bool templateVariant;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSize:(struct CGSize)arg1 scale:(float)arg2;
- (id)init;

@end
