//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSXPCCoding.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface FBSDisplayMode : NSObject <BSXPCCoding, NSCopying, NSSecureCoding>
{
    unsigned long _width;
    unsigned long _height;
    unsigned long _preferredScale;
    float _scaleOverride;
    double _refreshRate;
    int _gamut;
    int _hdr;
    int _rotation;
}

+ (_Bool)supportsSecureCoding;
+ (id)_emptyMode;
@property(readonly, nonatomic) int hdrMode; // @synthesize hdrMode=_hdr;
@property(readonly, nonatomic) int colorGamut; // @synthesize colorGamut=_gamut;
@property(readonly, nonatomic) double refreshRate; // @synthesize refreshRate=_refreshRate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long)_height;
- (unsigned long)_width;
- (id)_referenceSizeDescription;
- (int)_rotation;
- (id)_caHDRMode;
- (id)_caColorGamut;
- (double)_caRefreshRate;
- (unsigned long)_caPreferredScale;
- (unsigned long)_caHeight;
- (unsigned long)_caWidth;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) float scale;
@property(readonly, nonatomic) struct CGSize pixelSize;
- (id)_initWithWidth:(unsigned long)arg1 height:(unsigned long)arg2 preferredScale:(unsigned long)arg3 scaleOverride:(float)arg4 refreshRate:(double)arg5 gamut:(int)arg6 hdr:(int)arg7 rotation:(int)arg8 validityCheck:(int)arg9;
- (id)_initWithWidth:(unsigned long)arg1 height:(unsigned long)arg2 scale:(unsigned long)arg3 refreshRate:(double)arg4 gamut:(int)arg5 hdr:(int)arg6;
- (id)_initWithCADisplayMode:(id)arg1 scale:(float)arg2 rotation:(int)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
