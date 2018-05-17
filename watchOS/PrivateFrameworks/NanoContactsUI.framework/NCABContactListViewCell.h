//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PUICTableViewCell.h"

@class CNContact, CNContactFormatter, NSDictionary, NSMutableDictionary, UIColor;

@interface NCABContactListViewCell : PUICTableViewCell
{
    NSDictionary *_defaultAttributes;
    NSDictionary *_disabledAttributes;
    UIColor *_emphasisColor;
    UIColor *_emphasisColorDisabled;
    CNContact *_contact;
    CNContactFormatter *_contactFormatter;
    NSMutableDictionary *_attributedNameCache;
}

@property(retain, nonatomic) NSMutableDictionary *attributedNameCache; // @synthesize attributedNameCache=_attributedNameCache;
@property(retain, nonatomic) CNContactFormatter *contactFormatter; // @synthesize contactFormatter=_contactFormatter;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (void)_contentSizeChanged:(id)arg1;
- (id)_attributedName;
- (id)_defaultAttributes;
- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithCellIdentifier:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
