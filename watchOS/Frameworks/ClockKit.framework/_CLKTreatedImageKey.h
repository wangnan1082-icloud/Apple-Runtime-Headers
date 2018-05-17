//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class UIImage;

@interface _CLKTreatedImageKey : NSObject <NSCopying>
{
    _Bool _maskToCircle;
    UIImage *_rawImage;
    float _scale;
}

+ (id)keyWithRawImage:(id)arg1 scale:(float)arg2 mask:(_Bool)arg3;
@property(readonly, nonatomic) _Bool maskToCircle; // @synthesize maskToCircle=_maskToCircle;
@property(readonly, nonatomic) float scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) __weak UIImage *rawImage; // @synthesize rawImage=_rawImage;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;

@end
