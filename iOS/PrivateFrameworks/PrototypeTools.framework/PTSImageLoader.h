//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PTSImageLoader : NSObject
{
    NSString *_path;
    _Bool _loading;
    id <PTSImageLoaderDelegate> _delegate;
}

@property(getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) __weak id <PTSImageLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)startLoading;
- (id)initWithPath:(id)arg1;

@end
