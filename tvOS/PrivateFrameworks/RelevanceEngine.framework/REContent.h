//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "REIndentedDescription.h"

@class NSAttributedString, NSMutableDictionary, NSString, NSTimeZone, REAccessoryDescription, REAccessoryImage, REAccessoryMatchup, REImageContentProvider, RETextContentProvider, UIColor, UIImage;

@interface REContent : NSObject <REIndentedDescription, NSCopying, NSCoding>
{
    NSMutableDictionary *_contents;
    NSTimeZone *_timeZone;
}

- (void).cxx_destruct;
@property(copy, nonatomic) UIImage *bodyImage;
@property(copy, nonatomic) UIImage *headerImage;
@property(copy, nonatomic) NSAttributedString *headerText;
@property(copy, nonatomic) NSAttributedString *description3Text;
@property(copy, nonatomic) NSAttributedString *description2Text;
@property(copy, nonatomic) NSAttributedString *description1Text;
@property(copy, nonatomic) NSString *overrideBodyString;
@property(nonatomic) struct CGRect imageFocusRect;
@property(copy, nonatomic) REAccessoryMatchup *matchupAccessory;
@property(copy, nonatomic) REAccessoryImage *imageAccessory;
@property(copy, nonatomic) REAccessoryDescription *descriptionAccessory;
@property(nonatomic) unsigned int headerImageEdge;
@property(nonatomic) _Bool bodyImageShouldStretch;
@property(nonatomic) _Bool tintColorAffectsHeader;
@property(nonatomic) unsigned long long description2FontStyle;
@property(nonatomic) unsigned long long description1FontStyle;
@property(nonatomic) unsigned long long headerFontStyle;
@property(nonatomic) _Bool useMonospaceFont;
@property(nonatomic) unsigned long long style;
@property(copy, nonatomic) UIColor *tintColor;
@property(nonatomic) unsigned long long punchThrough;
@property(copy, nonatomic) RETextContentProvider *description3TextContentProvider;
@property(copy, nonatomic) RETextContentProvider *description2TextContentProvider;
@property(copy, nonatomic) RETextContentProvider *description1TextContentProvider;
@property(copy, nonatomic) REImageContentProvider *bodyImageContentProvider;
@property(copy, nonatomic) REImageContentProvider *headerImageContentProvider;
@property(copy, nonatomic) RETextContentProvider *headerTextContentProvider;
@property(retain, nonatomic) NSString *bodyImageCompositingFilter;
@property(retain, nonatomic) UIImage *overrideBodyImage;
@property(retain, nonatomic) UIImage *overrideHeaderImage;
@property(readonly, copy) NSString *description;
- (id)descriptionWithIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)init;
@property(nonatomic) _Bool wantsFullCellPhoto;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
