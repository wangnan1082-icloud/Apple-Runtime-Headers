//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@interface NSError (PhotoVisionAdditions)
+ (id)errorForRDVisionClientWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;
+ (id)errorForRDVisionClientWithLocalizedDescription:(id)arg1;
+ (id)errorForRDVisionClientWithUserInfo:(id)arg1;
+ (id)errorForRDVisionClientInvalidParameterWithLocalizedDescription:(id)arg1;
+ (id)errorForRDVisionClientInvalidParameterNamed:(id)arg1 realValue:(double)arg2;
+ (id)errorForRDVisionClientInvalidParameterNamed:(id)arg1 integerValue:(long long)arg2;
+ (id)errorForRDVisionClientInvalidParameterNamed:(id)arg1 value:(id)arg2;
+ (id)errorForRDVisionClientInvalidNilParameterNamed:(id)arg1;
+ (id)errorForRDVisionClientUnexpectedCondition:(id)arg1;
+ (id)errorForRDVisionClientUnimplementedFunction;
+ (id)errorForRDVisionClientErrorCode:(long long)arg1 userInfo:(id)arg2;
@end
