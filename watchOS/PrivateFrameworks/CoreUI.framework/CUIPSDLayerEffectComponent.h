//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CUIPSDLayerEffectComponent : NSObject
{
    _Bool _visible;
    NSString *_name;
}

@property(retain) NSString *name; // @synthesize name=_name;
@property _Bool visible; // @synthesize visible=_visible;
- (void)dealloc;
- (unsigned int)effectType;
- (id)_colorFromShapeEffectValue:(CDUnion_370aa22b)arg1;
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (_Bool)updateLayerEffectPreset:(id)arg1 error:(id *)arg2;

@end
