//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SiriTVUI/SiriTVUITemplateItem.h>

@class NSArray, NSDictionary;

@interface SiriTVUISegmentedControlTemplateItem : SiriTVUITemplateItem
{
    NSArray *_titles;
    NSDictionary *_backgroundColors;
    NSDictionary *_textColors;
}

@property(copy, nonatomic) NSDictionary *textColors; // @synthesize textColors=_textColors;
@property(copy, nonatomic) NSDictionary *backgroundColors; // @synthesize backgroundColors=_backgroundColors;
@property(copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;
- (void).cxx_destruct;
- (id)titleTextAttributesForUserIntefaceStyle:(long long)arg1;
- (id)backgroundColorForUserInterfaceStyle:(long long)arg1;
- (id)initWithTitles:(id)arg1 backgroundColors:(id)arg2 andTextColors:(id)arg3;

@end
