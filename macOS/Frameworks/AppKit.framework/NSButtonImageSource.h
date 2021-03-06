//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCoding-Protocol.h>
#import <AppKit/NSCopying-Protocol.h>

@class NSMutableDictionary;

@interface NSButtonImageSource : NSObject <NSCoding, NSCopying>
{
    NSMutableDictionary *_buttonImages;
    struct CGSize _imageSize;
    struct CGSize _focusRingImageSize;
    struct {
        unsigned int hasAlpha:1;
        unsigned int fullEncoding:1;
        unsigned int reserved:30;
    } _bisFlags;
    int _reserved1;
    int _reserved2;
    int _reserved3;
}

+ (BOOL)archiveButtonImageSourceWithName:(id)arg1 toDirectory:(id)arg2;
+ (id)buttonImageSourceWithName:(id)arg1;
+ (void)initialize;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasImageWithAlpha;
- (struct CGSize)focusRingImageSize;
- (struct CGSize)imageSize;
- (BOOL)useHighlightEffectForState:(struct NSButtonState)arg1;
- (BOOL)useDisabledEffectForState:(struct NSButtonState)arg1;
- (BOOL)isOpaqueForState:(struct NSButtonState)arg1;
- (BOOL)isBorderedForState:(struct NSButtonState)arg1;
- (unsigned long long)bezelStyleForState:(struct NSButtonState)arg1;
- (id)focusRingImageForState:(struct NSButtonState)arg1;
- (id)imageForState:(struct NSButtonState)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)_findButtonImageForState:(struct NSButtonState)arg1;
- (BOOL)_archiveToFile:(id)arg1;
- (id)_initWithWidget:(struct __CFString *)arg1;
- (id)_initWithName:(id)arg1 propertyList:(id)arg2;
- (void)_scanImages;

@end

