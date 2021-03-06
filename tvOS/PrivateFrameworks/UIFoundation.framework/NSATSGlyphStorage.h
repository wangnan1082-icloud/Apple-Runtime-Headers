//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreText/CTGlyphStorageInterface.h>

@class NSATSTypesetter, NSString;

@interface NSATSGlyphStorage : CTGlyphStorageInterface
{
    struct __CTGlyphStorage *_glyphStorage;
    struct __CFArray *_masterRuns;
    NSATSTypesetter *_typesetter;
    CDStruct_ec8253cd *_runs;
    long long _numRuns;
    long long _runBufferSize;
    struct _NSRange _glyphRange;
    struct _NSRange _characterRange;
    long long _bufferSize;
    NSATSGlyphStorage *_parent;
    struct __CFSet *_children;
    long long _paraEndElasticCharIndex;
    double _paraEndElasticCharWidth;
    NSString *_textString;
    struct {
        long long _field1;
        struct {
            unsigned short _field1;
            struct CGSize _field2;
            unsigned int _field3;
            long long _field4;
            long long _field5;
        } _field2[0];
    } *_stack;
    const CDStruct_ec8253cd *_lastElasticRun;
    long long _lastElasticRunLocation;
    long long _totalAbsorbedCount;
    struct {
        unsigned int _hasNonNominalGlyph:1;
        unsigned int _hasPositionalStake:1;
        unsigned int _hasBidiRun:1;
        unsigned int _isEllipsisStorage:1;
        unsigned int _hasNonNominalStringIndexes:1;
        unsigned int _isUnordered:1;
        unsigned int _hasTotalAbsorbedCount:1;
        unsigned int _reserved:25;
    } _gFlags;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)disposeGlyphStack;
- (void)popGlyph:(long long)arg1;
- (void)pushGlyph:(long long)arg1;
- (void)initGlyphStack:(long long)arg1;
- (void)insertGlyphs:(CDStruct_627e0f85)arg1;
- (void)moveGlyphsTo:(long long)arg1 from:(CDStruct_627e0f85)arg2;
- (void)swapGlyph:(long long)arg1 withIndex:(long long)arg2;
- (void)setStringIndex:(long long)arg1 forIndex:(long long)arg2;
- (void)setAbsorbedCount:(long long)arg1 forIndex:(long long)arg2;
- (void)setProps:(unsigned int)arg1 forIndex:(long long)arg2;
- (void)setAdvance:(struct CGSize)arg1 forIndex:(long long)arg2;
- (void)setGlyphID:(unsigned short)arg1 forIndex:(long long)arg2;
- (void)getCustomAdvance:(struct CGSize *)arg1 forIndex:(long long)arg2;
- (struct __CTGlyphStorage *)createCopy:(CDStruct_627e0f85)arg1;
- (void)finalize;
- (void)dealloc;
- (const CDStruct_ec8253cd *)_attributeRunForCharacterAtIndex:(long long)arg1;
- (double)_widthForStringRange:(struct _NSRange)arg1;
- (struct _NSRange)_collectElasticRangeSurroundingCharacterAtIndex:(long long)arg1 minimumCharacterIndex:(long long)arg2;
- (_Bool)_resolvePositionalStakeGlyphsForLineFragment:(struct __CTLine *)arg1 lineFragmentRect:(struct CGRect)arg2 minPosition:(double)arg3 maxPosition:(double)arg4 maxLineFragmentWidth:(double)arg5 breakHint:(long long *)arg6;
- (struct __CTRun *)_createEllipsisRunWithStringRange:(CDStruct_627e0f85)arg1 attributes:(struct __CFDictionary *)arg2;
- (id)childGlyphStorageWithCharacterRange:(struct _NSRange)arg1;
- (struct __CTTypesetter *)createCTTypesetter;
- (void)setGlyphRange:(struct _NSRange)arg1 characterRange:(struct _NSRange)arg2;
- (id)typesetter;
- (id)initWithTypesetter:(id)arg1;
- (void)_invalidate;
- (void)_flushCachedObjects;
- (oneway void)release;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;

@end

