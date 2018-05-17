//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSTreeNode.h>

@class NSString, NSTreeController;

@interface NSTreeControllerTreeNode : NSTreeNode
{
    NSString *_childrenKeyPath;
    NSString *_leafKeyPath;
    NSString *_countKeyPath;
    NSTreeController *_treeController;
    struct __NSTreeControllerTreeNodeFlags {
        unsigned int _observingIsSetup:1;
        unsigned int _isUpdatingChildNodes:1;
        unsigned int _observingRepresentedObjectChildren:1;
        unsigned int reserved:29;
    } _NSTreeControllerTreeNodeFlags;
}

- (void)updateChildNodesForKeyPath:(id)arg1 affectedIndexPaths:(id)arg2;
- (void)_removeSubNodesAtIndexes:(id)arg1;
- (void)removeObjectFromSubNodesAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inSubNodesAtIndex:(unsigned long long)arg2;
- (void)setRepresentedObject:(id)arg1;
- (BOOL)isLeaf;
- (long long)_leafState;
- (unsigned long long)countOfSubNodes;
- (void)willAccessChildNodes;
- (id)countKeyPath;
- (id)childrenKeyPath;
- (id)leafKeyPath;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_configureObservingWithOption:(unsigned long long)arg1;
- (void)_configureObservingForChildNodesWithOption:(unsigned long long)arg1;
- (void)_tearDownObserving;
- (void)_setupObserving;
- (void)_detachFromParent;
- (void)dealloc;
- (id)initWithRepresentedObject:(id)arg1 treeController:(id)arg2;

@end
