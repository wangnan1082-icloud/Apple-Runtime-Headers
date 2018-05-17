//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray, NSObject<PDFViewPopupManager>, PDFAKOverlayAdaptor, PDFAnnotation, PDFCoachMarkManager, PDFDocument, PDFDocumentViewController, PDFPage, PDFPanGestureRecognizer, PDFPasswordViewController, PDFRenderingProperties, PDFScrollView, PDFSelection, PDFTimer, PDFViewController, PDFViewLayout, UIDragInteraction, UILongPressGestureRecognizer, UISwipeGestureRecognizer, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface PDFViewPrivate : NSObject
{
    PDFDocument *document;
    PDFScrollView *scrollView;
    PDFViewController *controller;
    PDFSelection *currentSelection;
    _Bool autoScale;
    _Bool scaling;
    double zoomIncrement;
    id <PDFViewDelegate> delegate;
    _Bool delegateWillScale;
    _Bool delegateOrdersPageDrawing;
    double gutterWide;
    _Bool displaysPageBreaks;
    struct UIEdgeInsets pageBreakMargins;
    long long displayMode;
    long long displayDirection;
    PDFViewLayout *viewLayout;
    _Bool scrollingChangesPages;
    _Bool displaysAsBook;
    _Bool displaysRTL;
    PDFRenderingProperties *renderingProperties;
    unsigned long long lastVerticalScrollDirection;
    unsigned long long lastHorizontalScrollDirection;
    _Bool displaysBookmarksForPages;
    unsigned long long scrollEntry;
    unsigned long long currentPageIndex;
    unsigned long long firstVisiblePage;
    unsigned long long lastVisiblePage;
    _Bool inhibitAutoScroll;
    PDFPage *fromPage;
    PDFTimer *pageSyncTimer;
    NSMutableArray *destinationHistory;
    long long historyIndex;
    NSArray *highlights;
    PDFCoachMarkManager *coachMarkManager;
    PDFPasswordViewController *passwordViewController;
    NSObject<PDFViewPopupManager> *popupManager;
    PDFAnnotation *currentTextWidget;
    PDFAKOverlayAdaptor *akOverlayAdaptor;
    _Bool enableSelectionDrawing;
    _Bool showsScrollIndicators;
    _Bool debugDrawCGPDFNodeLayer[11];
    _Bool wantsForceUpdate;
    double blockingWaitDuration;
    UILongPressGestureRecognizer *longPressGestureRecognizer;
    PDFPanGestureRecognizer *panGestureRecognizer;
    UITapGestureRecognizer *tapGestureRecognizer;
    UISwipeGestureRecognizer *swipeGestureRecognizer;
    _Bool needsRotationZoomFix;
    PDFDocumentViewController *documentViewController;
    _Bool isUsingPageViewController;
    NSDictionary *pageViewControllerOptions;
    UIDragInteraction *dragInteraction;
    double horizontalScaleFactorBeforeRotation;
    struct CGPoint documentViewCenterBeforeRotation;
}

- (void).cxx_destruct;

@end
