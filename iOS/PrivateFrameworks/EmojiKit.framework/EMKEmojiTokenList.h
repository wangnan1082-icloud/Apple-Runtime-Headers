//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmojiKit/NSCopying-Protocol.h>

@class NSArray;

@interface EMKEmojiTokenList : NSObject <NSCopying>
{
    NSArray *_emojiTokenArray;
}

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)emojiTokenAtIndex:(unsigned long long)arg1;
@property(readonly) unsigned long long count;
@property(readonly) NSArray *emojiTokenArray;
- (id)initWithEmojiTokenArray:(id)arg1;

@end

