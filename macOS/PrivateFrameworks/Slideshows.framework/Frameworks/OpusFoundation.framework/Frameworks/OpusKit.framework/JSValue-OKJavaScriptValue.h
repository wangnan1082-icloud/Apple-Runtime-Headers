//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JavaScriptCore/JSValue.h>

@interface JSValue (OKJavaScriptValue)
+ (id)valueWithCATransform3D:(struct CATransform3D)arg1 inContext:(id)arg2;
+ (id)valueWithVector4:(struct OKVector4)arg1 inContext:(id)arg2;
+ (id)valueWithVector3:(struct OKVector3)arg1 inContext:(id)arg2;
+ (id)valueWithOffset:(struct OFNSOffset)arg1 inContext:(id)arg2;
+ (id)valueWithCoodinateRegion:(CDStruct_b7cb895d)arg1 inContext:(id)arg2;
+ (id)valueWithLocationCoordinate2D:(struct OKLocationCoordinate2D)arg1 inContext:(id)arg2;
+ (id)valueWithEdgeInsets:(struct OKEdgeInsets)arg1 inContext:(id)arg2;
- (struct CATransform3D)toCATransform3D;
- (struct OKVector4)toVector4;
- (struct OKVector3)toVector3;
- (struct OFNSOffset)toOffset;
- (CDStruct_b7cb895d)toCoordinateRegion;
- (struct OKLocationCoordinate2D)toLocationCoordinate2D;
- (struct OKEdgeInsets)toEdgeInsets;
@end

