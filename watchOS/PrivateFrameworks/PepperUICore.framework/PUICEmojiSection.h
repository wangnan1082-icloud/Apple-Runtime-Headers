//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PUICCollectionViewSection.h"

@class NSArray, NSString;

@interface PUICEmojiSection : NSObject <PUICCollectionViewSection>
{
    NSArray *_frequentlyUsedEmojiArray;
    NSString *_categoryIdentifier;
    NSString *_language;
}

+ (id)headerReuseIdentifier;
+ (Class)headerClass;
+ (id)cellReuseIdentifier;
+ (Class)cellClass;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(readonly, copy, nonatomic) NSString *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
- (void).cxx_destruct;
- (void)_populateFrequentlyUsedList;
- (void)configureHeaderView:(id)arg1;
- (void)configureCell:(id)arg1 forItem:(int)arg2;
- (int)numberOfItems;
- (id)indexItem;
- (id)displayEmojiStringAtIndex:(int)arg1;
- (id)emojiAtIndex:(int)arg1;
- (id)initWithCategoryIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
