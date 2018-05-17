//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@interface PKSectionTableViewController : UITableViewController
{
    unsigned int _numberOfSections;
    CDStruct_808b339d _currentMap;
    CDStruct_808b339d _bufferedMap;
}

- (int)numberOfSectionsInTableView:(id)arg1;
- (_Bool)shouldMapSection:(unsigned int)arg1;
- (int)rowAnimationForDeletingSection:(unsigned int)arg1;
- (int)rowAnimationForReloadingSection:(unsigned int)arg1;
- (int)rowAnimationForInsertingSection:(unsigned int)arg1;
- (_Bool)_recomputeMappedSections;
- (void)_swapBuffers;
- (_Bool)isMappingValid;
- (unsigned int)numberOfMappedSections;
- (unsigned int)sectionForIndex:(unsigned int)arg1;
- (unsigned int)indexForSection:(unsigned int)arg1;
- (_Bool)isSectionMapped:(unsigned int)arg1;
- (void)updateSectionVisibilityAndReloadIfNecessaryForAllSections;
- (void)updateSectionVisibilityAndReloadIfNecessaryForSections:(id)arg1;
- (void)updateSectionVisibilityAndReloadIfNecessaryForSection:(unsigned int)arg1;
- (void)reloadSection:(unsigned int)arg1;
- (void)reloadSections:(id)arg1;
- (_Bool)reloadData;
- (_Bool)recomputeMappedSections;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 numberOfSections:(unsigned int)arg2;
- (id)initWithStyle:(int)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end
