//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PHProjectElement.h>

#import "NSSecureCoding.h"

@class NSAttributedString, NSString;

@interface PHProjectTextElement : PHProjectElement <NSSecureCoding>
{
    NSString *_text;
    NSAttributedString *_attributedText;
    long long _textElementType;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) long long textElementType; // @synthesize textElementType=_textElementType;
@property(readonly, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithText:(id)arg1 textAttributes:(id)arg2 type:(long long)arg3 weight:(id)arg4 placement:(struct CGRect)arg5;
- (id)initWithAttributedText:(id)arg1 type:(long long)arg2 weight:(id)arg3 placement:(struct CGRect)arg4;
- (id)initWithText:(id)arg1 type:(long long)arg2 weight:(id)arg3 placement:(struct CGRect)arg4;
- (id)initWithText:(id)arg1 attributedText:(id)arg2 type:(long long)arg3 weight:(id)arg4 placement:(struct CGRect)arg5;

@end
