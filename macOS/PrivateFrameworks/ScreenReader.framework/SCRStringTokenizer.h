//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLocale, NSString;

__attribute__((visibility("hidden")))
@interface SCRStringTokenizer : NSObject
{
    struct __CFStringTokenizer *_tokenizer;
    NSLocale *_locale;
    NSString *_currentToken;
    NSString *_currentTokenLanguageID;
    NSString *_inputString;
    unsigned long long _tokenizerUnit;
    struct _NSRange _currentTokenRange;
}

+ (id)wordBoundaryTokenizerWithString:(id)arg1 locale:(id)arg2;
+ (id)wordBoundaryTokenizerWithString:(id)arg1;
+ (id)lineBreakTokenizerWithString:(id)arg1 locale:(id)arg2;
+ (id)lineBreakTokenizerWithString:(id)arg1;
+ (id)paragraphTokenizerWithString:(id)arg1 locale:(id)arg2;
+ (id)paragraphTokenizerWithString:(id)arg1;
+ (id)sentenceTokenizerWithString:(id)arg1 locale:(id)arg2;
+ (id)sentenceTokenizerWithString:(id)arg1;
+ (id)wordTokenizerWithString:(id)arg1 locale:(id)arg2;
+ (id)wordTokenizerWithString:(id)arg1;
+ (id)bestLanguageForString:(id)arg1 inRange:(struct _NSRange)arg2;
@property(readonly, nonatomic) unsigned long long tokenizerUnit; // @synthesize tokenizerUnit=_tokenizerUnit;
@property(readonly, copy, nonatomic) NSString *inputString; // @synthesize inputString=_inputString;
@property(copy, nonatomic) NSString *currentTokenLanguageID; // @synthesize currentTokenLanguageID=_currentTokenLanguageID;
@property(copy, nonatomic) NSString *currentToken; // @synthesize currentToken=_currentToken;
@property(nonatomic) struct _NSRange currentTokenRange; // @synthesize currentTokenRange=_currentTokenRange;
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (void).cxx_destruct;
- (BOOL)moveToTokenAtIndex:(unsigned long long)arg1;
- (BOOL)moveToPreviousToken;
- (BOOL)moveToNextToken;
@property(readonly, nonatomic) BOOL isCurrentTokenValid;
- (void)dealloc;
- (id)initWithString:(id)arg1 tokenizerUnit:(unsigned long long)arg2 locale:(id)arg3;
- (id)initWithString:(id)arg1 tokenizerUnit:(unsigned long long)arg2;
- (id)init;

@end
