//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface RMFamilyMember : NSObject
{
    BOOL _isMe;
    BOOL _isParent;
    BOOL _isOrganizer;
    NSNumber *_DSID;
    NSString *_appleID;
    NSString *_memberType;
    NSString *_firstName;
    NSString *_lastName;
}

@property(nonatomic) BOOL isOrganizer; // @synthesize isOrganizer=_isOrganizer;
@property(nonatomic) BOOL isParent; // @synthesize isParent=_isParent;
@property(nonatomic) BOOL isMe; // @synthesize isMe=_isMe;
@property(readonly, copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly, copy, nonatomic) NSString *memberType; // @synthesize memberType=_memberType;
@property(readonly, copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(readonly, copy, nonatomic) NSNumber *DSID; // @synthesize DSID=_DSID;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDSID:(id)arg1 appleID:(id)arg2 memberType:(id)arg3 firstName:(id)arg4 lastName:(id)arg5 isMe:(BOOL)arg6 isParent:(BOOL)arg7 isOrganizer:(BOOL)arg8;

@end

