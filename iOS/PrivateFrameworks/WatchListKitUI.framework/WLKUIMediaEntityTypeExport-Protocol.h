//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class NSString;

@protocol WLKUIMediaEntityTypeExport <JSExport>
+ (id)homeVideo;
+ (id)rental;
+ (id)movie;
+ (id)episode;
+ (id)season;
+ (id)show;
@property(readonly, nonatomic) NSString *collectionType;
@property(readonly, nonatomic) NSString *category;
@property(readonly, nonatomic) NSString *subtype;
@end
