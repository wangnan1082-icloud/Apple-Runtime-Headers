//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface UNSKeyedDictionaryRepository : NSObject
{
    NSString *_directory;
    NSString *_fileName;
    NSString *_pathExtension;
}

- (void).cxx_destruct;
- (void)_removeDictionaryAtPath:(id)arg1;
- (_Bool)_saveDictionary:(id)arg1 atPath:(id)arg2;
- (id)_dataAtPath:(id)arg1;
- (id)_dictionaryAtPath:(id)arg1;
- (id)_pathForKey:(id)arg1;
- (id)_directoryForKey:(id)arg1;
- (void)removeDictionaryForKey:(id)arg1;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (id)dictionaryForKey:(id)arg1;
- (id)allKeys;
- (id)initWithDirectory:(id)arg1 fileName:(id)arg2 pathExtension:(id)arg3;

@end
