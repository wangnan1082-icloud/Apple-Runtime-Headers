//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSDictionary, NSString, NSStringDrawingContext, UIImage;

@interface MPUTextDrawingContext : NSObject
{
    NSString *_text;
    NSAttributedString *_attributedText;
    NSStringDrawingContext *_stringDrawingContext;
    int _stringDrawingOptions;
    NSDictionary *_uniformTextAttributes;
    float _firstBaselineOffsetFromTop;
    float _lastBaselineOffsetFromBottom;
    UIImage *_image;
    struct CGSize _boundingSize;
}

@property(retain, nonatomic, getter=_image, setter=_setImage:) UIImage *image; // @synthesize image=_image;
@property(nonatomic, setter=_setLastBaselineOffsetFromBottom:) float lastBaselineOffsetFromBottom; // @synthesize lastBaselineOffsetFromBottom=_lastBaselineOffsetFromBottom;
@property(nonatomic, setter=_setFirstBaselineOffsetFromTop:) float firstBaselineOffsetFromTop; // @synthesize firstBaselineOffsetFromTop=_firstBaselineOffsetFromTop;
@property(nonatomic, setter=_setBoundingSize:) struct CGSize boundingSize; // @synthesize boundingSize=_boundingSize;
@property(copy, nonatomic, setter=_setUniformTextAttributes:) NSDictionary *uniformTextAttributes; // @synthesize uniformTextAttributes=_uniformTextAttributes;
@property(nonatomic, setter=_setStringDrawingOptions:) int stringDrawingOptions; // @synthesize stringDrawingOptions=_stringDrawingOptions;
@property(retain, nonatomic, setter=_setStringDrawingContext:) NSStringDrawingContext *stringDrawingContext; // @synthesize stringDrawingContext=_stringDrawingContext;
@property(copy, nonatomic, setter=_setAttributedText:) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(copy, nonatomic, setter=_setText:) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;

@end

