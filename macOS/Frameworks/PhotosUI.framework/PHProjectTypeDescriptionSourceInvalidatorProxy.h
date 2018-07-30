//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PHProjectTypeDescriptionInvalidator.h"

@class NSString;

@interface PHProjectTypeDescriptionSourceInvalidatorProxy : NSObject <PHProjectTypeDescriptionInvalidator>
{
    id <PHProjectTypeDescriptionInvalidator> _target;
}

@property(retain, nonatomic) id <PHProjectTypeDescriptionInvalidator> target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)invalidateFooterTextForSubtypesOfProjectType:(id)arg1;
- (void)invalidateTypeDescriptionForProjectType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
