//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQHXMLOutput-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GQHDOMXML : NSObject <GQHXMLOutput>
{
    struct _xmlDoc *mXMLDoc;
    struct _xmlNode *mCurrentNode;
}

- (struct __CFData *)createProgressiveHtml;
- (struct __CFData *)createHtmlWithCss:(struct __CFString *)arg1;
- (struct __CFData *)createHtml;
- (void)addCharRef:(const char *)arg1;
- (void)addXmlCharContent:(const char *)arg1;
- (void)setAttribute:(const char *)arg1 value:(const char *)arg2;
- (void)endElementWithExpectedName:(const char *)arg1;
- (void)endElement;
- (void)startElement:(const char *)arg1;
- (void)dealloc;
- (id)initWithHead;
- (id)initEmpty;
- (void)removeStyleSheetLinkNodeAndAddStyle:(struct __CFString *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

