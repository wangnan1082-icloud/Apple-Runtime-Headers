//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SearchFoundation/SFText.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "SFFormattedText.h"

@class NSData, NSDictionary, NSString, SFImage;

@interface SFFormattedText : SFText <SFFormattedText, NSSecureCoding, NSCopying>
{
    CDStruct_87e10b33 _has;
    _Bool _isEmphasized;
    _Bool _isBold;
    int _textColor;
    SFImage *_glyph;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) int textColor; // @synthesize textColor=_textColor;
@property(nonatomic) _Bool isBold; // @synthesize isBold=_isBold;
@property(nonatomic) _Bool isEmphasized; // @synthesize isEmphasized=_isEmphasized;
@property(retain, nonatomic) SFImage *glyph; // @synthesize glyph=_glyph;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasTextColor;
- (_Bool)hasIsBold;
- (_Bool)hasIsEmphasized;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned long long maxLines;
@property(readonly) Class superclass;
@property(copy) NSString *text;

@end
