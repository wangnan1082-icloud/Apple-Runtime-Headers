//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUAutoCalculator.h>

@interface PIFaceBalanceAutoCalculator : NUAutoCalculator
{
    long long _rawState;
}

+ (CDStruct_39925896)faceBalanceFromFaceImage:(id)arg1 forFaceRect:(CDStruct_996ac03c)arg2;
+ (CDStruct_996ac03c)faceRectFromNormalizedFaceRet:(struct CGRect)arg1 forImageExtent:(CDStruct_996ac03c)arg2 scaleX:(double)arg3 scaleY:(double)arg4;
+ (id)faceBalanceResultFromFaceObservations:(id)arg1 request:(id)arg2 error:(out id *)arg3;
+ (void)calculateRAWWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)calculateWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly) long long rawState; // @synthesize rawState=_rawState;
- (void)calculate:(CDUnknownBlockType)arg1;
- (id)initWithRequest:(id)arg1 isRAW:(BOOL)arg2;

@end

