//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TTextField.h>

__attribute__((visibility("hidden")))
@interface FI_TColumnNameTextField : FI_TTextField
{
    function_b1fce659 _renameFunc;
    _Bool _becomingFirstResponder;
    _Bool _shouldEdit;
}

+ (Class)cellClass;
@property(nonatomic) _Bool shouldEdit; // @synthesize shouldEdit=_shouldEdit;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)setRenameFunc:(const function_b1fce659 *)arg1;

@end
