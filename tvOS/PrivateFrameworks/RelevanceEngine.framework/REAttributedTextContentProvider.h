//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/RETextContentProvider.h>

@class NSAttributedString;

@interface REAttributedTextContentProvider : RETextContentProvider
{
    NSAttributedString *_text;
}

+ (id)textContentProviderWithAttributedText:(id)arg1;
@property(readonly, nonatomic) NSAttributedString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)attributedStringRepresentation;
- (id)initWithAttributedText:(id)arg1;
- (id)contentEncodedString;

@end

