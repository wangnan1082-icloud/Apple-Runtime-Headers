//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CVMLValidationUtilities : NSObject
{
}

+ (id)faceObservationFromOptions:(id)arg1 withOptionName:(id)arg2 error:(id *)arg3;
+ (id)arrayFromOptions:(id)arg1 withOptionName:(id)arg2 andEnsureClass:(Class)arg3 error:(id *)arg4;
+ (id)arrayFromOptions:(id)arg1 withOptionName:(id)arg2 andEnsureClass:(Class)arg3 withCountRange:(struct _NSRange)arg4 error:(id *)arg5;
+ (BOOL)validateNonZeroImageWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 componentNameProvidingBlock:(CDUnknownBlockType)arg3 error:(id *)arg4;

@end

