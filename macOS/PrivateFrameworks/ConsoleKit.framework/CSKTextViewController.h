//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSScrollView, NSTextView;

@interface CSKTextViewController : NSViewController
{
    NSTextView *_textView;
    NSScrollView *_scrollView;
}

@property(nonatomic) __weak NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) NSTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)setText:(id)arg1;
- (id)init;

@end
