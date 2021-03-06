//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ArouetLanguageSpec, CHRecognizer, NSIndexSet, NSMutableIndexSet;
@protocol OS_dispatch_queue;

@interface ArouetRecognitionManager : NSObject
{
    ArouetLanguageSpec *_languageSpec;
    CHRecognizer *__recognizer;
    NSObject<OS_dispatch_queue> *__recognitionQueue;
    int __highestRequestID;
    NSMutableIndexSet *__activeRequestIDs;
    NSIndexSet *__canceledRequestIDs;
    double _minRecognitionDuration;
}

@property(copy) NSIndexSet *_canceledRequestIDs; // @synthesize _canceledRequestIDs=__canceledRequestIDs;
@property(retain, nonatomic) NSMutableIndexSet *_activeRequestIDs; // @synthesize _activeRequestIDs=__activeRequestIDs;
@property(nonatomic) int _highestRequestID; // @synthesize _highestRequestID=__highestRequestID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *_recognitionQueue; // @synthesize _recognitionQueue=__recognitionQueue;
@property(retain, nonatomic) CHRecognizer *_recognizer; // @synthesize _recognizer=__recognizer;
@property(nonatomic) double minRecognitionDuration; // @synthesize minRecognitionDuration=_minRecognitionDuration;
@property(readonly) ArouetLanguageSpec *languageSpec; // @synthesize languageSpec=_languageSpec;
- (void).cxx_destruct;
- (int)_recognizerContentTypeForUITextContentType:(id)arg1;
- (void)_updateRecognizer;
- (_Bool)canUsePrewarmedRecognizerForLanguageSpec:(id)arg1;
- (id)transliterationVariantsForString:(id)arg1;
- (_Bool)isOVSString:(id)arg1;
- (void)performOperationAfterCurentRecognitionRequest:(CDUnknownBlockType)arg1;
- (void)cancelLastRecognitionRequest;
- (void)prewarmRecognizer;
- (void)requestRecognitionForDrawing:(id)arg1 prefixPromise:(CDUnknownBlockType)arg2 recentDeletionsPromise:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)description;
- (id)initWithLanguageSpec:(id)arg1;
- (id)init;

@end

