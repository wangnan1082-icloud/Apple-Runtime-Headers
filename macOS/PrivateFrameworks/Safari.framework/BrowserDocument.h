//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSDocument.h>

#import <Safari/NSOpenSavePanelDelegate-Protocol.h>

@class BrowserViewController, NSConditionLock, NSData, NSMutableArray, NSPopUpButton, NSSavePanel, NSString, NSTextField, NSView, WebViewController;

__attribute__((visibility("hidden")))
@interface BrowserDocument : NSDocument <NSOpenSavePanelDelegate>
{
    BrowserViewController *_currentBrowserViewController;
    NSMutableArray *_browserViewControllers;
    BrowserViewController *_contentViewControllerToSave;
    NSSavePanel *_activeSavePanel;
    BOOL _isSavingWithSavePanel;
    BOOL _shouldOpenWindowBehindFrontmost;
    BOOL _popupWindow;
    BOOL _isSavingAsPDF;
    int _restorationState;
    unsigned long long _browsingMode;
    NSView *_fileFormatAccessoryView;
    NSPopUpButton *_fileFormatPopUpButton;
    NSTextField *_fileFormatAccessoryViewPageSourceDescriptionLabel;
    NSTextField *_fileFormatAccessoryViewWebArchiveDescriptionLabel;
    NSConditionLock *_waitingForPDFLock;
    NSData *_pdfDataForExport;
}

+ (BOOL)lastDocumentCouldShowUnifiedField;
@property(retain) NSData *pdfDataForExport; // @synthesize pdfDataForExport=_pdfDataForExport;
@property(retain) NSConditionLock *waitingForPDFLock; // @synthesize waitingForPDFLock=_waitingForPDFLock;
@property BOOL isSavingAsPDF; // @synthesize isSavingAsPDF=_isSavingAsPDF;
@property(nonatomic) __weak NSTextField *fileFormatAccessoryViewWebArchiveDescriptionLabel; // @synthesize fileFormatAccessoryViewWebArchiveDescriptionLabel=_fileFormatAccessoryViewWebArchiveDescriptionLabel;
@property(nonatomic) __weak NSTextField *fileFormatAccessoryViewPageSourceDescriptionLabel; // @synthesize fileFormatAccessoryViewPageSourceDescriptionLabel=_fileFormatAccessoryViewPageSourceDescriptionLabel;
@property(nonatomic) __weak NSPopUpButton *fileFormatPopUpButton; // @synthesize fileFormatPopUpButton=_fileFormatPopUpButton;
@property(retain, nonatomic) NSView *fileFormatAccessoryView; // @synthesize fileFormatAccessoryView=_fileFormatAccessoryView;
@property(readonly, nonatomic) int restorationState; // @synthesize restorationState=_restorationState;
@property(readonly, nonatomic) unsigned long long browsingMode; // @synthesize browsingMode=_browsingMode;
@property(readonly, nonatomic, getter=isPopupWindow) BOOL popupWindow; // @synthesize popupWindow=_popupWindow;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL wasRestored;
- (void)restoreDocumentWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) unsigned long long numberOfBrowserViewControllers;
- (id)makeBrowserViewControllerRelatedToPage:(const struct Page *)arg1 withWebsiteDataStore:(id)arg2;
- (id)makeBrowserViewControllerRelatedToPage:(const struct Page *)arg1;
- (id)makeBrowserViewController;
@property(retain, nonatomic) BrowserViewController *currentBrowserViewController;
- (void)removeBrowserViewController:(id)arg1;
- (void)addBrowserViewController:(id)arg1;
- (id)pageName;
- (id)handleEmailContentsCommand:(id)arg1;
- (id)handleDoJavaScriptCommand:(id)arg1;
- (id)handleSearchTheWebCommand:(id)arg1;
- (id)text;
- (id)source;
- (void)setURLString:(id)arg1;
- (id)URLString;
- (void)createWebClip:(id)arg1;
- (void)setShouldOpenWindowBehindFrontmost:(BOOL)arg1;
- (BOOL)shouldOpenWindowBehindFrontmost;
- (void)tryMultipleURLs:(unique_ptr_aba2cdfe)arg1 httpReferrer:(id)arg2;
@property(readonly, nonatomic) WebViewController *currentBrowserOrOverlayViewController;
@property(readonly, nonatomic) BrowserViewController *currentBrowserViewControllerIgnoringVisualTabPickerVisibility;
- (void)_sharePageViaMail:(id)arg1;
- (void)viewSource:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)canSave;
- (BOOL)canCreateWebClip;
- (BOOL)canViewSource;
- (BOOL)_isDocumentHTML;
- (void)clearAllStatus;
- (void)addBookmarksForTabs:(id)arg1;
- (void)addBookmarkToTopLevel:(id)arg1;
- (void)showBookmarksSidebar:(id)arg1;
- (void)previousReadingListItem:(id)arg1;
- (void)nextReadingListItem:(id)arg1;
- (void)addReadingListItemsForTabs:(id)arg1;
- (void)addReadingListItem:(id)arg1;
- (void)addBookmark:(id)arg1;
- (void)_proposeBookmark;
- (long long)_numberOfTabsToPotentiallyAddToBookmarksOrReadingList;
- (id)_createBookmark;
- (BOOL)_canSelectPreviousReadingListItem;
- (BOOL)_canSelectNextReadingListItem;
- (BOOL)_canAddReadingListItem;
- (BOOL)canAddBookmarksForTabs;
- (BOOL)canAddBookmark;
- (void)safari_printDocument:(id)arg1;
- (BOOL)canPrint;
- (void)printCurrentPage;
- (void)setPrintInfo:(id)arg1;
- (id)printInfo;
- (void)printDocumentWithSettings:(id)arg1 showPrintPanel:(BOOL)arg2 delegate:(id)arg3 didPrintSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (BOOL)isShowingLoadErrorPage;
- (void)stopLoading:(id)arg1;
- (void)setShouldStartEmpty;
- (BOOL)shouldStartEmpty;
- (void)reload:(id)arg1;
- (id)forwardListMenuForButton:(id)arg1;
- (id)backListMenuForButton:(id)arg1;
- (void)_addBackForwardListItem:(const struct BackForwardListItem *)arg1 toMenu:(id)arg2;
- (void)goToItemInBackOrForwardMenu:(id)arg1;
- (void)displayInitialContents;
- (BOOL)hasInitialContents;
- (void)goHome:(id)arg1;
- (BOOL)canGoHome;
- (id)currentURL;
- (void)goToURL:(id)arg1;
- (void)evaluateJavaScript:(id)arg1;
- (void)goToRequest:(id)arg1 withTabLabel:(id)arg2;
- (void)openLocation:(id)arg1;
- (void)hideFindBanner:(id)arg1;
- (void)findPrevious:(id)arg1;
- (void)findNext:(id)arg1;
- (void)focusContentSearchField:(id)arg1;
- (void)searchWeb:(id)arg1;
- (BOOL)canShowUnifiedField;
- (void)snapBackToSearchResults:(id)arg1;
- (void)nameHasChanged;
- (id)writableTypesForSaveOperation:(unsigned long long)arg1;
- (id)fileType;
- (id)_fileTypeForUnknownDocument;
- (id)displayName;
- (id)untitledName;
- (BOOL)readFromData:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)dataOfType:(id)arg1 error:(id *)arg2;
- (id)panel:(id)arg1 userEnteredFilename:(id)arg2 confirmed:(BOOL)arg3;
- (BOOL)panel:(id)arg1 shouldEnableURL:(id)arg2;
- (BOOL)prepareSavePanel:(id)arg1;
- (void)fileFormatPopUpButtonUpdated:(id)arg1;
- (void)_updateFileFormatInformationText;
- (id)_allowedFileTypes;
- (void)document:(id)arg1 didSave:(BOOL)arg2 contextInfo:(void *)arg3;
- (void)presentSavePanelForContentViewController:(id)arg1;
- (void)saveDocumentTo:(id)arg1;
- (void)_presentSavePanel;
- (void)didGeneratePDFDataForExport:(id)arg1;
- (void)saveDocumentToPDF:(id)arg1;
- (BOOL)canAsynchronouslyWriteToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3;
- (void)saveDocumentAs:(id)arg1;
- (void)saveDocument:(id)arg1;
- (void)saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)_isSavingPlainText;
- (id)_suggestedFilenameForSaving;
- (id)_MIMETypeForSaving;
- (BOOL)isSavingAsWebArchive;
- (BOOL)_canSaveAsWebArchive;
- (struct Frame)_frameToSave;
- (id)browserWindowController;
- (BOOL)isDocumentEdited;
- (void)removeWindowController:(id)arg1;
- (void)makeWindowControllers;
- (BOOL)shouldClose;
- (void)close;
- (void)dealloc;
- (void)_commonBrowserDocumentInitWithContentsOfRequest:(id)arg1 browserViewController:(id)arg2;
- (id)initWithContentsOfURL:(id)arg1 ofType:(id)arg2;
- (id)initWithBrowsingMode:(unsigned long long)arg1 relatedToPage:(const struct Page *)arg2 websiteDataStore:(id)arg3 isPopupWindow:(BOOL)arg4 restoringFromLastSession:(BOOL)arg5;
- (id)init;
- (id)initWithContentsOfRequest:(id)arg1 browsingMode:(unsigned long long)arg2;
- (BOOL)validate_saveSamplingProfilerOutput:(id)arg1;
- (void)saveSamplingProfilerOutput:(id)arg1;
- (BOOL)validate_getBytecodeProfile:(id)arg1;
- (void)getBytecodeProfile:(id)arg1;
- (BOOL)validate_saveMetadataJSONForActiveForm:(id)arg1;
- (void)dumpMetadataJSONForActiveForm:(id)arg1;
- (void)saveMetadataJSONForActiveForm:(id)arg1;
- (void)collectDataForSavingPageInliningOrDiscardingExternalResources:(id)arg1;
- (BOOL)validate_toggleLogJavaScriptExceptions:(id)arg1;
- (void)toggleLogJavaScriptExceptions:(id)arg1;
- (BOOL)validate_togglePauseWebProcessSoon:(id)arg1;
- (void)togglePauseWebProcessSoon:(id)arg1;
- (BOOL)validate_togglePauseWebProcess:(id)arg1;
- (BOOL)_webProcessForCurrentPageIsForcePaused;
- (void)togglePauseWebProcess:(id)arg1;
- (BOOL)validate_crashWebProcessSoon:(id)arg1;
- (void)crashWebProcessSoon:(id)arg1;
- (BOOL)validate_crashWebProcess:(id)arg1;
- (void)crashWebProcess:(id)arg1;
- (void)goToAboutBlankSoon:(id)arg1;
- (BOOL)validate_forceRepaint:(id)arg1;
- (void)forceRepaint:(id)arg1;
- (BOOL)validate_showLayerTreeInMica:(id)arg1;
- (void)showLayerTreeInMica:(id)arg1;
- (BOOL)validate_showRenderLayerTree:(id)arg1;
- (void)showRenderLayerTree:(id)arg1;
- (BOOL)validate_showRenderTree:(id)arg1;
- (void)showRenderTree:(id)arg1;
- (BOOL)validate_toggleElementSelection:(id)arg1;
- (void)toggleElementSelection:(id)arg1;
- (BOOL)validate_toggleTimelineRecording:(id)arg1;
- (void)toggleTimelineRecording:(id)arg1;
- (BOOL)validate_showErrorConsole:(id)arg1;
- (void)showResources:(id)arg1;
- (BOOL)validate_showResources:(id)arg1;
- (void)showErrorConsole:(id)arg1;
- (BOOL)validate_connectOrDisconnectOrHideWebInspector:(id)arg1;
- (void)connectOrDisconnectOrHideWebInspector:(id)arg1;
- (BOOL)validate_showWebInspector:(id)arg1;
- (void)showWebInspector:(id)arg1;
- (BOOL)validate_toggleExperimentalFeature:(id)arg1;
- (void)toggleExperimentalFeature:(id)arg1;
- (BOOL)validate_showOtherUserAgentSheet:(id)arg1;
- (void)showOtherUserAgentSheet:(id)arg1;
- (void)showOtherUserAgentSheetWithoutReloading:(id)arg1;
- (void)_showOtherUserAgentSheetAndReload:(BOOL)arg1;
- (BOOL)validate_setUserDefinedUserAgent:(id)arg1;
- (void)setUserDefinedUserAgent:(id)arg1;
- (BOOL)validate_resetUserAgent:(id)arg1;
- (void)resetUserAgent:(id)arg1;
- (void)resetUserAgentWithoutReloading:(id)arg1;
- (void)_resetUserAgentAndReload:(BOOL)arg1;
- (BOOL)validate_setUserAgent:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (void)setUserAgentWithoutReloading:(id)arg1;
- (void)_setUserAgent:(id)arg1 andReload:(BOOL)arg2;
- (BOOL)validate_openPageWithApplication:(id)arg1;
- (void)openPageWithApplication:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

