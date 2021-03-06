//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, NSValue;

@interface PRTypologyRecord : NSObject
{
    NSString *_string;
    struct _NSRange _range;
    NSString *_language;
    NSArray *_languages;
    NSString *_appIdentifier;
    NSValue *_selectedRangeValue;
    NSArray *_topLanguages;
    NSArray *_keyEventArray;
    NSMutableArray *_typologyCorrections;
    NSMutableArray *_typologyCandidates;
    NSArray *_results;
    double _openTime;
    double _closeTime;
    _Bool _autocorrect;
    _Bool _initialCapitalize;
    _Bool _autocapitalize;
    _Bool _isOpen;
}

+ (void)setTypologyRecordsLimit:(unsigned int)arg1;
+ (void)resetTypologyRecords;
+ (void)writeTypologyRecords;
+ (id)currentTypologyRecord;
+ (id)openTypologyRecordWithString:(id)arg1 range:(struct _NSRange)arg2 language:(id)arg3 languages:(id)arg4 topLanguages:(id)arg5 autocorrect:(_Bool)arg6 initialCapitalize:(_Bool)arg7 autocapitalize:(_Bool)arg8 keyEventArray:(id)arg9 appIdentifier:(id)arg10 selectedRangeValue:(id)arg11;
- (void)closeTypologyRecordWithResults:(id)arg1;
- (id)dictionaryRepresentation;
- (void)addCandidate:(id)arg1;
- (void)addCorrection:(id)arg1;
- (void)dealloc;
- (id)initWithString:(id)arg1 range:(struct _NSRange)arg2 language:(id)arg3 languages:(id)arg4 topLanguages:(id)arg5 autocorrect:(_Bool)arg6 initialCapitalize:(_Bool)arg7 autocapitalize:(_Bool)arg8 keyEventArray:(id)arg9 appIdentifier:(id)arg10 selectedRangeValue:(id)arg11;

@end

