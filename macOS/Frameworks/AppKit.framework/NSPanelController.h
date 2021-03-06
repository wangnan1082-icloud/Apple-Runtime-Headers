//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSPanelController : NSObject
{
    id alertPanel;
    id iconView;
    id okButton;
    id renameLabel;
    id renameTextField;
    id target;
    SEL action;
    BOOL gotString;
    NSString *textFieldStringValue;
}

- (void)controlTextDidChange:(id)arg1;
- (void)ok:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)cancel:(id)arg1;
- (id)stringValue;
- (BOOL)gotString;
- (BOOL)showPanel:(id)arg1 andNotify:(id)arg2 with:(SEL)arg3;
- (void)dealloc;
- (void)_setTextFieldStringValue:(id)arg1;

@end

