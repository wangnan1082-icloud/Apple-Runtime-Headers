//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@interface NSError (HAPError)
+ (id)errorWithOSStatus:(long)arg1;
+ (id)hapErrorWithcode:(int)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;
- (_Bool)isHMError;
- (_Bool)isHAPError;
@end
