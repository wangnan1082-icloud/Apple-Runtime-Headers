//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CarouselUIServices/CUISBulletinClientViewController.h>

@class CUISAlertLongLookContentView, NSString, NSURL, UIImage;

@interface CUISBulletinDefaultClientViewController : CUISBulletinClientViewController
{
    NSString *_title;
    NSString *_message;
    UIImage *_imageAttachment;
    CUISAlertLongLookContentView *_contentView;
    NSURL *_avAttachmentURL;
}

- (void).cxx_destruct;
- (id)headerBlurContentView;
- (_Bool)wantsHeaderBlur;
- (void)loadView;
- (id)initWithTitle:(id)arg1 message:(id)arg2 avAttachment:(id)arg3;
- (id)initWithTitle:(id)arg1 message:(id)arg2 imageAttachment:(id)arg3;

@end
