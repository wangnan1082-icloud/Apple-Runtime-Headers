//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideosUI/VUIListCollectionViewCell.h>

#import <VideosUI/VUIDownloadButtonDelegate-Protocol.h>

@class NSString, UIStackView, VUIDownloadButton, VUILabel, VUILibraryEpisodeFrameView, VUISeparatorView;
@protocol VUILibraryEpisodeListCellDelegate;

__attribute__((visibility("hidden")))
@interface VUILibraryEpisodeListCell : VUIListCollectionViewCell <VUIDownloadButtonDelegate>
{
    _Bool _supportsStartingDownload;
    id <VUILibraryEpisodeListCellDelegate> _delegate;
    NSString *_title;
    NSString *_releaseDate;
    NSString *_duration;
    long long _downloadProgressType;
    double _downloadProgress;
    VUILibraryEpisodeFrameView *_imageFrameView;
    VUISeparatorView *_separatorView;
    UIStackView *_episodeInfoStackView;
    VUILabel *_titleLabel;
    VUILabel *_releaseDateLabel;
    VUILabel *_durationLabel;
    VUIDownloadButton *_downloadButton;
    VUILabel *_dotSeparatorLabel;
}

+ (id)_metadataLabelWithString:(id)arg1 existingLabel:(id)arg2;
+ (void)configureVUILibraryEpisodeListCell:(id)arg1 withMedia:(id)arg2;
@property(retain, nonatomic) VUILabel *dotSeparatorLabel; // @synthesize dotSeparatorLabel=_dotSeparatorLabel;
@property(retain, nonatomic) VUIDownloadButton *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(retain, nonatomic) VUILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) VUILabel *releaseDateLabel; // @synthesize releaseDateLabel=_releaseDateLabel;
@property(retain, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIStackView *episodeInfoStackView; // @synthesize episodeInfoStackView=_episodeInfoStackView;
@property(retain, nonatomic) VUISeparatorView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) VUILibraryEpisodeFrameView *imageFrameView; // @synthesize imageFrameView=_imageFrameView;
@property(nonatomic) double downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(nonatomic) long long downloadProgressType; // @synthesize downloadProgressType=_downloadProgressType;
@property(nonatomic) _Bool supportsStartingDownload; // @synthesize supportsStartingDownload=_supportsStartingDownload;
@property(copy, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <VUILibraryEpisodeListCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_contentSizeCategoryIsAccessibility;
- (double)_metadataHeightToBaselineNonAXContentSizeCategory;
- (double)_metadataScaledTopMarginForNonAXContentSizeCategory;
- (void)_configureDotSeparator;
- (void)_updateDownloadButtonWithProgressType:(long long)arg1 andProgress:(double)arg2;
- (void)_removeDownloadButtonIfRequired;
- (void)_addDownloadButtonIfRequired;
- (void)didSelectDownloadButton:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)setDownloadProgressType:(long long)arg1 andProgress:(double)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

