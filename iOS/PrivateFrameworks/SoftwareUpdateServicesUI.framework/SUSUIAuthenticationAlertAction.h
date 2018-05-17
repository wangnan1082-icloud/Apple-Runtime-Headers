//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BSAction.h"

@class SUAutoInstallOperation, SUDownload;

@interface SUSUIAuthenticationAlertAction : BSAction
{
    _Bool _loaded;
    SUDownload *_download;
    SUAutoInstallOperation *_autoInstallOperation;
    _Bool _forInstallTonight;
    _Bool _canDeferInstallation;
}

- (void).cxx_destruct;
- (void)_loadIfNecessary;
- (void)fireCompletionIfNecessaryForResult:(_Bool)arg1;
@property(readonly, nonatomic) _Bool canDeferInstallation;
@property(readonly, nonatomic) _Bool forInstallTonight;
@property(readonly, retain, nonatomic) SUAutoInstallOperation *autoInstallOperation;
@property(readonly, retain, nonatomic) SUDownload *download;
- (id)initWithDownload:(id)arg1 autoInstallOperation:(id)arg2 forInstallTonight:(_Bool)arg3 canDeferInstallation:(_Bool)arg4 completionBlock:(CDUnknownBlockType)arg5;

@end
