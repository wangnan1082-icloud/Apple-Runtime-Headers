//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol NPTOUserPhotoFaceServerDelegateProtocol <NSObject>
- (_Bool)createNewKaleidoscopeFaceFromPath:(NSString *)arg1;
- (_Bool)createNewUserPhotoFaceFromPath:(NSString *)arg1;
- (void)clockFaceCountCurrent:(unsigned int *)arg1 max:(unsigned int *)arg2;
- (NSString *)userPhotoFaceDirectory;
@end
