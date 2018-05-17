//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CTGlyphStorageInterface : NSObject
{
    long _glyphCount;
    unsigned short *_glyphs;
    struct CGSize *_advances;
    unsigned int *_props;
    int *_stringIndexes;
    int *_absorbedCounts;
    struct CGPoint *_origins;
}

- (void)disposeGlyphStack;
- (void)popGlyph:(long)arg1;
- (void)pushGlyph:(long)arg1;
- (void)initGlyphStack:(long)arg1;
- (void)insertGlyphs:(CDStruct_1ef3fb1f)arg1;
- (void)moveGlyphsTo:(long)arg1 from:(CDStruct_1ef3fb1f)arg2;
- (void)swapGlyph:(long)arg1 withIndex:(long)arg2;
- (void)setStringIndex:(long)arg1 forIndex:(long)arg2;
- (void)setAbsorbedCount:(long)arg1 forIndex:(long)arg2;
- (void)setProps:(unsigned int)arg1 forIndex:(long)arg2;
- (void)setAdvance:(struct CGSize)arg1 forIndex:(long)arg2;
- (void)setGlyphID:(unsigned short)arg1 forIndex:(long)arg2;
- (void)getCustomAdvance:(struct CGSize *)arg1 forIndex:(long)arg2;
- (struct __CTGlyphStorage *)createCopy:(CDStruct_1ef3fb1f)arg1;

@end
