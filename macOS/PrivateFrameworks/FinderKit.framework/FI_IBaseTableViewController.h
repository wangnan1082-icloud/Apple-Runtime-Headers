//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TViewController.h>

@class NSIndexSet, NSObjectController;

__attribute__((visibility("hidden")))
@interface FI_IBaseTableViewController : FI_TViewController
{
    NSObjectController *_dataSource;
    NSIndexSet *_columnIndexesToResizeToFitContents;
    struct TKeyValueObserver _arrangedObjectsObserver;
}

@property(retain, nonatomic) NSIndexSet *columnIndexesToResizeToFitContents; // @synthesize columnIndexesToResizeToFitContents=_columnIndexesToResizeToFitContents;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)arrangedObjectsChanged;
- (void)updateColumnWidthsToFitContents;
- (id)selectionIndexesForProposedSelection:(id)arg1;
- (void)addColumn:(id)arg1;
- (void)setView:(id)arg1;
- (id)_dataSource;
- (Class)dataSourceClass;
- (void)dealloc;
- (void)viewLoaded;

@end
