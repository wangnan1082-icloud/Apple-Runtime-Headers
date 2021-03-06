//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface _DPHCMSSample : NSObject
{
    unsigned long long _hashFunctionIndex;
    unsigned long long _bitIndex;
    NSData *_bitString;
}

+ (id)jsonStringFromSequence:(id)arg1 sequenceHashIndex:(unsigned short)arg2 sequencebitIndex:(unsigned long long)arg3 fragment:(id)arg4 fragmentHashIndex:(unsigned short)arg5 fragmentbitIndex:(unsigned long long)arg6 fragmentPosition:(unsigned short)arg7;
+ (id)jsonStringFrom:(id)arg1 hashIndex:(unsigned long long)arg2 bitIndex:(unsigned long long)arg3;
+ (id)convertDataToString:(id)arg1;
+ (id)dataFor:(id)arg1 hashAtIndex:(unsigned long long)arg2 epsilon:(double)arg3 bitCount:(unsigned long long)arg4 bitIndex:(unsigned long long)arg5;
+ (id)hcmsSampleWith:(id)arg1 privacyParameter:(double)arg2 hashFunctionCount:(unsigned long long)arg3 bitCount:(unsigned long long)arg4;
@property(readonly, nonatomic) NSData *bitString; // @synthesize bitString=_bitString;
@property(readonly, nonatomic) unsigned long long bitIndex; // @synthesize bitIndex=_bitIndex;
@property(readonly, nonatomic) unsigned long long hashFunctionIndex; // @synthesize hashFunctionIndex=_hashFunctionIndex;
- (void).cxx_destruct;
- (id)initWith:(id)arg1 privacyParameter:(double)arg2 hashFunctionCount:(unsigned long long)arg3 bitCount:(unsigned long long)arg4;
- (id)init;

@end

