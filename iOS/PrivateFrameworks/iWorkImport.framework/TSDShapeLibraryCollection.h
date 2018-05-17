//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSDShapeCollection.h"

@class NSString, TSDShapeLibrary;

__attribute__((visibility("hidden")))
@interface TSDShapeLibraryCollection : NSObject <TSDShapeCollection>
{
    unsigned long long _categoryIndex;
    TSDShapeLibrary *_shapeLibrary;
}

@property(retain, nonatomic) TSDShapeLibrary *p_shapeLibrary; // @synthesize p_shapeLibrary=_shapeLibrary;
@property(nonatomic) unsigned long long p_categoryIndex; // @synthesize p_categoryIndex=_categoryIndex;
- (void).cxx_destruct;
- (id)p_category;
- (id)shapeAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfShapes;
@property(readonly, nonatomic) NSString *name;
- (id)initWithShapeLibrary:(id)arg1 categoryIndex:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
