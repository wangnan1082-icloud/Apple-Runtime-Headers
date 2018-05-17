//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface SiriTVUIViewStyle : NSObject <NSCopying>
{
    _Bool _hasMinimumHeight;
    _Bool _hasMinimumWidth;
    _Bool _hasRightMargin;
    double _minimumHeight;
    double _minimumWidth;
    double _rightMargin;
}

@property(readonly, nonatomic) _Bool hasRightMargin; // @synthesize hasRightMargin=_hasRightMargin;
@property(nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property(readonly, nonatomic) _Bool hasMinimumWidth; // @synthesize hasMinimumWidth=_hasMinimumWidth;
@property(nonatomic) double minimumWidth; // @synthesize minimumWidth=_minimumWidth;
@property(readonly, nonatomic) _Bool hasMinimumHeight; // @synthesize hasMinimumHeight=_hasMinimumHeight;
@property(nonatomic) double minimumHeight; // @synthesize minimumHeight=_minimumHeight;
- (_Bool)isEqualToStyle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEmptyStyle;
- (void)copyStylesToStyle:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
