//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGGraphLocationNode.h>

@interface PGGraphAddressNode : PGGraphLocationNode
{
}

- (id)UUID;
- (void)enumeratePersonHomeOrWorkNodesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)isPersonHomeOrWorkAddress;
- (id)location;
- (struct CLLocationCoordinate2D)coordinate;
- (_Bool)isOcean;
- (_Bool)locationIsImproved;
- (void)addressEnumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAreaNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)countryNode;
- (id)stateNode;
- (id)cityNode;
- (id)districtNode;
- (id)streetNode;
- (id)areaNodes;

@end

