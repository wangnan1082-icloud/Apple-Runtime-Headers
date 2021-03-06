//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IconServices/CALayerDelegate-Protocol.h>

@class ISIconManager, NSString;

@interface ISIcon : NSObject <CALayerDelegate>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)applicationIcon;
+ (id)layerUpdateQueue;
+ (id)sizesFromSet:(unsigned int)arg1;
+ (int)findVariantFromSet:(unsigned int)arg1 deviceIdiom:(unsigned int)arg2 size:(struct CGSize)arg3 scale:(float)arg4;
+ (struct _LIIconVariantInfo *)variantInfoForSet:(unsigned int)arg1 count:(unsigned int *)arg2;
+ (unsigned int)deviceIdiom;
- (unsigned int)badgeOptions;
- (unsigned int)variantOptions;
@property(readonly) ISIconManager *manager;
- (id)_init;
- (void)displayLayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

