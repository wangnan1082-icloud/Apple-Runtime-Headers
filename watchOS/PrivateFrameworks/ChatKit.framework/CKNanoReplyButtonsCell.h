//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKTranscriptCell.h>

#import <ChatKit/CKNanoReplyButtonsViewDelegate-Protocol.h>

@class CKNanoReplyButtonsView, NSString;
@protocol CKNanoReplyButtonsCellDelegate;

@interface CKNanoReplyButtonsCell : CKTranscriptCell <CKNanoReplyButtonsViewDelegate>
{
    _Bool _shouldShowSurf;
    id <CKNanoReplyButtonsCellDelegate> _replyDelegate;
    NSString *_primaryLanguage;
    CKNanoReplyButtonsView *_replyButtons;
}

+ (float)defaultCellHeightForLanguage:(id)arg1;
@property(retain, nonatomic) CKNanoReplyButtonsView *replyButtons; // @synthesize replyButtons=_replyButtons;
@property(nonatomic) _Bool shouldShowSurf; // @synthesize shouldShowSurf=_shouldShowSurf;
@property(copy, nonatomic) NSString *primaryLanguage; // @synthesize primaryLanguage=_primaryLanguage;
@property(nonatomic) __weak id <CKNanoReplyButtonsCellDelegate> replyDelegate; // @synthesize replyDelegate=_replyDelegate;
- (void).cxx_destruct;
- (void)replyButtonsView:(id)arg1 tappedReplyType:(unsigned int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

