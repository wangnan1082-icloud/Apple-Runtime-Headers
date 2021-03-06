//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (JSON)
+ (id)JSONStringFromArray:(id)arg1 objectType:(int)arg2;
+ (id)JSONStringForKey:(id)arg1 dictionaryValue:(id)arg2;
+ (id)JSONStringForKey:(id)arg1 arrayValue:(id)arg2;
+ (id)JSONStringForKey:(id)arg1 floatValue:(double)arg2;
+ (id)JSONStringForKey:(id)arg1 intValue:(long long)arg2;
+ (id)JSONStringForKey:(id)arg1 boolValue:(BOOL)arg2;
+ (id)JSONStringForKey:(id)arg1 stringValue:(id)arg2;
+ (id)JSONStringDictionarySuffix;
+ (id)JSONStringDictionaryPrefix;
- (id)unescapedString;
- (id)escapedString;
- (id)prettyPrintedJSON;
@end

