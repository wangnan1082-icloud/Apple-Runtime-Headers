//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NotesUI/ICBaseTextAttachment.h>

@class ICInlineDrawingChangeCoalescer;

@interface ICInlineDrawingTextAttachment : ICBaseTextAttachment
{
    ICInlineDrawingChangeCoalescer *_changeCoalescer;
}

@property(retain, nonatomic) ICInlineDrawingChangeCoalescer *changeCoalescer; // @synthesize changeCoalescer=_changeCoalescer;
- (void).cxx_destruct;
- (void)drawingDataDidChange:(id)arg1;
- (id)printableTextContent;
- (id)attachmentAsNSTextAttachment;
- (id)contents;
- (void)saveIfNeeded;
- (BOOL)canDragWithoutSelecting;

@end
