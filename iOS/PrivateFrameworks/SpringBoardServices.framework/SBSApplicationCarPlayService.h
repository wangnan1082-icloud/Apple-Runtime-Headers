//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpringBoardServices/SBSAbstractApplicationService.h>

@interface SBSApplicationCarPlayService : SBSAbstractApplicationService
{
}

- (void)fetchApplicationIconInformationForBundleIdentifier:(id)arg1 inVehicle:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)resetIconStateForVehicleId:(id)arg1;
- (void)setIconState:(id)arg1 hiddenIcons:(id)arg2 forVehicleId:(id)arg3;
- (void)fetchIconStateForVehicleId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
