//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFontManager.h"

@interface ICMFontManager : NSFontManager
{
    BOOL _isTogglingBoldface;
    BOOL _isTogglingItalics;
}

+ (BOOL)isMenuItemToggleItalics:(id)arg1;
+ (BOOL)isMenuItemToggleBold:(id)arg1;
@property(nonatomic) BOOL isTogglingItalics; // @synthesize isTogglingItalics=_isTogglingItalics;
@property(nonatomic) BOOL isTogglingBoldface; // @synthesize isTogglingBoldface=_isTogglingBoldface;
- (void)addFontTrait:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)modifyFontViaPanel:(id)arg1;
- (void)setSelectedFont:(id)arg1 isMultiple:(BOOL)arg2;

@end
