//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSString;

@protocol MNInstructionContents
@property(nonatomic) BOOL suppressFallback;
@property(readonly, nonatomic) BOOL hasServerContent;
@property(retain, nonatomic) NSString *roadName;
@property(nonatomic) BOOL suppressNames;
@property(readonly, nonatomic) long long context;
- (NSArray *)instructionForStage:(unsigned long long)arg1 distance:(double)arg2;
- (NSArray *)instructionWithShorterAlternatives;
- (NSString *)instruction;
- (NSString *)stringForDistance:(double)arg1;
@end
