//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WFPostprocessor : NSObject
{
}

+ (id)adultWebSiteTagging:(id)arg1;
+ (id)normalizeStrippedHTML:(id)arg1;
+ (id)lightweightStripHTMLTags:(id)arg1;
+ (id)lightweightStripHTMLTagsForLine:(id)arg1;
+ (id)postprocessPlainTextWebPage:(id)arg1;
+ (struct _NSRange)rangeOfFirstHTMLTag:(id)arg1 searchRange:(struct _NSRange)arg2;

@end

