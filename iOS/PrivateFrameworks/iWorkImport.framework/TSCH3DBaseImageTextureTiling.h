//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DTextureTiling.h>

@class TSCH3DVector;

__attribute__((visibility("hidden")))
@interface TSCH3DBaseImageTextureTiling : TSCH3DTextureTiling
{
    TSCH3DVector *_scale;
    float _rotation;
}

+ (id)instanceWithArchive:(const struct Chart3DBaseImageTextureTilingArchive *)arg1 unarchiver:(id)arg2;
@property(nonatomic) float rotation; // @synthesize rotation=_rotation;
- (void)didInitFromSOS;
@property(nonatomic) tvec2_84d5962d scale;
- (void)restoreDefault;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)saveToArchive:(struct Chart3DBaseImageTextureTilingArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct Chart3DBaseImageTextureTilingArchive *)arg1 unarchiver:(id)arg2;

@end

