//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import "TSKModel.h"
#import "TSSPreset.h"
#import "TSSStyleClient.h"

@class NSString, TSTTableStyleNetwork;

__attribute__((visibility("hidden")))
@interface TSTTableStylePreset : TSPObject <TSSPreset, TSSStyleClient, TSKModel>
{
    TSTTableStyleNetwork *_styleNetwork;
    unsigned long long _tempUpgradePresetID;
    _Bool _tableHasStrongOwnership;
}

+ (_Bool)needsObjectUUID;
@property(nonatomic) _Bool tableHasStrongOwnership; // @synthesize tableHasStrongOwnership=_tableHasStrongOwnership;
- (void)replaceReferencedStylesUsingBlock:(CDUnknownBlockType)arg1;
- (id)referencedStyles;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct TableStylePresetArchive *)arg1 archiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)swatchImage;
@property(readonly, nonatomic) NSString *presetKind;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)initWithStyleNetwork:(id)arg1;
- (id)p_documentRoot;
@property(copy, nonatomic) TSTTableStyleNetwork *styleNetwork;
@property(readonly, nonatomic) unsigned long long presetID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
