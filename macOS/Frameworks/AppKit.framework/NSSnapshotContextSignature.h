//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAppearance;

__attribute__((visibility("hidden")))
@interface NSSnapshotContextSignature : NSObject
{
    struct CGRect _modelLogicalRect;
    struct CGRect _modelPixelLogicalRect;
    struct CGRect _modelPixelDrawingRect;
    struct CGColorSpace *_colorSpace;
    unsigned long long _imageInterpolation;
    NSAppearance *_appearance;
}

- (BOOL)isApplicableForRect:(struct CGRect)arg1 context:(id)arg2 hints:(id)arg3;
- (id)description;
- (void)dealloc;
- (id)initWithDrawingRect:(struct CGRect)arg1 applicableForRect:(struct CGRect)arg2 context:(id)arg3 hints:(id)arg4;

@end

