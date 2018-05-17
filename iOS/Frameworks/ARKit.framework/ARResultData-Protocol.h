//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ARData.h"

@class ARLightEstimate, ARPointCloud;

@protocol ARResultData <ARData>

@optional
-     // Error parsing type: @"NSArray"160@0:8{?=[4]}16{?=[4]}80@"NSArray"144@"NSMutableArray"152, name: anchorsForCameraWithTransform:referenceOriginTransform:existingAnchors:anchorsToRemove:
- (ARPointCloud *)featurePoints;
- (ARLightEstimate *)lightEstimate;
- (unsigned long long)worldAlignmentModifiers;
-     // Error parsing type: {?=[4]}16@0:8, name: worldAlignmentTransform
- (CDStruct_ca3abd1f)trackingState;
-     // Error parsing type: {?=[4]}16@0:8, name: cameraTransform
- (double)timestamp;
@end
