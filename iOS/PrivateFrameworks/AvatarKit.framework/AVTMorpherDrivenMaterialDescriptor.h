//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCNMaterial, SCNNode;

@interface AVTMorpherDrivenMaterialDescriptor : NSObject
{
    SCNNode *_readMorpherNode;
    long long _morphTargetIndex;
    SCNMaterial *_material;
    NSString *_propertyName;
}

@property(copy, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
@property(retain, nonatomic) SCNMaterial *material; // @synthesize material=_material;
@property(nonatomic) long long morphTargetIndex; // @synthesize morphTargetIndex=_morphTargetIndex;
@property(retain, nonatomic) SCNNode *readMorpherNode; // @synthesize readMorpherNode=_readMorpherNode;
- (void).cxx_destruct;

@end
