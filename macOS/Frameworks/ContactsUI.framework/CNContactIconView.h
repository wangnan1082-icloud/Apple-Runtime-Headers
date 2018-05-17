//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "CNContactIconUpdating.h"

@class NSString, NSView<CNContactIconUpdating>;

@interface CNContactIconView : NSView <CNContactIconUpdating>
{
    NSView<CNContactIconUpdating> *_representativeView;
    long long _iconViewAppearance;
}

+ (Class)representativeViewClassForViewModel:(id)arg1;
@property(nonatomic) long long iconViewAppearance; // @synthesize iconViewAppearance=_iconViewAppearance;
@property(retain, nonatomic) NSView<CNContactIconUpdating> *representativeView; // @synthesize representativeView=_representativeView;
- (void).cxx_destruct;
- (void)setupRepresentativeViewForViewModel:(id)arg1;
- (void)setCircular:(BOOL)arg1;
- (void)updateLayer;
- (void)viewModelDidUpdate:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
