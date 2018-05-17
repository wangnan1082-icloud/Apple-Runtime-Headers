//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMKCandidateUIStringProperties, NSAttributedString, NSString;

@interface IMKCandidateUIString : NSObject
{
    IMKCandidateUIStringProperties *_properties;
    NSString *_string;
    NSAttributedString *_attributedString;
    BOOL _usesSizeCacheForChineseCharacters;
}

+ (id)UIStringWithString:(id)arg1 properties:(id)arg2;
+ (id)UIStringWithAttributedString:(id)arg1;
@property(nonatomic) BOOL usesSizeCacheForChineseCharacters; // @synthesize usesSizeCacheForChineseCharacters=_usesSizeCacheForChineseCharacters;
@property(retain, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
@property(retain, nonatomic) IMKCandidateUIStringProperties *properties; // @synthesize properties=_properties;
- (id)attributedStringWithForegroundColor:(id)arg1;
- (id)ellipticalAttributedString:(double)arg1 isVerticallyAligned:(BOOL)arg2 color:(id)arg3;
@property(readonly, nonatomic) struct CGSize size;
- (void)dealloc;

@end
