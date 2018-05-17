//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface CVMLClusteringLogger : NSObject
{
    _Bool _logEnabled;
    NSURL *_logFolderURL;
    NSURL *_logFileURL;
    NSString *_fileNameBase;
}

+ (id)currentDateTime;
+ (id)padStringWithSpaces:(id)arg1 toSize:(long long)arg2;
+ (void)appendString:(id)arg1 toLogFile:(id)arg2;
@property(readonly) NSString *fileNameBase; // @synthesize fileNameBase=_fileNameBase;
@property(readonly) _Bool logEnabled; // @synthesize logEnabled=_logEnabled;
@property(readonly) NSURL *logFileURL; // @synthesize logFileURL=_logFileURL;
@property(readonly) NSURL *logFolderURL; // @synthesize logFolderURL=_logFolderURL;
- (void).cxx_destruct;
- (void)logClusterLookupMapL1:(const map_2e2a8070 *)arg1;
- (void)logClusterMapL1:(const map_2e2a8070 *)arg1;
- (void)logClusterLookupMapL0:(const map_2e2a8070 *)arg1;
- (void)logClusterMapL0:(const map_2e2a8070 *)arg1;
- (void)logClusterMap:(const map_2e2a8070 *)arg1 level:(id)arg2;
- (void)logString:(id)arg1;
- (void)resetFileNameURLWithCurentDateTime;
- (id)initWithOptions:(id)arg1 logEnabled:(_Bool)arg2;
- (id)initWithOptions:(id)arg1 logEnabled:(_Bool)arg2 logFileNameBase:(id)arg3;

@end
