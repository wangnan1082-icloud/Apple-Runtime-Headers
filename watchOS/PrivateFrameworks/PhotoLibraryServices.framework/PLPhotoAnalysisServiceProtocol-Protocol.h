//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLPhotoAnalysisGraphServiceProtocol.h"
#import "PLPhotoAnalysisJobServiceProtocol.h"
#import "PLPhotoAnalysisVisionServiceFaceProcessingProtocol.h"
#import "PLPhotoAnalysisVisionServiceSceneClassificationProtocol.h"
#import "PLPhotoAnalysisVisionServiceTaxonomyProtocol.h"

@class NSArray, NSDictionary;

@protocol PLPhotoAnalysisServiceProtocol <PLPhotoAnalysisJobServiceProtocol, PLPhotoAnalysisGraphServiceProtocol, PLPhotoAnalysisVisionServiceTaxonomyProtocol, PLPhotoAnalysisVisionServiceSceneClassificationProtocol, PLPhotoAnalysisVisionServiceFaceProcessingProtocol>
- (void)cancelOperationsWithIdentifiers:(NSArray *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *))arg3;
- (void)dumpAnalysisStatusWithContext:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
@end
