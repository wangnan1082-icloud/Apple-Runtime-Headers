//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PGPictureInPictureRemoteObject, PGPictureInPictureViewController;

@protocol PGPictureInPictureRemoteObjectDelegate <NSObject>

@optional
- (void)pictureInPictureRemoteObject:(PGPictureInPictureRemoteObject *)arg1 willDestroyPictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureRemoteObject:(PGPictureInPictureRemoteObject *)arg1 didHidePictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureRemoteObject:(PGPictureInPictureRemoteObject *)arg1 willHidePictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureRemoteObject:(PGPictureInPictureRemoteObject *)arg1 didShowPictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureRemoteObject:(PGPictureInPictureRemoteObject *)arg1 willShowPictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureRemoteObject:(PGPictureInPictureRemoteObject *)arg1 didCreatePictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (_Bool)pictureInPictureRemoteObjectShouldAcceptSetupRequest:(PGPictureInPictureRemoteObject *)arg1;
@end
