//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSString;

@interface CTPhoneNumberInfo : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isPresent;
    _Bool _isEditable;
    _Bool _isRead;
    NSString *_label;
    NSString *_number;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool isRead; // @synthesize isRead=_isRead;
@property(nonatomic) _Bool isEditable; // @synthesize isEditable=_isEditable;
@property(nonatomic) _Bool isPresent; // @synthesize isPresent=_isPresent;
@property(retain, nonatomic) NSString *number; // @synthesize number=_number;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

