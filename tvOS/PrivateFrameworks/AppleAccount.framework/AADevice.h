//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AADevice : NSObject
{
    NSString *_model;
    NSString *_name;
    NSString *_modelSmallPhotoURL2x;
    NSString *_modelSmallPhotoURL1x;
    NSString *_modelLargePhotoURL2x;
    NSString *_modelLargePhotoURL1x;
    NSString *_modelDisplayName;
}

@property(readonly, nonatomic) NSString *modelDisplayName; // @synthesize modelDisplayName=_modelDisplayName;
@property(readonly, nonatomic) NSString *modelLargePhotoURL1x; // @synthesize modelLargePhotoURL1x=_modelLargePhotoURL1x;
@property(readonly, nonatomic) NSString *modelLargePhotoURL2x; // @synthesize modelLargePhotoURL2x=_modelLargePhotoURL2x;
@property(readonly, nonatomic) NSString *modelSmallPhotoURL1x; // @synthesize modelSmallPhotoURL1x=_modelSmallPhotoURL1x;
@property(readonly, nonatomic) NSString *modelSmallPhotoURL2x; // @synthesize modelSmallPhotoURL2x=_modelSmallPhotoURL2x;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end
