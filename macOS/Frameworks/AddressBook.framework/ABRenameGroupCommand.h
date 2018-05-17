//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABCommand.h>

@class ABGroup, NSString;

__attribute__((visibility("hidden")))
@interface ABRenameGroupCommand : ABCommand
{
    ABGroup *_group;
    NSString *_name;
}

- (BOOL)doIt;
- (void)redoIt;
- (void)undoIt;
- (void)_swapName;
- (void)finalize;
- (void)dealloc;
- (id)initWithGroup:(id)arg1 newName:(id)arg2 addressBook:(id)arg3;

@end
