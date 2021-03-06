//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClockKit/CLKTextProvider.h>

@class NSMutableArray, NSString;

@interface CLKCompoundTextProvider : CLKTextProvider
{
    NSMutableArray *_textProviders;
    NSMutableArray *_segments;
    NSString *_sessionCacheKey;
}

+ (_Bool)supportsSecureCoding;
+ (id)compoundTextProviderCurrentlyFormattingOnThisThread;
+ (id)compoundProviderWithLocalizedFormat:(id)arg1 localizedTextProviders:(id)arg2;
- (void).cxx_destruct;
- (void)_processFormat:(id)arg1 arguments:(char *)arg2;
- (id)_arrayOfTextProviderJSONObjectRepresentations;
- (id)JSONObjectRepresentation;
- (id)_initWithJSONObjectRepresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)_updateFrequency;
- (void)_validate;
- (void)_endSession;
- (id)_replacementForTextProvider:(id)arg1 index:(unsigned int)arg2 withStyle:(id)arg3;
- (id)_attributedStringForSegment:(id)arg1 withStyle:(id)arg2;
- (id)_sessionAttributedTextForIndex:(unsigned int)arg1 withStyle:(id)arg2;
- (id)_sessionCacheKey;
- (void)_startSessionWithDate:(id)arg1;
- (int)timeTravelUpdateFrequency;
- (id)description;
- (void)addTextProvider:(id)arg1 andGetPlaceholderString:(id *)arg2;
- (id)initWithSegments:(id)arg1 textProviders:(id)arg2;
- (id)initWithFormat:(id)arg1 arguments:(char *)arg2;

@end

