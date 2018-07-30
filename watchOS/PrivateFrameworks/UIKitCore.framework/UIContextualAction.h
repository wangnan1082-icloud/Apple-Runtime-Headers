//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor, UIImage;

@interface UIContextualAction : NSObject
{
    _Bool _forcesFallbackBackgroundColor;
    int _style;
    CDUnknownBlockType _handler;
    NSString *_title;
    UIColor *_backgroundColor;
    UIImage *_image;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _preHandler;
}

+ (id)contextualActionWithStyle:(int)arg1 title:(id)arg2 handler:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType preHandler; // @synthesize preHandler=_preHandler;
@property(nonatomic) _Bool forcesFallbackBackgroundColor; // @synthesize forcesFallbackBackgroundColor=_forcesFallbackBackgroundColor;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) int style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)description;
- (void)_completeWithResult:(_Bool)arg1;
- (void)cancel;
- (void)executeHandlerWithView:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)executePreHandlerWithView:(id)arg1;
@property(readonly, nonatomic) _Bool isDestructive;

@end
