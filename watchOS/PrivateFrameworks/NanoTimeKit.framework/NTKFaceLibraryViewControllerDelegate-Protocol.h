//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKit/NSObject-Protocol.h>

@class NTKFace, NTKFaceLibraryViewController, NTKFaceViewController;

@protocol NTKFaceLibraryViewControllerDelegate <NSObject>
- (void)faceLibraryViewControllerDidEndSwiping:(NTKFaceLibraryViewController *)arg1;
- (void)faceLibraryViewControllerDidStartSwiping:(NTKFaceLibraryViewController *)arg1;
- (void)faceLibraryViewControllerDidCompleteSelection:(NTKFaceLibraryViewController *)arg1;
- (void)faceLibraryViewControllerWillCompleteSelection:(NTKFaceLibraryViewController *)arg1;
- (NTKFaceViewController *)faceLibraryViewController:(NTKFaceLibraryViewController *)arg1 newViewControllerForFace:(NTKFace *)arg2 configuration:(void (^)(NTKFaceViewController *))arg3;
@end

