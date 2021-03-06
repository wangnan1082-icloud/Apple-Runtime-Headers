//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <LaunchServices/NSSecureCoding-Protocol.h>

@class NSString, NSURL, NSUUID;

@interface LSCodeEvaluationInfo : NSObject <NSSecureCoding>
{
    unsigned int _uid;
    NSUUID *_identifier;
    NSURL *_url;
    NSString *_teamName;
    NSURL *_displayBundleURL;
    NSURL *_processURL;
    NSURL *_responsibleURL;
    NSString *_signingID;
    NSString *_processSigningID;
    NSString *_responsibleSigningID;
    NSString *_malwareName;
    NSString *_teamID;
    NSString *_processTeamID;
    NSString *_responsibleTeamID;
    long long _totalUnits;
    long long _completedUnits;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long completedUnits; // @synthesize completedUnits=_completedUnits;
@property(nonatomic) long long totalUnits; // @synthesize totalUnits=_totalUnits;
@property(copy, nonatomic) NSString *responsibleTeamID; // @synthesize responsibleTeamID=_responsibleTeamID;
@property(copy, nonatomic) NSString *processTeamID; // @synthesize processTeamID=_processTeamID;
@property(copy, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
@property(copy, nonatomic) NSString *malwareName; // @synthesize malwareName=_malwareName;
@property(copy, nonatomic) NSString *responsibleSigningID; // @synthesize responsibleSigningID=_responsibleSigningID;
@property(copy, nonatomic) NSString *processSigningID; // @synthesize processSigningID=_processSigningID;
@property(copy, nonatomic) NSString *signingID; // @synthesize signingID=_signingID;
@property(copy, nonatomic) NSURL *responsibleURL; // @synthesize responsibleURL=_responsibleURL;
@property(copy, nonatomic) NSURL *processURL; // @synthesize processURL=_processURL;
@property(copy, nonatomic) NSURL *displayBundleURL; // @synthesize displayBundleURL=_displayBundleURL;
@property(copy, nonatomic) NSString *teamName; // @synthesize teamName=_teamName;
@property(nonatomic) unsigned int uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *responsibleBundleURL;
@property(readonly) BOOL isDeterminate;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

