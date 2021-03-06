//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, XCTestCase;
@protocol VTKComparator, VTKReferenceItemsSource, VTKStoreManager;

__attribute__((visibility("hidden")))
@interface VTKAssert : NSObject
{
    NSMutableArray *_mutableDrawItems;
    XCTestCase *_testCase;
    id <VTKReferenceItemsSource> _referenceItemsSource;
    id <VTKStoreManager> _storeManager;
    id <VTKComparator> _comparator;
}

@property(readonly, nonatomic) id <VTKComparator> comparator; // @synthesize comparator=_comparator;
@property(readonly, nonatomic) id <VTKStoreManager> storeManager; // @synthesize storeManager=_storeManager;
@property(readonly, nonatomic) id <VTKReferenceItemsSource> referenceItemsSource; // @synthesize referenceItemsSource=_referenceItemsSource;
@property(readonly, nonatomic) __weak XCTestCase *testCase; // @synthesize testCase=_testCase;
- (void).cxx_destruct;
- (id)_drawItems:(id)arg1 atImageUnderTest:(id)arg2;
@property(readonly, nonatomic) NSArray *drawItems;
- (void)addSquareGuideAt:(struct CGRect)arg1 withColor:(id)arg2;
- (void)addHorozontalGuideAt:(float)arg1 withColor:(id)arg2;
- (void)addVerticalGuideAt:(float)arg1 withColor:(id)arg2;
- (void)assertView:(id)arg1 identifier:(id)arg2 filePath:(id)arg3 lineNumber:(unsigned int)arg4;
@property(copy, nonatomic) NSString *referenceImagesDirectory;
- (id)initWithTestCase:(id)arg1 referenceItemsSource:(id)arg2 storeMnanager:(id)arg3 imageComparator:(id)arg4;
- (id)initWithTestCase:(id)arg1;

@end

