//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString, SFImage;

@protocol SFSportsTeam <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSString *accessibilityDescription;
@property(copy, nonatomic) NSString *score;
@property(copy, nonatomic) NSString *record;
@property(retain, nonatomic) SFImage *logo;
@end
