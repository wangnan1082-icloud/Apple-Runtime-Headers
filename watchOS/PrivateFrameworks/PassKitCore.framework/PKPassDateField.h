//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPassField.h>

@interface PKPassDateField : PKPassField
{
    _Bool _isRelative;
    _Bool _ignoresTimeZone;
    int _dateStyle;
    int _timeStyle;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool ignoresTimeZone; // @synthesize ignoresTimeZone=_ignoresTimeZone;
@property(nonatomic) _Bool isRelative; // @synthesize isRelative=_isRelative;
@property(nonatomic) int timeStyle; // @synthesize timeStyle=_timeStyle;
@property(nonatomic) int dateStyle; // @synthesize dateStyle=_dateStyle;
- (id)value;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
